#include "scanner.h"
#include "lex.yy.cc"

Scanner::Scanner(SymbolTable * symbols, std::istream& input, std::ostream& output)
{
	m_symbolTable = symbols;
	m_lexer = new yyFlexLexer(&input, &output);
}

Scanner::~Scanner()
{

}

SymbolTable* Scanner::getSymbolTable(void)
{
	return m_symbolTable;
}

void Scanner::setCurrentToken(TokenCode tc, DataType dt, OpType op)
{
	Token* token = new Token();
	token->setTokenCode(tc);
	token->setDataType(dt);
	token->setOpType(op);
	m_currentToken = *token;
}

void Scanner::setCurrentToken(TokenCode tc, DataType dt, const std::string& lexeme)
{
	Token* token = new Token();
	SymbolTableEntry ste = *m_symbolTable->insert(lexeme);
	token->setSymTabEntry(&ste);
	token->setTokenCode(tc);
	token->setDataType(dt);
	m_currentToken = *token;
}

Token* Scanner::nextToken(void)
{
	TokenCode next;

	do
	{
		next = static_cast<TokenCode>(m_lexer->yylex());
	} while (	next == tc_SPACE
			||	next == tc_TAB
			||	next == tc_NEWLINE
			|| 	next == tc_COMMENT);

	if (next == tc_NUMBER
	||	next == tc_ID)
	{
		setCurrentToken(next, Type, m_lexer->YYText());
	}
	else
	{
		setCurrentToken(next, Type, Oper);
	}

	return &m_currentToken;
}


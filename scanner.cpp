#include "scanner.h"
#include "lex.yy.cc"

Scanner::Scanner(SymbolTable * symbols, std::istream& input, std::ostream& output)
{
	m_symbolTable = symbols;
	m_lexer = new FlexLexer(input, output);
}

Scanner::~Scanner()
{

}

Scanner::SymbolTable* getSymbolTable(void)
{
	return m_symbolTable;
}

void Scanner::setCurrentToken(TokenCode tc, DataType dt, OpType op)
{

}

void setCurrentToken(TokenCode tc, DataType dt, const std::string& lexeme)
{

}

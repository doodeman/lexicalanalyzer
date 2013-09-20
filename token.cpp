#include "token.h"

Token::Token(void)
{
}

Token::~Token(void)
{

}

TokenCode Token::getTokenCode(void) const
{
	return m_tokenCode;
}

DataType Token::getDataType(void) const
{
	return m_dataType;
}

OpType Token::getOpType(void) const
{
	return m_opType;
}

SymbolTableEntry* Token::getSymTabEntry(void) const
{
	return m_symtabEntry;
}

void Token::setTokenCode(const TokenCode tc)
{
	m_tokenCode = tc;
}

void Token::setDataType(const DataType dt)
{
	m_dataType = dt;
}

void Token::setOpType(const OpType op)
{
	m_opType = op;
}

void Token::setSymTabEntry(SymbolTableEntry* entry)
{
	m_symtabEntry = entry;
}

std::string Token::opTypeToString(void)
{
	switch(m_opType)
	{
	case op_PLUS:
		return "op_PLUS";
	case op_MINUS:
		return "op_MINUS";
	case op_OR:
		return "op_OR";
	case op_MULT:
		return "op_MULT";
	case op_DIVIDE:
		return "op_DIVIDE";
	case op_AND:
		return "op_AND";
	case op_DIV:
		return "op_DIV";
	case op_MOD:
		return "op_MOD";
	case op_LT:
		return "op_LT";
	case op_GT:
		return "op_GT";
	case op_LE:
		return "op_LE";
	case op_GE:
		return "op_GE";
	case op_EQ:
		return "op_EQ";
	case op_NE:
		return "op_NE";
	case op_NONE:
		return "op_NONE";
	}
}

std::string Token::tokenCodeToString(void)
{
	switch (m_tokenCode)
	{
	case tc_ID:
		return "tc_ID ";
	case tc_NUMBER:
	    return "tc_NUMBER ";
	case tc_ASSIGNOP:
	    return "tc_ASSIGNOP";
	case tc_RELOP:
	    return "tc_RELOP";
	case tc_ADDOP:
	    return "tc_ADDOP";
	case tc_MULOP:
	    return "tc_MULOP";
	case tc_SEMICOL:
	    return "tc_SEMICOL";
	case tc_COLON:
	    return "tc_COLON";
	case tc_COMMA:
	    return "tc_COMMA";
	case tc_DOT:
	    return "tc_DOT";
	case tc_DOTDOT:
	    return "tc_DOTDOT";
	case tc_LPAREN:
	    return "tc_LPAREN";
	case tc_LBRACKET:
	    return "tc_LBRACKET";
	case tc_RPAREN:
	    return "tc_RPAREN";
	case tc_RBRACKET:
	    return "tc_RBRACKET";
	case tc_PROGRAM:
	    return "tc_PROGRAM";
	case tc_VAR:
	    return "tc_VAR";
	case tc_ARRAY:
	    return "tc_ARRAY";
	case tc_OF:
	    return "tc_OF";
	case tc_INTEGER:
	    return "tc_INTEGER";
	case tc_REAL:
	    return "tc_REAL";
	case tc_FUNCTION:
	    return "tc_FUNCTION";
	case tc_PROCEDURE:
	    return "tc_PROCEDURE";
	case tc_BEGIN:
	    return "tc_BEGIN";
	case tc_END:
	    return "tc_END";
	case tc_IF:
	    return "tc_IF";
	case tc_THEN:
	    return "tc_THEN";
	case tc_ELSE:
	    return "tc_ELSE";
	case tc_WHILE:
	    return "tc_WHILE";
	case tc_DO:
	    return "tc_DO";
	case tc_NOT:
	    return "tc_NOT";
	case tc_SPACE:
	    return "tc_SPACE";
	case tc_TAB:
	    return "tc_TAB";
	case tc_NEWLINE:
	    return "tc_NEWLINE";
	case tc_COMMENT:
	    return "tc_COMMENT";
	case tc_EOF:
	    return "tc_EOF";
	case tc_ERROR:
	    return "tc_ERROR";
	case tc_ERROR2:
	    return "tc_ERROR2";
	case tc_NONE:
	    return "tc_NONE";
	}
}

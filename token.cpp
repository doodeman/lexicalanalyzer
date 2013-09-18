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
	case OpType::op_PLUS:
		return "op_PLUS";
	case OpType::op_MINUS:
		return "op_MINUS";
	case OpType::op_OR:
		return "op_OR";
	case OpType::op_MULT:
		return "op_MULT";
	case OpType::op_DIVIDE:
		return "op_DIVIDE";
	case OpType::op_AND:
		return "op_AND";
	case OpType::op_DIV:
		return "op_DIV";
	case OpType::op_MOD:
		return "op_MOD";
	case OpType::op_LT:
		return "op_LT";
	case OpType::op_GT:
		return "op_GT";
	case OpType::op_LE:
		return "op_LE";
	case OpType::op_GE:
		return "op_GE";
	case OpType::op_EQ:
		return "op_EQ";
	case OpType::op_NE:
		return "op_NE";
	case OpType::op_NONE:
		return "op_NONE";
	}
}

std::string Token::tokenCodeToString(void)
{
	switch (m_tokenCode)
	{
	case TokenCode::tc_NUMBER:
	    return "tc_NUMBER";
	case TokenCode::tc_ASSIGNOP:
	    return "tc_ASSIGNOP";
	case TokenCode::tc_RELOP:
	    return "tc_RELOP";
	case TokenCode::tc_ADDOP:
	    return "tc_ADDOP";
	case TokenCode::tc_MULOP:
	    return "tc_MULOP";
	case TokenCode::tc_SEMICOL:
	    return "tc_SEMICOL";
	case TokenCode::tc_COLON:
	    return "tc_COLON";
	case TokenCode::tc_COMMA:
	    return "tc_COMMA";
	case TokenCode::tc_DOT:
	    return "tc_DOT";
	case TokenCode::tc_DOTDOT:
	    return "tc_DOTDOT";
	case TokenCode::tc_LPAREN:
	    return "tc_LPAREN";
	case TokenCode::tc_LBRACKET:
	    return "tc_LBRACKET";
	case TokenCode::tc_RPAREN:
	    return "tc_RPAREN";
	case TokenCode::tc_RBRACKET:
	    return "tc_RBRACKET";
	case TokenCode::tc_PROGRAM:
	    return "tc_PROGRAM";
	case TokenCode::tc_VAR:
	    return "tc_VAR";
	case TokenCode::tc_ARRAY:
	    return "tc_ARRAY";
	case TokenCode::tc_OF:
	    return "tc_OF";
	case TokenCode::tc_INTEGER:
	    return "tc_INTEGER";
	case TokenCode::tc_REAL:
	    return "tc_REAL";
	case TokenCode::tc_FUNCTION:
	    return "tc_FUNCTION";
	case TokenCode::tc_PROCEDURE:
	    return "tc_PROCEDURE";
	case TokenCode::tc_BEGIN:
	    return "tc_BEGIN";
	case TokenCode::tc_END:
	    return "tc_END";
	case TokenCode::tc_IF:
	    return "tc_IF";
	case TokenCode::tc_THEN:
	    return "tc_THEN";
	case TokenCode::tc_ELSE:
	    return "tc_ELSE";
	case TokenCode::tc_WHILE:
	    return "tc_WHILE";
	case TokenCode::tc_DO:
	    return "tc_DO";
	case TokenCode::tc_NOT:
	    return "tc_NOT";
	case TokenCode::tc_SPACE:
	    return "tc_SPACE";
	case TokenCode::tc_TAB:
	    return "tc_TAB";
	case TokenCode::tc_NEWLINE:
	    return "tc_NEWLINE";
	case TokenCode::tc_COMMENT:
	    return "tc_COMMENT";
	case TokenCode::tc_EOF:
	    return "tc_EOF";
	case TokenCode::tc_ERROR:
	    return "tc_ERROR";
	case TokenCode::tc_ERROR2:
	    return "tc_ERROR2";
	case TokenCode::tc_NON:
	    return "tc_NON";
	}
}

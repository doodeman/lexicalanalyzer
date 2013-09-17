// **************************************************************
// *                                                            *
// *    T O K E N    (Header)                                   *
// *                                                            *
// *    CLASSES:     Token                                      *
// *                                                            *
// **************************************************************

#ifndef	token_h
#define	token_h

#include <string>
#include "symtab.h"

class Token {
private:
	TokenCode			m_tokenCode;		// the token code
	DataType			m_dataType;			// the data type
	OpType				m_opType;			// the operator type (if applicable)
	SymbolTableEntry*	m_symtabEntry;		// the corresponding entry in symbol table (if identifier or number)

public:
	Token(void);
	~Token();
	// Get operations
	TokenCode			getTokenCode(void) const;
	DataType			getDataType(void) const;
	OpType				getOpType(void) const;
	SymbolTableEntry*	getSymTabEntry(void) const;
	// Set operations
	void setTokenCode(const TokenCode tc);
	void setDataType(const DataType dt);
	void setOpType(const OpType op);
	void setSymTabEntry(SymbolTableEntry* entry);
	// String convertion helper functions for debugging
	std::string opTypeToString(void);
	std::string tokenCodeToString(void);

	// String conversion for debug 
	static std::string toString(Token* token)
	{
		std::string str = token->tokenCodeToString();
		if((token->getTokenCode() == tc_ID || token->getTokenCode() == tc_NUMBER) && token->getSymTabEntry() != NULL)
		{
			str += "(";
			str += token->getSymTabEntry()->lexeme;
			str += ")";
		}
		else if(token->getOpType() != op_NONE)
		{
			str += "(";
			str += token->opTypeToString();
			str += ")";
		}
		return str;
	}
};

#endif

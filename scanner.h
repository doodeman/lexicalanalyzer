// **************************************************************
// *                                                            *
// *    S C A N N E R   (Header)                                *
// *                                                            *
// *    CLASSES:        Scanner                                 *
// *                                                            *
// **************************************************************

#ifndef	scanner_h
#define	scanner_h

#include <fstream>
#include "token.h"

/* Parser includes, uncomment in part 2 */
//#include "sourceline.h"

// Forward declaration of the FlexLexer class
// -> have #include "lex.yy.cc" in scanner.cpp
class FlexLexer;

class Scanner {

private:
	FlexLexer* m_lexer;				// A Flex scanner
	SymbolTable* m_symbolTable;		// The symbol table of this scanner
	Token m_currentToken;			// Holder for the current token being processed
	// Set the corresponding fields in m_currentToken (does not need a symboltable entry)
	void setCurrentToken(TokenCode tc, DataType dt, OpType op);
	// Set the corresponding fields in m_currentToken and its symboltable entry
	void setCurrentToken(TokenCode tc, DataType dt, const std::string& lexeme);
public:
	// Connect the scanner to a symbol table and standard io or files
	Scanner(SymbolTable* symbols, std::istream& input, std::ostream& output);
	// Remember to call delete for m_lexer here
	~Scanner();																	
	// Getter for the symboltable
	SymbolTable* getSymbolTable(void);
	
	// Create the next token from the input character stream and add it to the symboltable if 
	// it is an identifier or a number
	Token* nextToken(void);					// returns the next token from FlexLexer	

/* Parser, implement in part 2, uncomment then */
/*private:
 SourceLine m_sourceLine;
 void flushSourceLine();					// print the current line and the errors found
public:
	void addError(std::string error);*/
};

#endif

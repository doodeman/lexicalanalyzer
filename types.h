// **************************************************************
// *                                                            *
// *    T Y P E S   (Header)                                    *
// *                                                            *
// *    CLASSES:      DataType, OpType                          *
// *                                                            *
// **************************************************************

#ifndef	types_h
#define	types_h

//----------------------------------------------------------------
// Available data types
//----------------------------------------------------------------
enum DataType {
	dt_INTEGER,
	dt_REAL,
	dt_ID,
	dt_KEYWORD,
	dt_OP,
	dt_NONE
};


//----------------------------------------------------------------
// Available operator types
//----------------------------------------------------------------
enum OpType {
	op_PLUS,
	op_MINUS,
	op_OR,
	op_MULT,
	op_DIVIDE,
	op_AND,
	op_DIV,
	op_MOD,
	op_LT,
	op_GT,
	op_LE,
	op_GE,
	op_EQ,
	op_NE,
	op_NONE
};

//----------------------------------------------------------------
// Operator string representation (indexed on OpType enum)
//----------------------------------------------------------------
static std::string opStrings[] = {   
	"PLUS",
	"MINUS",
	"OR",
	"MULT",
	"DIVIDE",
	"AND",
	"DIV",
	"MOD",
	"LT",
	"GT",
	"LE",
	"GE",
	"EQ",
	"NE",
	"NONE"
};
#define OpTypeToString(x) opStrings[x]

//----------------------------------------------------------------
// Available token codes of our language
//----------------------------------------------------------------
enum TokenCode {
	tc_ID=1,
	tc_NUMBER,
	tc_ASSIGNOP,
	tc_RELOP,
	tc_ADDOP,
	tc_MULOP,
	tc_SEMICOL,
	tc_COLON,
	tc_COMMA,
	tc_DOT,			// 10
	tc_DOTDOT,
	tc_LPAREN,
	tc_LBRACKET,
	tc_RPAREN,
	tc_RBRACKET,
	
	tc_PROGRAM,
	tc_VAR,
	tc_ARRAY,
	tc_OF,
	tc_INTEGER,		// 20
	tc_REAL,
	tc_FUNCTION,
	tc_PROCEDURE,
	tc_BEGIN,
	tc_END,
	tc_IF,
	tc_THEN,
	tc_ELSE,
	tc_WHILE,
	tc_DO,			// 30
	tc_NOT,
	
	tc_SPACE,
	tc_TAB,
	tc_NEWLINE,
	tc_COMMENT,
	
	tc_EOF,
	tc_ERROR,
	tc_ERROR2,
	
	tc_NONE
};

//----------------------------------------------------------------
// Token code string representation (indexed on TokenCode enum)
//----------------------------------------------------------------
static std::string tokenCodeStrings[] = {    
	"NONE",
	"ID",
	"NUMBER",
	"ASSIGNOP",
	"RELOP",
	"ADDOP",
	"MULOP",
	"SEMICOL",
	"COLON",
	"COMMA",
	"DOT",		//10
	"DOTDOT",
	"LPAREN",
	"LBRACKET",
	"RPAREN",
	"RBRACKET",
	"PROGRAM", 
	"VAR", 
	"ARRAY", 
	"OF", 
	"INTEGER",	// 20
	"REAL", 
	"FUNCTION", 
	"PROCEDURE", 
	"BEGIN", 
	"END", 
	"IF", 
	"THEN", 
	"ELSE", 
	"WHILE", 
	"DO",		// 30
	"NOT",
	"SPACE",
	"TAB",
	"NEWLINE",
	"COMMENT",
	"EOF",
	"ERROR", //"Illegal character",      
	"ERROR2", //"Identifier too long",      
	"NONE",
};
#define TokenCodeToString(x) tokenCodeStrings[x]

//----------------------------------------------------------------
// Code generation command codes - for part 3
//----------------------------------------------------------------
enum CodeOp  {	
	cd_LABEL, 
	cd_UMINUS, 
	cd_ASSIGN, 
	cd_ADD, cd_SUB, 
	cd_MULT, cd_DIVIDE, 
	cd_DIV, cd_MOD,
	cd_OR, cd_AND, 
	cd_NOT, 
	cd_LT, cd_LE, cd_GT, cd_GE, cd_EQ, cd_NE,
	cd_GOTO, 
	cd_CALL, 
	cd_APARAM, cd_FPARAM, 
	cd_VAR, 
	cd_RETURN, 
	cd_NOOP
};

//----------------------------------------------------------------
// TAC operations (indexed on CodeOp enum)
//----------------------------------------------------------------
static std::string codeStrings[] = {
	"LABEL", 
	"UMINUS", 
	"ASSIGN", 
	"ADD", "SUB",
	"MULT", "DIVIDE", 
	"DIV", "MOD", 
	"OR", "AND", 
	"NOT", 
	"LT", "LE", "GT", "GE", "EQ", "NE", 
	"GOTO", 
	"CALL", 
	"APARAM", "FPARAM", 
	"VAR",
	"RETURN", 
	"NOOP"
};
#define CodeOpToString(x) codeStrings[x]

#endif

%option c++
%option yylineno
%option noyywrap
%option caseless

%{
#define MaxLexemeSize 32
#include "token.h"
OpType Oper=op_NONE;
DataType Type=dt_NONE;
%}

DIGIT [0-9]
ID [a-z][a-z0-9]*
REAL_NUM ([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)|([0-9]+) 

%%

//• Lexemes for token relop, are: “=”, “<>”, “<”, “<=”, “>=” , “>”
"="		{ Oper = op_EQ;		Type = dt_OP; 	return(tc_RELOP); }
"<>" 	{ Oper = op_EQ; 	Type = dt_OP; 	return(tc_RELOP); }
"<"		{ Oper = op_LT; 	Type = dt_OP; 	return(tc_RELOP); }
"<=" 	{ Oper = op_LE; 	Type = dt_OP; 	return(tc_RELOP); }
">=" 	{ Oper = op_GE; 	Type = dt_OP; 	return(tc_RELOP); }
">" 	{ Oper = op_GT; 	Type = dt_OP; 	return(tc_RELOP); }

//• Lexemes for token addop are: “+”, “−”, “or”
"+"		{ Oper = op_PLUS; 	Type = dt_OP; 	return(tc_ADDOP); }
"-" 	{ Oper = op_MINUS; 	Type = dt_OP; 	return(tc_ADDOP); }
"or" 	{ Oper = op_OR; 	Type = dt_OP; 	return(tc_ADDOP); }

//• Lexemes for token mulop are: “∗”, “/”, “div”, “mod”, “and”
"*"  	{ Oper = op_MULT; 	Type = dt_OP; 	return(tc_MULOP); }
"/"		{ Oper = op_DIVIDE; Type = dt_OP; 	return(tc_MULOP); }
"div"	{ Oper = op_DIVIDE; Type = dt_OP; 	return(tc_MULOP); }
"mod"	{ Oper = op_MOD; 	Type = dt_OP; 	return(tc_MULOP); }
"and"	{ Oper = op_AND; 	Type = dt_OP; 	return(tc_MULOP); }

//• Lexeme for token assignop is: “:=”
":="	{ Oper = op_NONE; 	Type = dt_OP;	return(tc_ASSIGNOP); }

"program" { Oper = op_NONE; Type = dt_KEYWORD; return(tc_PROGRAM); }
{REAL_NUM} { Oper = op_NONE; Type = dt_REAL; return(tc_NUMBER); }


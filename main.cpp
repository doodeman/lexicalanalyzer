#include <iostream>
#include "scanner.h"
#include "symtab.h"

int main( int argc, const char* argv[] )
{
	SymbolTable st = new SymbolTable();
	Scanner(st, cin, cout);
}

#include <iostream>
#include "scanner.h"
#include "symtab.h"
#include "token.h"
#include "types.h"

using namespace std;


bool isEnd(TokenCode tc)
{
	if (tc == tc_EOF)
		return true;
	if (tc == tc_ERROR)
		return true;
	if (tc == tc_ERROR2)
		return true;
	if (tc == tc_END)
		return true;
	return false;
}

int main( int argc, const char* argv[] )
{
	SymbolTable* st = new SymbolTable();
	Scanner scanner = Scanner(st, std::cin, std::cout);
	Token* next;
	std::cout << endl;
	do
	{
		next = scanner.nextToken();
		std::cout << next->tokenCodeToString() << " ";
	} while (!isEnd(next->getTokenCode()));

	SymbolTable::print(scanner.getSymbolTable());
}




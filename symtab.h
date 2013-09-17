// **************************************************************
// *                                                            *
// *    S Y M T A B   (Header)                                  *
// *                                                            *
// *    CLASSES:      SymbolTableEntry, EntryList, SymbolTable  *
// *                                                            *
// **************************************************************

#ifndef	symtab_h
#define	symtab_h

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include "types.h"

//----------------------------------------------------------------
// SymbolTableEntry struct
//----------------------------------------------------------------

struct SymbolTableEntry{
	std::string	lexeme;
};

//----------------------------------------------------------------
// List of SymbolTableEntries 
//----------------------------------------------------------------

typedef std::vector<SymbolTableEntry*> EntryList;

//----------------------------------------------------------------
// SymbolTable class
//----------------------------------------------------------------

class SymbolTable {
private:
	EntryList m_table;
public:
	SymbolTable(void);
	~SymbolTable(void);
	// Table operations
	SymbolTableEntry* insert(const std::string lexeme);
	SymbolTableEntry* lookup(const std::string& lexeme);
	
	// Use this to print out the symboltable (for debugging)
	static void print(SymbolTable* table)
	{
		printf("Entry%20s\n", "Lexeme");
		for(std::size_t n = 0 ; n < table->m_table.size() ; n++)
		{
			printf("%5d%20s\n", static_cast<int>(n+1) , table->m_table[n]->lexeme.c_str()); 
		}
	}
};

#endif

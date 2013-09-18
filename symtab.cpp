#include "symtab.h"

SymbolTable::SymbolTable(void)
{
}

SymbolTable::~SymbolTable(void)
{

}

SymbolTableEntry* SymbolTable::insert(const std::string lexeme)
{
	SymbolTableEntry entry;
	entry.lexeme = lexeme;
	m_table.push_back(&entry);
	return entry;
}

SymbolTableEntry* SymbolTable::lookup(const std::string& lexeme)
{
	for (int i = 0; i < m_table.size(); i++)
	{
		if (lexeme == m_table[i]->lexeme)
		{
			return m_table[i];
		}
	}
	return NULL;
}

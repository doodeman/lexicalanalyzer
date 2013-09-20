#include "symtab.h"

SymbolTable::SymbolTable(void)
{
	m_table = std::vector<SymbolTableEntry*>();
}

SymbolTable::~SymbolTable(void)
{

}

SymbolTableEntry* SymbolTable::insert(const std::string lexeme)
{
	SymbolTableEntry* entry;
	entry = new SymbolTableEntry;
	entry->lexeme = lexeme;
	m_table.push_back(entry);
	return entry;
}

SymbolTableEntry* SymbolTable::lookup(const std::string& lexeme)
{
	for (unsigned i = 0; i < m_table.size(); i++)
	{
		if (lexeme == m_table[i]->lexeme)
		{
			return m_table[i];
		}
	}
	return NULL;
}

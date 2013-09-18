#include "symbtab.h"

SymbolTable::SymbolTable(void)
{
	m_table =
}

SymbolTable::~SymbolTable(void)
{

}

SymbolTableEntry* insert(const std::string lexeme)
{
	SymbolTableEntry entry;
	entry.lexeme = lexeme;
	m_table.push_back(lexeme);
	return entry*;
}

SymbolTableEntry* lookup(const std::string& lexeme)
{
	for (int i = 0; i < m_table.size(); i++)
	{
		if (lexeme == m_table[i].lexeme)
		{
			return m_table[i];
		}
	}
}

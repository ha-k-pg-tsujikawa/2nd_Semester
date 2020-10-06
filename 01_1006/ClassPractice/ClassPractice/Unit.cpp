#include "Common.h"
#include "Unit.h"
#include "Definition.h"

Unit::Unit()
{
	m_status._hp = 0;
	m_status._str = 0;
	m_status._mag = 0;
	m_status._tec = 0;
	m_status._spd = 0;
	m_status._def = 0;
	m_status._luc = 0;
	m_status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	printf("‘Ì—Í: %d\n", m_status._hp);
	printf(" —Í : %d\n", m_status._str);
	printf("–‚—Í: %d\n", m_status._mag);
	printf("Ší—p: %d\n", m_status._tec);
	printf("‘¬‚³: %d\n", m_status._spd);
	printf("–hŒä: %d\n", m_status._def);
	printf(" ‰^ : %d\n", m_status._luc);
	printf("–‚–h: %d\n", m_status._mde);
}
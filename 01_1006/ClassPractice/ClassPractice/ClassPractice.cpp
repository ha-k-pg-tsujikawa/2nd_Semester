﻿#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:

	Fighter();
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};

Fighter::Fighter()
{

}

Fighter::~Fighter()
{

}

int main()
{

	system("pause");
	return 0;
}
#include<iostream>
#include "Num.h"

Num::Num(int num)
	:m_Num(num)
{

}

void Num::Print()
{
	std::cout << m_Num << std::endl;
}

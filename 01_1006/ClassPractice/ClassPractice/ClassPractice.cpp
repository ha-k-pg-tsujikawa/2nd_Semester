#include "Common.h"
#include "Unit.h"

int main()
{
	Unit fighter;

	printf("hp  = %d\n", fighter.m_hp);
	printf("str = %d\n", fighter.m_str);
	printf("mag = %d\n", fighter.m_mag);
	printf("tec = %d\n", fighter.m_tec);
	printf("spd = %d\n", fighter.m_spd);
	printf("def = %d\n", fighter.m_def);
	printf("luc = %d\n", fighter.m_luc);
	printf("mde = %d\n", fighter.m_mde);

	system("pause");
	return 0;
}
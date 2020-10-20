#include "Enemy.h"

Enemy::Enemy()
{
	// Enemyê—p•Ï”
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{
	std::vector<int> v1(5, -1);

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	}
}
void Enemy::Draw()
{

}

#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemy専用変数
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

// 引数の矩形情報と、自分が当たっているか判定
bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("EnemyクラスのCheckHit()\n");

	// オーバーライド元も関数を使うには明確にして宣言して呼び出す
	Base::CheckHit(x, y, width, height);

	// 何かしらの当たり判定
	return false;
}
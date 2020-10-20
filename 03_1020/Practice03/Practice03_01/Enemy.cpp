#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemy専用変数
	m_Routine = 0;

	printf("Enemyのコンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemyのデストラクタ\n");
}

void Enemy::Exec()
{

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
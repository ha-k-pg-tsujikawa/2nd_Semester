
#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Enemy.h"

int main()
{
    // 基底クラスのポインタ変数へ、継承先のクラスのアドレスを代入できる
    Base* player = new Player();
    player->SetMoveSpeed(5.0f);

    Base* enemy = new Enemy();
    enemy->SetHp(100);

    if (player->CheckHit(10, 10, 20, 30) == false)
    {
        printf("当たっていません\n");
    }
    if (enemy->CheckHit(10, 10, 20, 30) == false)
    {
        printf("当たっていません\n");
    }

    delete player;
    delete enemy;

    system("pause");
    return 0;
}

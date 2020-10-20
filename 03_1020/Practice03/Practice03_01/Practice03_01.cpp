
#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
#include "Enemy.h"

void PrintHp(Base* target)
{
    if (target == nullptr)
    {
        return;
    }
    printf("hp = %d\n", target->GetHp());
}

int main()
{
    // 基底クラスのポインタ変数へ、継承先のクラスのアドレスを代入できる
    //Base* player = new Player();
    //Base* enemy = new Enemy();
    // どちらもBaseクラスを継承しているので
    // Baseのポインタ変数配列で一括管理することができる
    Base* array[] =
    {
        new Player(),
        new Enemy()
    };
    array[1]->SetHp(100);

    // arrayを使って当たり判定をfor文で回す
    for (int i = 0; i < 2; i++)
    {
        if (array[i] != nullptr)
        {
            PrintHp(array[i]);
            if (array[i]->CheckHit(10, 10, 20, 30) == false)
            {
                printf("当たってません\n");
            }
        }
    }

    //player->SetMoveSpeed(5.0f);
    //enemy->SetHp(100);

    //if (player->CheckHit(10, 10, 20, 30) == false)
    //{
    //    printf("当たっていません\n");
    //}
    //if (enemy->CheckHit(10, 10, 20, 30) == false)
    //{
    //    printf("当たっていません\n");
    //}

    // delete player;
    // delete enemy;

    for (int i = 0; i < 2; i++)
    {
        delete array[1];
        array[1] = nullptr;

    }

    system("pause");
    return 0;
}

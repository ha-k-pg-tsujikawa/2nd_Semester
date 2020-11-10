
#include <iostream>
#include "Num.h"
#include "Character.h"
#include"Enemy01.h"

int main()
{
    Num a(100), b(200);
    a.Print();
    b.Print();

    // staticなメンバ関数の使い方1
    // 通常のメンバ関数と同じように使える
    Enemy01 chara1(10);
    chara1.PrintHp();
    chara1.Print();
    Enemy01 chara2(20);
    chara2.PrintHp();
    chara2.Print();
    {
        Enemy01 chara3(30);
        chara3.PrintHp();
        chara3.Print();
    }
    // staticなメンバ関数の使い方2
    // クラス名::関数名(引数)
    Character::Print();

    return 0;
}

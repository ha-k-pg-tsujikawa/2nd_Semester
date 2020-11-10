#include<iostream>
#include "Num.h"

// 3.staticなメンバ変数はあらかじめ、以下のように実体化させておく
// 型名 クラス名::変数名(= 初期値)
// 注意 : 実体はcpp側に書く
int Num::m_Num = 0;

Num::Num(int num)
// 1.staticなメンバ変数はイニシャライザを使って初期化することができない
//	:m_Num(num)
{
	// 2.コンパイル時のエラーは出ない
	// しかし、実体が宣言されていないとリンクのエラーが出てしまう
	m_Num = num;
}

void Num::Print()
{
	std::cout << m_Num << std::endl;
}

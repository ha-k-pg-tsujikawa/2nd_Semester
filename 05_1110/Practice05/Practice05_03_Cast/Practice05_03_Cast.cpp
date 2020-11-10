﻿
#include <iostream>

// 親クラス
class Parent
{
public:
    Parent(){}
    virtual ~Parent(){}

    void Name(){ std::cout << "Parent" << std::endl; }
};

// 子クラス
class Child00 : public Parent
{
public:
    Child00(){}
    virtual ~Child00(){}

    void Name(){ std::cout << "Child00" << std::endl; }
};

class Child01 : public Parent
{
public:
    Child01() {}
    virtual ~Child01() {}

    void Name() { std::cout << "Child01" << std::endl; }
};

const int giConst = 0;

int main()
{
    // static_cast (暗黙の型変換が行われる型同士の変換を、明示的に行う方法)
    // static_cast<変換する型名>(変換元の値(変数))
    double PI = 3.1415926535;
    int iPI1 = static_cast<int>(PI);
    int iPI2 = PI;  // 暗黙的変換で、エラーは出ないが、warning C4244が出る

    // dynamic_cast(親クラスから、子クラスへダウンキャストする際に、型を厳密にチェックする方法)
    Child00 child00;
    Parent* parent = &child00;  // 親クラスのポインタ変数へ、子クラスのアドレスを代入
    //Child01* child01 = parent;  // 子クラスのポインタ変数へ、親クラスのアドレスを代入(error!)
    Child01* child01 = dynamic_cast<Child01*>(parent);
    Child00* child00_2 = dynamic_cast<Child00*>(parent);

    // reinterpret_cast(ポインタ型を別のポインタ型へ強制変換する)
    int j = 0;
    //char* c = &j; // これは型が違うのでエラー
    char* c = reinterpret_cast<char*>(&j);  // int* をchar* へ強制変換
    c[0] = 1;
    c[1] = 1;
    std::cout << "j : "<< j << std::endl;

    // 危険なキャスト(parentが持っているアドレスは、child01のものである保証はない)
    child01 = reinterpret_cast<Child01*>(parent);

    // const_cast(普段使わない、cpnstを明示的に外すタイミングはさほどない)
    const int iConst = 100;
    //iConst = 200; // constなので代入はできない
    //int* pNonConst = &iConst; // constではないポインタ変数へアドレスを渡すこともできない
    int* pNonConst = const_cast<int*>(&iConst); 

    // constを外したので代入できるようになる(動作はする)
    // ただし、出力結果を見ると値が変更されている気配がない
    *pNonConst = 200;
    std::cout << "iConst : " << iConst << std::endl;

    //pNonConst = const_cast<int*>(&giConst);
    //*pNonConst = 400;   // グローバル変数の場合例外がスローされる

    return 0;
}
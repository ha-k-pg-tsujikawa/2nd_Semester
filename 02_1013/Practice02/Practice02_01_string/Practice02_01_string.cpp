
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>;

int main()
{
    // C言語の文字、文字列   
    char word = 'a';                    // 1文字
    char name[] = "naomichi sato";      // 文字配列
    const char* cstr = "Hello World!";    // const char ポインタ型

    // 上記3つの文字、文字列をprintfで画面に出力する
    printf("%c\n", word);
    printf("%s\n", name);
    printf("%s\n", cstr);

    // string型の書き方
    std::string str = "文字列";

    // C言語の関数でstring型に入力されている文字列を使うには
    // .c_str() という関数で、文字列のポインタを受け取る必用がある
    printf("str = %s\n",  str.c_str());

    // C++的な考え方（iopstramとstringのインクルードが必要）
    std::cout << str << std::endl;

    system("pause");
    return 0;
}

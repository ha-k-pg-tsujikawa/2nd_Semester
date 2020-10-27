
#include <iostream>

// 後置const関数 = コンストメンバ関数
// 戻り値 関数名(引数) const;
class Test
{
public:
    void SetValue(int value);
    int GetValue() const;

private:
    int Value;
};


void Test::SetValue(int value)
{
    Value = value;
}
// コンストメンバ関数の定義(実装)部分にも後置constをつける
int Test::GetValue() const
{
    return Value;
}

int main()
{
    Test test;
    test.SetValue(1000);
    int ans = test.GetValue();
    // データを所得したいだけの時
    // ポインタ変数の先に変更を加えらないことを保証ため
    // const ポインタ変数を使うことが一般的

    const Test* pTest = &test;
    //pTest->SetValue(10);    // コンストメンバ関数ではないため、使用できない(変更される恐れおれあり)
    pTest->GetValue();      //コンストメンバ関数なので、使用できる

}

// 06. HomeWork220126 ++.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{
public:
    int Value;

public:
    MyInt& operator++( )
    {
        //증감 연산코드
        /*Value += 1;*/
        Value = (Value + 1);

        //연산결과값 본인을 리턴
        return *this;
    }

    // 후위 연산자 오버로딩의 문법 - 인자안에 int자료형을 넣는다.
    MyInt operator++(int)
    {
        //반환할 임시객체 생성
        MyInt ReturnValue = *this;

        //증감연산 실행
        ++(*this);

        //증감 연산이 되기전의 임시객체를 리턴
        return ReturnValue;
    }

    MyInt operator+(int _Val)
    {
        return Value + _Val;
    }

public:
    MyInt(int _Value)
        : Value(_Value)
    {

    }
};

int main()
{
    int Value = 0;
    int Result = 0;

    //전위 - 먼저 증감 연산후 연산 실행
    Result = ++Value;
    Result = 0;
    //후위 - 다른 연산 실행후 연산처리함
    Result = Value++;
    Result; //1 
    Value; //2


    MyInt MyValue = 0;
    MyInt MyResult = 0;

    MyResult = ++MyValue;   
    MyResult = MyInt(0);    
    MyResult = MyValue++; 
    MyResult.Value;      // 1
    MyValue.Value;       // 2

}
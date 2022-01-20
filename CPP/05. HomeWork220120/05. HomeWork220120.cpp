// 05. HomeWork220120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

class BytePadding 
{

};

class Empty
{
public:
    int a;
    int b;
    int c;

public:
    virtual void print()
    {
        char arr[500] = {};
        char* ptr = &arr[0];
        cout <<  " 주소 : " << (__int64)reinterpret_cast<void*>(ptr) << endl;

        

    }

};


void Print(int _Value, Empty& _ptr, int& _ptr2)
{
    cout << "클래스 size : " << _Value << endl;
    cout << "클래스 시작 주소 : " << (__int64)&_ptr << endl;
    cout << " 멤버 변수 주소 : " << (__int64)&_ptr2 << endl;
}

int main()
{
    int value1 = 10;
    int value2 = 100;

    int* ptr = &value1;

    int& ref = value1;    

    Empty newEmpty = Empty();

    int size = sizeof(newEmpty);

    Print(size, newEmpty, newEmpty.a);

    newEmpty.print();


    int a = 0;

}


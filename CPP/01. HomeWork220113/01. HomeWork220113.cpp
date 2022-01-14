// 01. HomeWork220113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right)
{
    int RightCnt = 0;
    int LeftCnt = 0;
    int count = 0;

    while ( 0 != _Left[count])
    {
        if (_Left[LeftCnt] != ' ')
        {
            _Right[RightCnt] = _Left[LeftCnt];

            RightCnt += 1;
            LeftCnt += 1;
        }
        else
        {
            LeftCnt += 1;
        }
        _Left[count += 1];
    }
    return;
}

int main()
{
    char Text[10000] = { 0, };
    StringTrimRemove("a b c   d   ef   ghi  j k l mno p     q r s tuv w xy z  ", Text);
    printf_s(Text);
}
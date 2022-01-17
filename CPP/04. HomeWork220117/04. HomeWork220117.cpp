// 04. HomeWork220117.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringLength(const char* _Str)
{
    int count = 0;

    while (0 != _Str[count])
    {
        count += 1;
    }

    return count;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int FindStrLen = StringLength(_FindStr);
    int TextStrLen = StringLength(_Text);
    int count = 0;

    for (int i = _Start; i < TextStrLen; i += 1)
    {
        for (int j = 0; j < FindStrLen; j += 1)
        {
            if (_Text[i + j] == _FindStr[j])
            {
                count += 1;

                if (count == FindStrLen)
                {
                    return i; 
                }
            }
            else
            {
                count = 0;
            }
        }
    }

    return -1;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int FindStrLen = StringLength(_FindStr);
    int TextStrLen = StringLength(_Text);
    int count = 0;
    

    for (int i = TextStrLen; i > 0; i -= 1)
    {
        for (int j = 0; j < FindStrLen; j += 1)
        {
            if (_Text[i - j] == _FindStr[j])
            {
                count += 1;

                if (count == FindStrLen)
                {
                    int a = 0;
                    return i + 1;
                }
            }
            else
            {
                count = 0;
            }
        }
    }

    return -1;
}


int main()
{
    // 실패
    {
        int Count = CountFirst("aaa eee ttt asdfasd eee", 0, "eee");
        //printf("%d\n", Count);
    }
    {
        int Count = CountLast("aaa bbb eee", 50, "eee");
        printf("%d\n", Count);
    }



}

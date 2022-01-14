// 03. HomeWork220114 others.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
	char LeftValue = 0;

	for (int i = 0; 0 != _Left[i]; i += 1)
	{
		//a 97 A 65 z 122 Z 90
		// a 97 ~ z 122
		if ('a' <= _Left[i] && _Left[i] <= 'z')
		{
			LeftValue = _Left[i] - 32;

			_Right[i] = LeftValue;
		}
		else
		{
			_Right[i] = _Left[i];
		}
		
	}
}

void CharChange(char* _Text, char _Prev, char _Next)
{
	int count = 0;

	while (0 != _Text[count])
	{
		if (_Prev == _Text[count])
		{
			_Text[count] = _Next;
		}

		count += 1;
	}

}

void Rerverse(const char* _Sorce, char* _Result)
{
	int length = strlen(_Sorce);
	
	int temp = length;
	int a = 0;
	int b = 0;

	for (int i = 0; i < length; i += 1)
	{
		a = _Sorce[i];
		_Result[temp -1] = a;
		temp -= 1;
	}
}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	char SorceValue = 0;

	for (int i = _Start; i <= _End; i += 1)
	{
		SorceValue = _Sorce[i];

		_Result[i - _Start] = SorceValue;
	}
}

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

}

int main()
{
	{
		char Text[1000] = { 0 };
		ToUpper("123aAbBcC", Text);
		//printf_s(Text);
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd
		//printf_s(Text);
	}

	{
		char Text[100] = { };
		Rerverse("0123456789adewe", Text);
		//printf_s(Text);
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		//printf_s(Text);		
	}

	{
		char Text[100] = "aa, bb, aaa";
		"aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		// aa| bb| cc| dd
		printf_s(Text);
		int a = 0;
	}
}


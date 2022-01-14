// 02. HomeWork220114 ToInt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>

int StringLength(const char* _Str)
{
	int count = 0;

	for (int i = 1; 0 != _Str[i]; i += 1)
	{
		count += 1;
	}

	return count;
}


int ToInt(const char* _Left)
{
	int count = 0;
	int value = 0;
	int result = 0;

	while (0 != _Left[count])
	{
		value = _Left[count] - 48;

		result += pow(10, StringLength(_Left) - count) * value;

		count += 1;
	}

	return result;
}

int main()
{
	int Value = ToInt("1234567890");

	printf_s("%d\n",Value);
}

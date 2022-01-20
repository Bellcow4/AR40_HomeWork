// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Swap(int* _ptr1, int* _ptr2)
{
	int* temp = _ptr1;
	_ptr1 = _ptr2;
	_ptr2 = temp;

	//*_ptr1 = 100;
}

void doubleSwap(int** _ptr1, int** _ptr2)
{
	int* temp = *_ptr1;
	*_ptr1 = *_ptr2;
	*_ptr2 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	Swap(ptr1, ptr2);
	//doubleSwap(&ptr1, &ptr2);

	printf("%d, %d\n", *ptr1, *ptr2);

}
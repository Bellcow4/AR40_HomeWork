#pragma once


class ConsoleMath
{
public:
	// constructer destructer
	ConsoleMath();
	~ConsoleMath();

	// delete Function
	ConsoleMath(const ConsoleMath& _Other) = delete;
	ConsoleMath(ConsoleMath&& _Other) noexcept = delete;
	ConsoleMath& operator=(const ConsoleMath& _Other) = delete;
	ConsoleMath& operator=(ConsoleMath&& _Other) noexcept = delete;

protected:

private:
	 
};

class ConsoleVector
{
public:
	int x_;
	int y_;

	ConsoleVector()
		: x_(0), y_(0)
	{

	}

	ConsoleVector(int _x, int _y)
		:x_(_x), y_(_y)
	{

	}

	ConsoleVector GetHalfVector()
	{
		//이니셜라이즈(초기화) 리스트
		// 클래스를 생성자에 맞춰서 배열처럼 초기화할수 있는 기능
		return ConsoleVector(x_ / 2, y_ / 2);
	}

	ConsoleVector operator+(const ConsoleVector& _Other)
	{
		ConsoleVector Result;
		Result.x_ = x_ + _Other.x_;
		Result.y_ = y_ + _Other.y_;

		return Result;
	}

	ConsoleVector& operator+=(const ConsoleVector& _Other)
	{
		x_ += _Other.x_;
		y_ += _Other.y_;

		return *this;
	}
};


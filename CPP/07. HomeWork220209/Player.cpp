#include "Player.h"
#include <conio.h>

Player::Player(TextScreen* _Screen, const char* _Text)
	: Screen_(_Screen)
	, Pos_(_Screen->GetSize().GetHalfVector())
	, Text_()
{
	if (nullptr == _Screen)
	{
		assert(false);
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}

Player::~Player()
{
}


void Player::Update()
{
	int Value = _getch();

	int a = 0;

	

	switch (Value)
	{
	case 'a':
	case 'A':
		Pos_.x_ -= 1;
		// 플레이어 x의 위치가 0보다 작아질때 false 반환 assert 체크됩니다.
		assert(Pos_.x_ >= 0);
		break;
	case 'd':
	case 'D':
		Pos_.x_ += 1;
		// 플레이어 x의 위치가 세팅된 값보다 커질때 false 반환 assert 체크됩니다.
		assert(Pos_.x_ < Screen_->GetSize().x_);
		break;
	case 'w':
	case 'W':
		Pos_.y_ -= 1;
		assert(Pos_.y_ >= 0);
		break;
	case 's':
	case 'S':
		Pos_.y_ += 1;
		assert(Pos_.y_ < Screen_->GetSize().y_);
		break;
	default:
		break;
	}


}

void Player::Render()
{
	Screen_->SetPixel(Pos_, Text_);
}
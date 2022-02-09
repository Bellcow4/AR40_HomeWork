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
		// �÷��̾� x�� ��ġ�� 0���� �۾����� false ��ȯ assert üũ�˴ϴ�.
		assert(Pos_.x_ >= 0);
		break;
	case 'd':
	case 'D':
		Pos_.x_ += 1;
		// �÷��̾� x�� ��ġ�� ���õ� ������ Ŀ���� false ��ȯ assert üũ�˴ϴ�.
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
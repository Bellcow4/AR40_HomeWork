#include "Player.h"
#include <conio.h>
#include "ConsoleGlobalInst.h"
#include <stdlib.h>

Player::Player(TextScreen* _Screen, const char* _Text)
	: ConsoleObject(_Screen, _Text, _Screen->GetSize().GetHalfVector())
{
}

Player::~Player() 
{
}


void Player::Update() 
{
	// GlobalValue::AllMonsters

	// AllMonsters[2];

	// Pos_.x_ += 1; // Pos_.y_ += 0;
	//   'a'
	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// 화면바깥으로 이동하면 이동이 안되게 해주세요.
		if (0 < MainPlayer.GetPos().x_)
		{
			SetMove({ -1, 0 });
		}
		break;
	case 'd':
	case 'D':
		if ((MainScreen.GetSize().x_) - 1> MainPlayer.GetPos().x_)
		{
			SetMove({ 1, 0 });
		}
		break;
	case 'w':
	case 'W':
		if (0 < MainPlayer.GetPos().y_)
		{
			SetMove({ 0, -1 });
		}
		break;
	case 's':
	case 'S':
		if ((MainScreen.GetSize().y_) - 1 > MainPlayer.GetPos().y_)
		{
			SetMove({ 0, 1 });
		}
		break;
	case 'q':
	case 'Q':
		// 무슨일인가가 벌어져서
		// 게임이 종료된다.
		exit(1);
		
		break;
	default:
		break;
	}
	

}


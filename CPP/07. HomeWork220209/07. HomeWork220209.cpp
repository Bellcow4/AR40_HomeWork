// 07. HomeWork220209.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "TextScreen.h"
#include "Player.h"
#include <crtdbg.h>

int main()
{
    //숙제 
    // 플레이어가 세팅된 영역을 넘어갈시 assert로 폭파.
    // 플레이어 update함수에서 조건체크 했습니다.


    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 스택에 n바이트가 할당되었을것이다
    TextScreen NewScreen(10, 10, "ㅁ");

    Player NewPlayer(&NewScreen, "★");

    int a = sizeof("★");

    NewScreen.SettingScreen();

    // ㅁㅁㅁ
    // ㅁ★ㅁ
    // ㅁㅁㅁ

    while (true)
    {
        NewScreen.SettingScreen();
        NewPlayer.Render();
        NewScreen.PrintScreen();
        NewPlayer.Update();
    }

}

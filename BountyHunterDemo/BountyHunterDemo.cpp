///-------------------------------------------------------------------------------------------------
/// File:	BountyHunterDemo.cpp.
///
/// Summary:	Application entry point.
///-------------------------------------------------------------------------------------------------

#include "Game.h"

Game* g_Application = new Game();

int main(int argc, const char* args[])
{
	// initialize game
	g_Application->Init(GAME_TITLE, GAME_WINDOW_WIDTH, GAME_WINDOW_HEIGHT, GAME_WINDOW_FULLSCREEN);

	// enter game main-loop
	g_Application->Run();

	g_Application->Terminate();

	delete g_Application;
	g_Application = nullptr;

    return 0;
}


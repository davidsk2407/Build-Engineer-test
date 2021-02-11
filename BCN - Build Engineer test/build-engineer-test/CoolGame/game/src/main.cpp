#include <iostream>

#include "Game.h"
#include "GameObject.h"

int main(int argc, char** argv)
{
    std::cout << "Hello World Good Morning" << std::endl;
    
    CoolGame::Game game;
    game.addGameObject("Object 1");
    game.addGameObject("Object 2");
    

    return 0;
}

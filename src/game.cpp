#include "raylib.h"
#include "game.h"


Game::Game(){
    wave = 0;
};

void Game::Initialize(){
    tower.raw_position = {3, 2}
}

void Game::Update(){

};

void Game::Draw(){
    ClearBackground(GREEN);
    map.Draw();
    tower.Draw();
};
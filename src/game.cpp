#include "raylib.h"
#include "game.h"

Game::Game(){
    wave = 0;
};

void Game::Initialize(){
    
};

void Game::Update(){
    tower_placer.Update();
};

void Game::Draw(){
    ClearBackground(GREEN);
    map.Draw();
    tower_placer.Draw();
};
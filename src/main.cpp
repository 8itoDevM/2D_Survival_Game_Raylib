#include "raylib.h"
#include "map.h"
#include "tower.h"

int window_size_x = 1200;
int window_size_y = 800;

int main(){
    InitWindow(window_size_x, window_size_y, "Initial Window");
    SetTargetFPS(60);

    Map map = Map();
    Tower tower = Tower();
    tower.raw_position = {3,2};

    while(WindowShouldClose() == false){

        BeginDrawing();
        ClearBackground(GREEN);

        map.Draw();
        tower.Draw();

        EndDrawing();
    }
}
#include "raylib.h"
#include "game.h"

int window_size_x = 1200;
int window_size_y = 800;

int main(){
    InitWindow(window_size_x, window_size_y, "Initial Window");
    SetTargetFPS(60);

    Game game = Game();
    game.Initialize();

    while(WindowShouldClose() == false){
        game.Update();

        BeginDrawing();
        game.Draw();
        EndDrawing();
    }
}
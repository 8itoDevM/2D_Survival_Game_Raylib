#include "raylib.h"

int window_size = 800;

class Player{
public:
    int speed = 100;
    Vector2 position = { (float)window_size/2  ,(float)window_size/2 } ;

    void Draw(){
        DrawCircle(position.x, position.y, 35, WHITE);
    }

    void Update(){
        if(IsKeyDown(KEY_DOWN)){
            position.y += speed * GetFrameTime();
        }
        if(IsKeyDown(KEY_LEFT)){
            position.x -= speed * GetFrameTime();
        }
        if(IsKeyDown(KEY_UP)){
            position.y -= speed * GetFrameTime();
        }
        if(IsKeyDown(KEY_RIGHT)){
            position.x += speed * GetFrameTime();
        }
    }
};

int main(){
    InitWindow(window_size, window_size, "Initial Window");
    SetTargetFPS(60);

    Player player;

    while(WindowShouldClose() == false){
        player.Update();

        BeginDrawing();
        ClearBackground(GREEN);

        player.Draw();   

        EndDrawing();
    }
}
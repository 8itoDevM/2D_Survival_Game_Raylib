#include "raylib.h"
#include "map.h"

int window_size = 800;

class Player{
public:
    int life = 100;
    int distance = 80;
    Vector2 position = { (float)40,(float)760 } ;

    void Draw(){
        DrawCircle(position.x, position.y, 26, WHITE);
    }

    void Update(){
        if(IsKeyPressed(KEY_DOWN)){
            position.y += distance;
        }
        if(IsKeyPressed(KEY_LEFT)){
            position.x -= distance;
        }
        if(IsKeyPressed(KEY_UP)){
            position.y -= distance;
        }
        if(IsKeyPressed(KEY_RIGHT)){
            position.x += distance;
        }
    }
};

int main(){
    InitWindow(window_size, window_size, "Initial Window");
    SetTargetFPS(60);

    Player player;
    Map map = Map();

    while(WindowShouldClose() == false){
        player.Update();

        BeginDrawing();
        ClearBackground(GREEN);

        map.Draw();
        player.Draw();   

        EndDrawing();
    }
}
#include "raylib.h"

int window_size = 800;

class Player{
public:
    int speed = 100;
    int life = 100;
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

class Map{
public:
    int cell_size = 80;

    void Draw(){
        for(unsigned int i = 0; i < window_size; i+= cell_size){
            for(unsigned int j = 0; j < window_size; j+= cell_size){
                Rectangle rec{(float)i, (float)j, (float)cell_size, (float)cell_size};
                DrawRectangleRounded(rec, 0.5, 0, DARKGREEN);
            }
        }
    }
};

int main(){
    InitWindow(window_size, window_size, "Initial Window");
    SetTargetFPS(60);

    Player player;
    Map map;

    while(WindowShouldClose() == false){
        player.Update();

        BeginDrawing();
        ClearBackground(GREEN);

        map.Draw();
        player.Draw();   

        EndDrawing();
    }
}
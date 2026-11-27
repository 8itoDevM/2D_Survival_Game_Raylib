#include "raylib.h"

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

class Map{
public:
    int cell_size = 80;

    void Draw(){
        for(unsigned int i = 0; i < window_size; i += cell_size){
            for(unsigned int j = 0; j < window_size; j += cell_size){
                float spacing = 5.0f;
                float offset = spacing / 2.0f;

                Rectangle rec{
                    (float)i + offset,
                    (float)j + offset,
                    (float)cell_size - spacing,
                    (float)cell_size - spacing
                };

                DrawRectangleRounded(rec, 0.5, 0, DARKGREEN);
                DrawRectangleRoundedLinesEx(rec, 0.5, 0, 5, GREEN);
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
#include "map.h"
#include "raylib.h"

Map::Map(){
    cell_size = 80;
    window_size = 800;
};

void Map::Draw(){
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
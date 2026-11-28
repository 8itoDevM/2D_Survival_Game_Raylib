#include "tower.h"
#include "raylib.h"

Tower::Tower(){
    px_size = 20;
    raw_position = {1, 1};
    offset = (map.cell_size/2) + px_size/2;
    
    // ----
    
    life = 100;
    tile_size = 1;
};

void Tower::Draw(){
    Vector2 coordinates = GetCoordinates(raw_position);
    DrawRectangle(coordinates.x, coordinates.y, px_size, px_size, RED);
};

Vector2 Tower::GetCoordinates(Vector2 pos){
    return Vector2 { (map.cell_size * pos.x) - offset, (map.cell_size * pos.y) - offset };
};
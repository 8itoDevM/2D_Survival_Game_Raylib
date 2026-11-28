#pragma once
#include "raylib.h"
#include "map.h"

class Tower{
public:
    Tower();
    int px_size;
    Vector2 raw_position;
    Map map;
    float offset;
    int life ;
    int tile_size;
    void Draw();
    Vector2 GetCoordinates(Vector2 pos);
};
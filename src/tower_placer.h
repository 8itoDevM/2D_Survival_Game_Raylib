#pragma once
#include "raylib.h"
#include "map.h"
#include "tower.h"
#include <vector>

class TowerPlacer{
public:
    Vector2 mouse_position;
    Vector2 current_tile;
    bool placed;

    Map map;
    std::vector<Tower> towers;

    TowerPlacer();
    void Update();
    void Draw();
    Vector2 ConvertPositionToGrid(Vector2 mouse_pos);
};
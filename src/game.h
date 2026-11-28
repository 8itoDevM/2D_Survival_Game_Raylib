#pragma once
#include "raylib.h"
#include "tower.h"
#include "map.h"
#include "tower_placer.h"

class Game{
public:
    Game();

    Map map;
    Tower tower;
    TowerPlacer tower_placer;

    void Initialize();
    void Draw();
    void Update();

    int wave;
};
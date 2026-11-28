#pragma once
#include "raylib.h"
#include "tower.h"
#include "map.h"

class Game{
public:
    Game();

    Map map;
    Tower tower;

    void Initialize();
    void Draw();
    void Update();

    int wave;
};
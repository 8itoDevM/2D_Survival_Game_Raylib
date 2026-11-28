#pragma once
#include "raylib.h"

class Map{
public:
    Map();
    int cell_size;
    void Draw();
    int window_size;
};
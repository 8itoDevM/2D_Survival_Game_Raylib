#pragma once
#include "raylib.h"

class Map{
public:
    Map();
    int cell_size;
    int window_size;
    void Draw();
};
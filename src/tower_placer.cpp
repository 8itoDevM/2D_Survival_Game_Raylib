#include "raylib.h"
#include "tower_placer.h"
#include "tower.h"

TowerPlacer::TowerPlacer(){
    mouse_position = GetMousePosition();
    placed = false;
};

void TowerPlacer::Update(){
    if(placed) return;

    mouse_position = GetMousePosition();
    current_tile = ConvertPositionToGrid(mouse_position);

    if (current_tile.x > 10 || current_tile.x < 1) return;
    if (current_tile.y > 10 || current_tile.y < 1) return;

    bool should_place = true;
    if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
        for(Tower& tower : towers){
            if(tower.raw_position.x == current_tile.x &&
                tower.raw_position.y == current_tile.y){
                should_place = false;
            }
        }
        if (should_place){
            Tower new_tower = Tower();
            new_tower.raw_position = current_tile;

            towers.push_back(new_tower);
        }
    };
};

void TowerPlacer::Draw(){
    int count = 0;
    for(Tower& tower : towers){
        tower.Draw();
        count++;
    }
    DrawText(TextFormat("Mouse X: %.0f | Mouse Y: %.0f", mouse_position.x, mouse_position.y), 10, 10, 20, BLACK);
    DrawText(TextFormat("Tile X: %.0f | Tile Y: %.0f", current_tile.x, current_tile.y), 10, 40, 20, BLACK);
    DrawText(TextFormat("Number of towers: %d", count), 10, 70, 20, BLACK);
}

Vector2 TowerPlacer::ConvertPositionToGrid(Vector2 mouse_pos){
    return Vector2 { (float)((int)(mouse_pos.x / map.cell_size) + 1), (float)((int)(mouse_pos.y / map.cell_size) + 1) };
};
# 2D Survival Game

A 2D survival game built with **C++** and **Raylib**.

This project is a personal game development project focused on learning C++, object-oriented programming, and game architecture while building a grid-based survival game from scratch.

## Current Features

- Grid-based map system.
- Tower placement using mouse input.
- Grid coordinate conversion.
- Prevention of multiple towers occupying the same tile.
- Basic game loop with separate initialization, update, and drawing methods.
- Debug information displaying mouse coordinates, tile coordinates, and the current tower count.

## Built With

- **C++20**
- **Raylib**
- **GCC (g++)**

## Project Structure

```text
2D_Survival_Game_Raylib/
│
├── src/
│   ├── main.cpp
│   ├── game.cpp
│   ├── game.h
│   ├── map.cpp
│   ├── map.h
│   ├── tower.cpp
│   ├── tower.h
│   ├── tower_placer.cpp
│   └── tower_placer.h
│
├── build-windows.bat
└── .gitignore
```

## Getting Started

### Requirements

- Windows
- GCC / g++
- C++20 compatible compiler
- [Raylib](https://www.raylib.com/)

### Building

The project currently includes a Windows build script.

1. Install Raylib and configure your GCC environment.
2. Make sure Raylib is available at `C:\raylib`.
3. Run `build-windows.bat` from the project root.
4. The executable will be generated inside `build/win/`.

### Running

After a successful build, run:

```text
build/win/main.exe
```

## Development

This project is actively being developed. Features, systems, and architecture may change as development progresses.


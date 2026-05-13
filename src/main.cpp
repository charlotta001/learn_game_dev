#include "raylib.h"
#include <iostream>

const int widthScreen = 800;
const int heightScreen = 600;


int main(){
    InitWindow(widthScreen, heightScreen, "Init window");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        DrawFPS(10,20);
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
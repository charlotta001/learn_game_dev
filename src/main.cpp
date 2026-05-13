#include "raylib.h"
#include "world.h"
#include <iostream>

const int widthScreen = 800;
const int heightScreen = 600;


int main(){
    InitWindow(widthScreen, heightScreen, "Init window");
    SetTargetFPS(60);
    World world = World();

    while(!WindowShouldClose()){

        world.CameraMovement();

        BeginDrawing();
            DrawFPS(10,20);
            BeginMode3D(world.camera);

                
                ClearBackground(BLACK);
                world.DrawObject();
                DrawGrid(10, 20.0f);
            
            EndMode3D();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
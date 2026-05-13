#include "world.h"


World::World()
{
    CameraPlayer();
}

void World::CameraPlayer()
{
    camera.position = (Vector3){0.0f, 50.0f, 50.0f};
    camera.target = (Vector3){0.0f,0.0f,0.0f};
    camera.up = (Vector3){0.0f,1.0f,0.0f};
    camera.fovy = 80.0f;
    camera.projection = CAMERA_PERSPECTIVE;
}

void World::DrawObject()
{
    DrawCube((Vector3){0.0f,0.0f,0.0f}, 20.0f, 20.0f,20.0f,BLUE);
    DrawCubeWires((Vector3){0.0f,0.0f,0.0f}, 20.0f, 20.0f,20.0f,WHITE);
}

void World::CameraMovement()
{

    Vector3 movement = {0.0f,0.0f,0.0f};
    Vector3 rotation = {0.0f,0.0f,0.0f};
    float zoom = 0.0f;

    if(IsKeyDown(KEY_W)) movement.x += 1.0f;
    if(IsKeyDown(KEY_A)) movement.y -= 1.0f;
    if(IsKeyDown(KEY_S)) movement.x -= 1.0f;
    if(IsKeyDown(KEY_D)) movement.y += 1.0f;

    if(IsKeyDown(KEY_UP)) rotation.y += 1.0f;
    if(IsKeyDown(KEY_LEFT)) rotation.x -= 1.0f;
    if(IsKeyDown(KEY_RIGHT)) rotation.x += 1.0f;
    if(IsKeyDown(KEY_DOWN)) rotation.y -= 1.0f;
    

    zoom = GetMouseWheelMove() * 2.0f;
    UpdateCameraPro(&camera,movement, rotation, zoom);
}

#include "raylib.h"
#include "functions.h"
#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int screenWidth = 1000;
    const int screenHeight = 1000;
    int radius = 500;
    float angleOne = 0;
    float angleTwo = 180;
    Triangle triangleOne(radius,Vector2 {screenWidth/2,screenHeight/2},&angleOne);
    Triangle triangleTwo(radius,Vector2 {screenWidth/2,screenHeight/2},&angleTwo);
    SetTargetFPS(60);
    InitWindow(screenWidth,screenHeight,"unit circle");
    while(!WindowShouldClose()){
        ClearBackground(BLACK);
        BeginDrawing();
            DrawUnitCircle(radius,500,500,WHITE);
            triangleOne.Draw();
            triangleOne.Update();
            triangleTwo.Draw();
            triangleTwo.Update();
        EndDrawing();
    }
    CloseWindow();
}
#include "functions.h"
#include "raylib.h"
void DrawUnitCircle(float radius,float x,float y,Color color){
    DrawCircleSectorLines(Vector2{x,y},radius,0,360,3,color);
    DrawLineEx(Vector2{0,y},Vector2{radius*2,y},1,color);
    DrawLineEx(Vector2{x,0},Vector2{x,radius*2},1,color);
}
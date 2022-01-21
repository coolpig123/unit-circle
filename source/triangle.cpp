#include "../include/triangle.h"
#include "raylib.h"
#include <cmath>
void Triangle::Draw(){
    DrawLineEx(center,Vector2{((cos(*angle*PI/180))*radius)+500,((sin(*angle*PI/180))*radius)+500},1,GREEN);
    DrawLineEx(center,Vector2{((cos(*angle*PI/180))*radius)+500,500},1,BLUE);
    DrawLineEx(Vector2{((cos(*angle*PI/180))*radius)+center.x,center.y},Vector2{((cos(*angle*PI/180))*radius)+center.x,(sin(*angle*PI/180))*radius+center.x},1,RED);
}
void Triangle::Update(){
    *angle -= 1;
}
Triangle::Triangle(float Radius,Vector2 Center,float* Angle){
    radius = Radius;
    center = Center;
    angle = Angle;
}
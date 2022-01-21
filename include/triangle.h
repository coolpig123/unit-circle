#pragma once
#include "raylib.h"
class Triangle {       
  public:            
    float radius;
    float* angle;
    Vector2 center;
    void Draw();
    void Update();
    Triangle(float radius,Vector2 center,float* angle);        
};
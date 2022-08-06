#include "raylib.h"

int main()
{
    int width = 1200;
    int height = 600;
    int circlex{width/2};
    int circley{height*4/5};
    int speed{10};
    int axespeed{15};
    int axex{width/3};
    int axey{height/2};
    int dir{10};
    SetTargetFPS(60);
    InitWindow(width, height, "AxeGame");
    
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(circlex, circley, 10, BLUE);

        if(IsKeyDown(KEY_D) && circlex < width){
            circlex+=speed;
        }
        if(IsKeyDown(KEY_A) && circlex > 0){
            circlex-=speed;
        }

        DrawRectangle(axex, axey, 50, 50, WHITE);
        axey+=axespeed;
        EndDrawing();
    }
}
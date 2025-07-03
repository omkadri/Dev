#include "raylib.h"
int main()
{
        int width = 800;
        int height = 400;
        InitWindow(width, height, "Axe Game");
        
        while(WindowShouldClose() == false)
        {
                BeginDrawing();
                ClearBackground(WHITE);
                EndDrawing();
        }
}
#include "raylib.h"
int main()
{
        //window dimensions
        int _screenWidth{800};
        int _ScreenHeight{400};

        //Circle Coordinates
        int circle_x{400};
        int circle_y{200};

        SetTargetFPS(60);
        InitWindow(_screenWidth, _ScreenHeight, "Axe Game");
        
        while(WindowShouldClose() == false)
        {
                BeginDrawing();
                ClearBackground(WHITE);
                DrawCircle(circle_x, circle_y, 25, RED);

                if (IsKeyDown(KEY_D) && circle_x <= (_screenWidth - 50))
                {
                        circle_x = circle_x + 10;
                }

                if (IsKeyDown(KEY_A) && circle_x >= 50)
                {
                        circle_x = circle_x - 10;
                }

                EndDrawing();
        }
}
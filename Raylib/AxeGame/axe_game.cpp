#include "raylib.h"
int main()
{
        int direction = 10;

        //window dimensions
        int _screenWidth{800};
        int _ScreenHeight{450};

        //Circle Coordinates
        int circle_x{200};
        int circle_y{200};
        
        //Axe Coordinates
        int axe_x{400};
        int axe_y{0};

        SetTargetFPS(60);
        InitWindow(_screenWidth, _ScreenHeight, "Axe Game");
        
        while(WindowShouldClose() == false)
        {
                BeginDrawing();
                ClearBackground(WHITE);

                //Game Logic Begins
                DrawCircle(circle_x, circle_y, 25, RED);
                DrawRectangle(axe_x, axe_y, 50, 50, BLUE);

                //move the axe
                axe_y += direction;

                if (axe_y > 450 || axe_y < 0 )
                {
                        direction = -direction;
                }

                if (IsKeyDown(KEY_D) && circle_x <= (_screenWidth - 50))
                {
                        circle_x += 10;
                }

                if (IsKeyDown(KEY_A) && circle_x >= 50)
                {
                        circle_x -= 10;
                }

                EndDrawing();
        }
}
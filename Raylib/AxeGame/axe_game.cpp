#include "raylib.h"
int main()
{
        
        //window dimensions
        int _screenWidth{800};
        int _ScreenHeight{450};
        
        //Circle Coordinates
        int _circle_x{200};
        int _circle_y{200};
        int _circle_radius{25};
        // circle edges
        int _left_circle_x{_circle_x - _circle_radius};
        int _right_circle_x{_circle_x + _circle_radius};
        int _top_circle_y{_circle_y - _circle_radius};
        int _bottom_circle_y{_circle_y + _circle_radius};
        
        //Axe Coordinates
        int _axe_x{400};
        int _axe_y{0};
        int _axe_length{50};
        
        // axe edges
        int _left_axe_x{_axe_x};
        int _right_axe_x{_axe_x + _axe_length};
        int _top_axe_y{_axe_y};
        int _bottom_axe_y{_axe_y + _axe_length};

        int direction = 10;

        bool _collision_with_axe = 
                                _bottom_axe_y >= _top_circle_y && 
                                _top_axe_y <= _bottom_circle_y && 
                                _left_axe_x <= _right_circle_x && 
                                _right_axe_x >= _left_circle_x;

        SetTargetFPS(60);
        InitWindow(_screenWidth, _ScreenHeight, "Axe Game");
        
        while(WindowShouldClose() == false)
        {
                BeginDrawing();
                ClearBackground(WHITE);

                if (_collision_with_axe)
                {
                        DrawText("Game Over", 400, 200, 20, RED);
                }
                else
                {
                        //Game Logic Begins
                        DrawCircle(_circle_x, _circle_y, _circle_radius, RED);
                        DrawRectangle(_axe_x, _axe_y, _axe_length, _axe_length, BLUE);

                        //update edges
                        _left_circle_x = _circle_x - _circle_radius;
                        _right_circle_x = _circle_x + _circle_radius;
                        _top_circle_y = _circle_y - _circle_radius;
                        _bottom_circle_y = _circle_y + _circle_radius;

                        _left_axe_x = _axe_x;
                        _right_axe_x = _axe_x + _axe_length;
                        _top_axe_y = _axe_y;
                        _bottom_axe_y = _axe_y + _axe_length;

                        //update _collision_with_axe
                        _collision_with_axe = 
                                _bottom_axe_y >= _top_circle_y && 
                                _top_axe_y <= _bottom_circle_y && 
                                _left_axe_x <= _right_circle_x && 
                                _right_axe_x >= _left_circle_x;

                        //move the axe
                        _axe_y += direction;

                        if (_axe_y > _ScreenHeight || _axe_y < 0 )
                        {
                                direction = -direction;
                        }

                        if (IsKeyDown(KEY_D) && _circle_x < (_screenWidth - 50))
                        {
                                _circle_x += 10;
                        }

                        if (IsKeyDown(KEY_A) && _circle_x >= 50)
                        {
                                _circle_x -= 10;
                        }
                }
                EndDrawing();
        }
}
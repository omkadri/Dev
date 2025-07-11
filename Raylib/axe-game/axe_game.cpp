#include "raylib.h"
int main()
{
        
        //window dimensions
        int _screenWidth{800};
        int _ScreenHeight{450};
        
        //player Coordinates
        int _player_x{200};
        int _player_y{200};
        int _player_radius{25};

        //player edges
        int _player_left{_player_x - _player_radius};
        int _player_right{_player_x + _player_radius};
        int _player_top{_player_y - _player_radius};
        int _player_bottom{_player_y + _player_radius};
        
        //enemy coordinates
        int _enemy_x{400};
        int _enemy_y{0};
        int _enemy_length{50};
        
        // enemy edges
        int _enemy_left{_enemy_x};
        int _enemy_right{_enemy_x + _enemy_length};
        int _enemy_top{_enemy_y};
        int _enemy_bottom{_enemy_y + _enemy_length};

        //goal coordinates
        int _goal_x{700};
        int _goal_y{200};
        int _goal_length{50};
        
        // goal edges
        int _goal_left{_goal_x};
        int _goal_right{_goal_x + _goal_length};
        int _goal_top{_goal_y};
        int _goal_bottom{_goal_y + _goal_length};

        int _player_move_speed = 10;
        int _enemy_move_speed = 10;

        bool _collision_with_enemy = 
                                _enemy_bottom >= _player_top && 
                                _enemy_top <= _player_bottom && 
                                _enemy_left <= _player_right && 
                                _enemy_right >= _player_left;
        
        bool _collision_with_goal = 
                                _goal_bottom >= _player_top && 
                                _goal_top <= _player_bottom && 
                                _goal_left <= _player_right && 
                                _goal_right >= _player_left;

        SetTargetFPS(60);
        InitWindow(_screenWidth, _ScreenHeight, "Maze Game");
        
        while(WindowShouldClose() == false)
        {
                BeginDrawing();
                ClearBackground(WHITE);

                if (_collision_with_enemy)
                {
                        DrawText("Game Over", 400, 200, 20, RED);
                }
                else if (_collision_with_goal)
                {
                        DrawText("You Win", 400, 200, 20, GREEN);
                }
                else
                {
                        //Game Logic Begins
                        DrawCircle(_player_x, _player_y, _player_radius, BLUE);
                        DrawRectangle(_enemy_x, _enemy_y, _enemy_length, _enemy_length, RED);
                        DrawRectangle(_goal_x, _goal_y, _goal_length, _goal_length, GREEN);

                        //update player edges
                        _player_left = _player_x - _player_radius;
                        _player_right = _player_x + _player_radius;
                        _player_top = _player_y - _player_radius;
                        _player_bottom = _player_y + _player_radius;

                        //update enemy edges
                        _enemy_left = _enemy_x;
                        _enemy_right = _enemy_x + _enemy_length;
                        _enemy_top = _enemy_y;
                        _enemy_bottom = _enemy_y + _enemy_length;

                        //update enemy collision
                        _collision_with_enemy = 
                                _enemy_bottom >= _player_top && 
                                _enemy_top <= _player_bottom && 
                                _enemy_left <= _player_right && 
                                _enemy_right >= _player_left;

                        //update goal collision
                        _collision_with_goal = 
                                _goal_bottom >= _player_top && 
                                _goal_top <= _player_bottom && 
                                _goal_left <= _player_right && 
                                _goal_right >= _player_left;

                        //move the player
                        _enemy_y += _enemy_move_speed;

                        if (_enemy_y > _ScreenHeight || _enemy_y < 0 )
                        {
                                _enemy_move_speed = -_enemy_move_speed;
                        }

                        if (IsKeyDown(KEY_D) && _player_x < (_screenWidth - 50))
                        {
                                _player_x += _player_move_speed;
                        }

                        if (IsKeyDown(KEY_A) && _player_x >= 50)
                        {
                                _player_x -= _player_move_speed;
                        }
                        if (IsKeyDown(KEY_S) && _player_y < (_screenWidth - 50))
                        {
                                _player_y += _player_move_speed;
                        }

                        if (IsKeyDown(KEY_W) && _player_y >= 50)
                        {
                                _player_y -= _player_move_speed;
                        }
                }
                EndDrawing();
        }
}
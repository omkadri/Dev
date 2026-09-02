#include "raylib.h"
int main()
{ 
        //window properties
        const int _windowWidth = 800;
        const int _windowHeight = 450;
        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowWidth, _windowHeight, "New Window");
        SetTargetFPS(_targetFramerate);
        
        while(!WindowShouldClose())
        {
                //Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);

                //Stop Drawing
                EndDrawing();
        }
        CloseWindow();
}
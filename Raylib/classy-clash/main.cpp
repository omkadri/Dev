#include "raylib.h"
int main()
{ 
        //window properties
        const int _windowWidth = 384;
        const int _windowHeight = 384;
        int _targetFramerate = 60;

        //initialize window
        InitWindow(_windowWidth, _windowHeight, "Classy Clash");
        SetTargetFPS(_targetFramerate);

        Texture2D _worldMap = LoadTexture("assets/maps/worldMap/WorldMap.png");
        
        while(!WindowShouldClose())
        {
                //Start Drawing
                BeginDrawing();
                ClearBackground(WHITE);
                
                //Draw the world map
                Vector2 _worldMapPos = {0, 0};
                DrawTextureEx(_worldMap, _worldMapPos, 0.0f, 4.0f, WHITE);

                //Stop Drawing
                EndDrawing();
        }
        CloseWindow();
}
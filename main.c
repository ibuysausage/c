#include <raylib.h>
#include <stdio.h>

int main(void) {

  InitWindow(800, 400, "basic");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}

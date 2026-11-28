#include <raylib.h>

int main(void) {

  InitWindow(800, 800, "basic");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLANK);
    EndDrawing();
    DrawText("Hello RayLib", 100, 100, 50, MAGENTA);
  }

  return 0;
}

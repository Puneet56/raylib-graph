#include <raylib.h>

#define STB_PERLIN_IMPLEMENTATION
#include "stb_perlin.h" // Required for: stb_perlin_fbm_noise3

static int screenWidth = 800;
static int screenHeight = 600;

int main(void) {
  InitWindow(800, 600, "raylib graph");
  float start = 0;
  float offsetY = 50;

  SetTargetFPS(60);
  // GeneratePerlinTexture(texture, screenWidth, screenHeight, offsetX,
  // offsetY);
  while (!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(RAYWHITE);
    float offsetX = start;
    for (int i = 0; i < screenWidth; i++) {
      offsetX += 0.01;
      float p = stb_perlin_noise3(offsetX, offsetY, 1.0f, 0, 0, 0);
      DrawPixel(i, ((float)screenHeight / 2) + p * 50, RED);
    }
    start += 0.07;
    EndDrawing();
  }

  CloseWindow();
  return 0;
}

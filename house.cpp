#include "graphics.h"
#include "picture.hpp"
void house() {
   setfillstyle(SOLID_FILL, BLUE);
   bar(100, 200, 300, 400);
   int shape[] = {
      100, 200,
      200, 100,
      300, 200
   };
   setfillstyle(SOLID_FILL, RED);
   setcolor(RED);
   fillpoly(3, shape);
   setfillstyle(SOLID_FILL, WHITE);
   rectangle(150, 250, 250, 350);
   bar(150, 250, 250, 350);
   setcolor(BLACK);
   setlinestyle(SOLID_LINE, 1, 8);
   line(150, 300, 250, 300);
   line(200, 250, 200, 350);
}
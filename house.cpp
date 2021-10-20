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
}
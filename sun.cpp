#include "graphics.h"
#include "picture.hpp"

void sun()
{
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   fillellipse(800, 0, 150, 150);
   line(800, 10, 500, 10);
   line(800, 30, 510, 75);
   line(800, 70, 520, 150);
   line(800, 110, 530, 200);
   line(775, 150, 600, 300);
}
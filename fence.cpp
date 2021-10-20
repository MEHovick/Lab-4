#include "graphics.h"
#include "picture.hpp"

void fence() {
   int left, top, right, bottom;
   left = 100;
   top = 100;
   right = 120;
   bottom = 300;
   for (int t = 0; t < 4; ++t) {
      bar(100 + 50 * t, 100, 120 + 50 * t, 300);
   }
   bar(left - 10, top + 20, right + 160, top + 30);
   bar(left - 10, bottom - 20, right + 160, bottom - 30);
}
#include "graphics.h"
#include "picture.hpp"

void fence() {
   int left, top, right, bottom;
   left = 110;
   top = 250;
   right = 130;
   bottom = 450;
   for (int t = 0; t < 4; ++t) {
      bar(left + 50 * t, top, right + 50 * t, bottom);
   }
   bar(left - 10, top + 20, right + 160, top + 30);
   bar(left - 10, bottom - 20, right + 160, bottom - 30);
}
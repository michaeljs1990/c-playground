#include <stdio.h>
#include "bubble.h"
#include "utils.h"

int main() {
  int unsorted[5] = {4, 5, 6, 10, 2};

  logArray(unsorted, 5);
  bubbleSort(unsorted, 5);
  logArray(unsorted, 5);

  return 0;
}

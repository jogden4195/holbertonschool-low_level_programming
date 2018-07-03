#include <stdio.h>
#include "holberton.h"
int main(void)
{
  int array[1], b[5];

  b[0] = 98;
  b[1] = 402;
  b[2] = -198;
  b[3] = 298;
  b[4] = -1024;
  print_array(b, 5);
  array[0] = 1;
  print_array(array, 1);
  return (0);
}

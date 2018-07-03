#include <stdio.h>
#include "holberton.h"
int main(void)
{
  char s[10] = "Holberton", r[10] = "no";

  printf("%s\n", s);
  rev_string(s);
  printf("%s\n", s);
  rev_string(r);
  printf("%s\n", r);
  return (0);
}

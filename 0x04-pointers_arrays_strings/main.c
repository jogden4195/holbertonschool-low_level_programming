#include <stdio.h>
#include "holberton.h"
int main(void)
{
  char *str;

  str = "0123456789";
  puts_half("1");
  puts_half("12");
  puts_half("123");
  puts_half(str);
  return (0);
}

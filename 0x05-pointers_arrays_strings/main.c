#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char s[] = "ex}pect t(he best. Prepar)e for th{e worst. C,apitalize on what comes.\nhello world! hello-wo\"rld 0123456hel\vlo w?orld\thello wor;ld.hello world\n";
  char *p;

  p = cap_string(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}

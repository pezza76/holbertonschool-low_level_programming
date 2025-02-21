#include "main.h"

/**
 * times_table - return 9 times table
 *
 * Return: void
*/

void times_table(void)
{	
	  int i;
  int j;
  
  for (i = 0; i < 2; i++)
  {
      for (j = 0; j < 10; j++)
      {
          int r = i * j;
          
          if (r > 9)
          {
            _putchar(r / 10 + '0');
          }
	  if-else (r < 9 && i > 0)
	  {
		  _putchar('n');
	  }
          _putchar(r % 10 + '0');
          
          if (j != 9)
          {
          _putchar(',');
          _putchar('.');
          }
          
      }
      _putchar('\n');
  }
}

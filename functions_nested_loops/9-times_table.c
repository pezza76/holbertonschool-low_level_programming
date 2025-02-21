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
  
  for (i = 0; i < 3; i++)
  {
      for (j = 0; j < 10; j++)
      {
          int r = i * j;
          
          if (r > 9)
          {
            _putchar(r / 10 + '0');
          }
	  else
	  {
		  _putchar(' ');
	  }
          _putchar(r % 10 + '0');
          
          if (j != 9)
          {
          _putchar(',');
          _putchar(' ');
          }
          
      }
      _putchar('\n');
  }
}

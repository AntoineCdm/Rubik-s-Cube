#include "rubiks.h"

int	*look_for_space(int **table, int *lines, int *columns, int value)
{
  int counter_line;
  int counter_col;
  int *result;

  result = malloc(sizeof(int) * 2);
  counter_line = 0;
  counter_col = 0;
  while (counter_line < 4)
    {
      counter_col = 0;
      while (counter_col < 4)
	{
	  if (table[counter_line][counter_col] != value && lines[counter_line] != 1 && columns[counter_col] != 1)
	    {
	      result[0] = counter_line;
	      result[1] = counter_col;
	      return (result);
	    }
	  else
	    counter_col++;
	}
      counter_line++;
    }
  
  return NULL;
}

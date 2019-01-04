#include "rubiks.h"

void	rotate_lines(int **table, int line, int offset)
{
  int counter = 0;

  if (offset < 0)
    while (counter > offset)
      {
	algo_line(table, line);
	counter--;
      }
  else
    while (counter < offset)
	{
	  algo_line_reverse(table, line);
	  counter++;
	}
}

void	rotate_columns(int **table, int column, int offset)
{
  int counter = 0;
  
  if (offset < 0)
    while (counter > offset)
      {
	algo_column_reverse(table, column);
	counter--;
      }
  else
    while (counter < offset)
      {
	algo_column(table, column);
	counter++;
      }
}

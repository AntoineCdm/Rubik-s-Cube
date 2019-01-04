#include "rubiks.h"

void	build_first_line(int **table)
{
  int look_value = table[0][0];
  int counter_line = 1;
  int lines[4] = { 1, 1, 1, 1};
  int columns[4] = { 0, 0, 0, 0};
  int *pos_value = malloc(sizeof(int) * 2);
  int *pos_space = malloc(sizeof(int) * 2);

  while (counter_line < 4)
    {
      if (is_in_line(table, counter_line, look_value) == 0)
	{
	  lines[counter_line] = 0;
	  pos_value = look_for_value(table, lines, columns, look_value);
	  lines[counter_line] = 1;
	  lines[0] = 0;
	  pos_space = look_for_space(table, lines, columns, look_value);
	  rotate_lines(table, pos_value[0], pos_value[1] - pos_space[1]);
	  rotate_columns(table, pos_space[1], pos_value[0] - pos_space[0]);
	  lines[0] = 1;

	  printf("\n");

	  print_tab(table);
	}
      else
	counter_line++;
    }

  free(pos_value);
  free(pos_space);
}

void	line_to_square(int **table, int line)
{
  if (line == 0)
    {
      algo_square(table, 0);
      algo_square(table, 0);
      rotate_lines(table, 0, 2);
    }
  else if (line == 1)
    {
      algo_square(table, 0);
      algo_square(table, 0);
      rotate_lines(table, 0, -2);
    }
  else if (line == 2)
    {
      algo_square(table, 3);
      algo_square(table, 3);
      rotate_lines(table, 3, 2);
    }
  else if (line == 3)
    {
      algo_square(table, 2);
      algo_square(table, 2);
      rotate_lines(table, 2, -2);
    }

  else
    printf("Error : select a valid line number.\n");
}

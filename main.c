#include "rubiks.h"

void	build_first_square(int **table)
  {
    print_tab(table);
    printf("build first line\n\n");
    build_first_line(table);
    printf("build line to square\n");
    line_to_square(table, 0);
  }

int	main()
{
  int **table;
  int nb_line;
  int nb_col;
  int counter;
  int lines[4];
  int columns[4];

  nb_col = 4;
  table = malloc(sizeof(int *) * nb_col);

  counter = 0;
  while (counter < 4)
    {
      table[counter] = malloc(sizeof(int) * nb_line);
      counter++;
    }

  table[0][0] = 0;
  table[0][1] = 1;
  table[0][2] = 2;
  table[0][3] = 3;
  table[1][0] = 0;
  table[1][1] = 1;
  table[1][2] = 2;
  table[1][3] = 3;
  table[2][0] = 0;
  table[2][1] = 1;
  table[2][2] = 2;
  table[2][3] = 3;
  table[3][0] = 0;
  table[3][1] = 1;
  table[3][2] = 2;
  table[3][3] = 3;

  build_first_square(table);
  print_tab(table);
  
  counter = 0;
  while (counter < 4)
    {
      free(table[counter]);
      counter++;
    }
  
  free(table);
}

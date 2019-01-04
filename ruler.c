#include <stdio.h>

void	print_tab(int **table)
{
  int counter_y;

  counter_y = 0;
  printf("−−−−−−−−−−−−−−−−−\n");
  while (counter_y < 4)
    {
      printf("| %d | %d | %d | %d |\n", table[counter_y][0], table[counter_y][1], table[counter_y][2], table[counter_y][3]);
      printf("−−−−−−−−−−−−−−−−−\n");
      counter_y++;
    }
  printf("\n\n");
}

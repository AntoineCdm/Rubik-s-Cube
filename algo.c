#include "rubiks.h"

void	algo_line(int **table, int line)
{
  int counter;
  int nb_col;
  int temp;

  counter = 0;
  nb_col = 4;
  temp = table[line][0];
  while (counter < nb_col - 1)
    {
      table[line][counter] = table[line][counter + 1];
      counter++;
    }
  table[line][nb_col - 1] = temp;
}

void	algo_column(int **table, int column)
{
  int counter;
  int nb_line;
  int temp;

  counter = 0;
  nb_line = 4;
  temp = table[0][column];
  while (counter < nb_line - 1)
    {
      table[counter][column] = table[counter + 1][column];
      counter++;
    }
  table[nb_line - 1][column] = temp;
}

void	algo_square(int **table, int square)
{
  int index_col;
  int index_line;
  int temp;

  if (PRINT_SQUARE_DEBUG__)
      printf("Rotation way : clockwise\nsquare : %d\n\n", square);
      
  if (square == 0)
    {
      temp = table[0][0];
      index_col = 0;
      index_line = 0;
      table[index_line + 0][index_col + 0] = table[index_line + 1][index_col + 0];
      table[index_line + 1][index_col + 0] = table[index_line + 1][index_col + 1];
      table[index_line + 1][index_col + 1] = table[index_line + 0][index_col + 1];
      table[index_line + 0][index_col + 1] = temp;
    }
  else if (square == 1)
    {
      temp = table[0][2];
      index_col = 2;
      index_line = 0;
      table[index_line + 0][index_col + 0] = table[index_line + 1][index_col + 0];
      table[index_line + 1][index_col + 0] = table[index_line + 1][index_col + 1];
      table[index_line + 1][index_col + 1] = table[index_line + 0][index_col + 1];
      table[index_line + 0][index_col + 1] = temp;
    }
  else if (square == 2)
    {
      temp = table[2][0];
      index_col = 0;
      index_line = 2;
      table[index_line + 0][index_col + 0] = table[index_line + 1][index_col + 0];
      table[index_line + 1][index_col + 0] = table[index_line + 1][index_col + 1];
      table[index_line + 1][index_col + 1] = table[index_line + 0][index_col + 1];
      table[index_line + 0][index_col + 1] = temp;
    }
  else if (square == 3)
    {
      temp = table[2][2];
      index_col = 2;
      index_line = 2;
      table[index_line + 0][index_col + 0] = table[index_line + 1][index_col + 0];
      table[index_line + 1][index_col + 0] = table[index_line + 1][index_col + 1];
      table[index_line + 1][index_col + 1] = table[index_line + 0][index_col + 1];
      table[index_line + 0][index_col + 1] = temp;
    }
  else
    printf("Error. Wrong square selection.\n");

}

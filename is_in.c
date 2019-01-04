int is_in_line(int **table, int line, int value)
{
  int counter;
  int nb_col;

  nb_col = 4;
  counter = 0;
  while (counter < nb_col)
    {
      if (table[line][counter] == value)
	return 0;
      counter++;
    }
  return 1;
}

int is_in_col(int **table, int column, int value)
{
  int counter;
  int nb_line;

  nb_line = 4;
  counter = 0;
  while (counter < nb_line)
    {
      if (table[counter][column] == value)
	return 0;
      counter++;
    }
  return 1;
}

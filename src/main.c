/*
** main.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/allum1/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Feb 11 18:13:11 2015 Julien Karst
** Last update Fri Feb 20 18:23:47 2015 Julien Karst
*/

#include "allum1.h"

int	main(int ac, char **argv)
{
  t_all	a;

  number_of_lines(&a);
  init_i(&a, 0);
  allum1(&a);
  replay(&a);
}

void	number_of_lines(t_all *a)
{
  int	mode;

  mode = 0;
  my_putstr("\033[H\033[2J");
  my_printf("\t \t Bienvenue dans mon jeux ! \n");
  my_printf("Nombre de lignes\n[4 - 20] : ");
  a->res = scanf("%d", &mode);
  purge();
  if ((mode >= 4 && mode <= 20) && a->res != -1)
    a->t = mode - 1;
  else
    {
      number_of_lines(a);
      return ;
    }
}

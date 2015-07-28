/*
** play.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Feb 13 13:28:39 2015 Julien Karst
** Last update Fri Feb 20 18:25:06 2015 Julien Karst
*/

#include "allum1.h"

void	init_i(t_all *a, int mode)
{
  int	e;
  int	c;

  c = 1;
  e = 0;
  if (mode == 0)
    a->i = malloc(a->t * sizeof(int));
  if (mode == 1)
    a->s = malloc(a->t * sizeof(int));
  while (e <= a->t)
    {
      if (mode == 0)
	a->i[e] = c;
      if (mode == 1)
	a->s[e] = c;
      c += 2;
      e++;
    }
  a->tc = a->i[a->t];
  return ;
}

void	my_allum(int i)
{
  int	c;

  c = 0;
  while (c < i)
    {
      my_printf("|");
      c++;
    }
  return ;
}

void	nb_alum(t_all *a)
{
  int	c;

  a->nb_alum = 0;
  c = 0;
  while (c <= a->t)
    {
      a->nb_alum += a->i[c];
      c++;
    }
}

void	print_allum(t_all *a)
{
  int	c;

  my_putstr(CLEAR);
  space_alum(a, 7);
  my_printf(HELLO);
  c = 0;
  while (c <= a->t)
    {
      if ((c + 1) < 10)
	my_printf("%d)  ", (c + 1));
      else
	my_printf("%d) ", (c + 1));
      space_alum(a, c);
      my_allum(a->i[c]);
      my_printf("\n");
      c++;
    }
  my_printf(TOUR, a->tour);
  return ;
}

void	space_alum(t_all *a, int i)
{
  int	nb;
  int	c;

  nb = a->tc - i;
  c = 0;
  while (c <= nb)
    {
      my_putchar(' ');
      c++;
    }
}

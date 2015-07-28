/*
** fct_ia.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Feb 17 11:11:47 2015 Julien Karst
** Last update Fri Feb 20 10:17:20 2015 Julien Karst
*/

#include "allum1.h"

int	fct_one(t_all *a)
{
  int	c;
  int	nb;

  c = 0;
  nb = 0;
  while (c <= a->t)
    {
      if (a->i[c] > 1)
	{
	  nb++;
	  a->pos = c;
	}
      c++;
    }
  if (nb == 1)
    return (1);
  else if (nb == 0)
    return (2);
  else
    return (0);
}

int	fct_count(t_all *a)
{
  int	c;
  int	nb;

  c = 0;
  nb = 0;
  while (c <= a->t)
    {
      if (a->i[c] == 1)
	nb++;
      c++;
    }
  a->count = nb;
  return (nb);
}

int	fct_final(t_all *a, int mode)
{
  int	c;
  int	nb;

  c = 0;
  nb = 0;
  if (mode == 1)
    {
      if ((a->count % 2) == 0)
	a->i[a->pos] = 1;
      else
	a->i[a->pos] = 0;
    }
}

void	final_alum(t_all *a)
{
  int	c;

  c = 0;
  while (c <= a->t)
    {
      if (a->i[c] > 0)
	{
	  a->i[c] -= 1;
	  return ;
	}
      c++;
    }
  return ;
}

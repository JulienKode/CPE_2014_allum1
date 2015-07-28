/*
** ia.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Feb 14 18:08:07 2015 Julien Karst
** Last update Fri Feb 20 10:19:01 2015 Julien Karst
*/

#include "allum1.h"

void	ia_very_hard(t_all *a)
{
  calc_snim(a);
  algo_ia(a);
  nb_alum(a);
  a->player = 2;
}

void	calc_snim(t_all *a)
{
  int	c;

  a->snim = a->i[0];
  c = 1;
  while (c <= a->t)
    {
      a->snim = a->snim ^ a->i[c];
      c++;
    }
}

void	algo_ia(t_all *a)
{
  int	c;

  c = 0;

  if ((check_marienbad(a)) == 0)
    {
      while (c <= a->t)
	{
	  if ((a->i[c] ^ a->snim) < a->i[c])
	    {
	      a->i[c] = a->i[c] ^ a->snim;
	      return ;
	    }
	  c++;
	}
      final_alum(a);
    }
}

int	check_marienbad(t_all *a)
{
  int	d;

  fct_count(a);
  d = fct_one(a);
  if (d == 1)
    {
      fct_final(a, 1);
      return (1);
    }
  else if (d == 2)
    {
      fct_final2(a);
      return (1);
    }
  else
    return (0);
  return (1);
}

void	fct_final2(t_all *a)
{
  int	c;

  c = 0;
  while (c <= a->t)
    {
      if (a->i[c] == 1)
	{
	  a->i[c] = 0;
	  return ;
	}
      c++;
    }
}

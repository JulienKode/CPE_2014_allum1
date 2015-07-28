/*
** my_order.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Fri Feb 20 11:21:27 2015 Julien Karst
** Last update Fri Feb 20 11:26:07 2015 Julien Karst
*/

#include "allum1.h"

void	ia_play(t_all *a)
{
  while (a->nb_alum > 0)
    {
      print_allum(a);
      my_printf("L'ordinateur joue ... \n");
      sleep(3);
      ia_very_hard(a);
      print_allum(a);
      player_one(a);
      check_win(a);
      a->tour++;
    }
}

void	player_play(t_all *a)
{
  while (a->nb_alum > 0)
    {
      print_allum(a);
      player_one(a);
      print_allum(a);
      check_win(a);
      my_printf("L'ordinateur joue ... \n");
      sleep(3);
      ia_very_hard(a);
      a->tour++;
    }
}

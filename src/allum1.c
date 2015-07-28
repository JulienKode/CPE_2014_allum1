/*
** allum1.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Feb 11 18:35:24 2015 Julien Karst
** Last update Fri Feb 20 18:32:00 2015 Julien Karst
*/

#include "allum1.h"

void	allum1(t_all *a)
{
  a->tour = 1;
  choose_first_player(a);
  nb_alum(a);
  if (a->first == 0)
    player_play(a);
  if (a->first == 1)
    ia_play(a);
}

void	player_one(t_all *a)
{
  check_win(a);
  my_printf(NB_LINE, 1, (a->t + 1));
  a->res = scanf("%d", &(a->nb1));
  purge();
  if ((a->nb1 >= 1 && a->nb1 <= (a->t + 1)) && a->res != 0)
    {
      my_printf(CH_LINE, a->nb1);
      my_player_one(a);
      a->player = 1;
    }
  else
    {
      else_of_player_one(a);
      return ;
    }
}

void	my_player_one(t_all *a)
{
  my_printf(NB_LINE, 1, a->i[a->nb1-1]);
  a->res = scanf("%d", &(a->nb2));
  purge();
  if ((a->nb2 >= 1 && a->nb2 <= a->i[a->nb1 - 1]) && a->res != -1)
    {
      my_printf(CH_ALUM, a->nb2, a->nb1);
      a->i[a->nb1 - 1] -= a->nb2;
    }
  else if (a->nb2 == 0)
    {
      else_of_player_one(a);
      return ;
    }
  else
    {
      print_allum(a);
      my_printf(NB_LIN2 , 1, (a->t + 1), a->nb1);
      my_printf(CH_LINE , a->nb1);
      my_printf(NB_VAL);
      my_player_one(a);
      return ;
    }
}

void	check_win(t_all *a)
{
  int	r;

  nb_alum(a);
  if (a->player == 1 && a->nb_alum == 1)
    {
      print_allum(a);
      my_printf("Tu gagne :)\n");
      replay(a);
    }
  if (a->player == 2 && a->nb_alum == 1)
    {
      r = rand() % 3;
      print_allum(a);
      if (r == 0)
	my_printf("Tu perd :( C'est pas grave, c'est une superbe IA, non ?\n");
      if (r == 1)
	my_printf("Tu perd :( L'IA a encore frappé\n");
      if (r == 2)
	my_printf("Tu perd :( L'important est de participé\n");
      if (r == 3)
	my_printf("Tu perd :( C'était une belle partie non ?\n");
      replay(a);
    }
}

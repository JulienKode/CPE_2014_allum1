/*
** my_demand.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_allum1
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Thu Feb 19 13:39:22 2015 Julien Karst
** Last update Sun Feb 22 17:27:05 2015 Julien Karst
*/

#include "allum1.h"

void	purge()
{
  int	c;

  while ((c = fgetc(stdin)) != '\n' && c != EOF);
}

void	replay(t_all *a)
{
  char	c;

  c = 0;
  my_printf("Voulez vous rejouer ? [O : N] : ");
  a->res = scanf("%c", &c);
  purge();
  if ((c == 'O' || c == 'o') && a->res != -1)
    {
      number_of_lines(a);
      init_i(a, 0);
      allum1(a);
    }
  else if ((c == 'N' || c == 'n') && a->res != -1)
    my_exit("Merci d'avoir joué");
  else
    {
      my_putstr("\033[H\033[2J");
      replay(a);
      return ;
    }
}

void	else_of_player_one(t_all *a)
{
  a->nb1 = 0;
  my_printf("\033[31mChoisissez une ligne valide\033[0m\n");
  print_allum(a);
  player_one(a);
}

void	choose_first_player(t_all *a)
{
  char	c;

  c = 0;
  my_printf("Voulez vous jouer en premier ? [O : N] : ");
  a->res = scanf("%c", &c);
  purge();
  if ((c == 'O' || c == 'o') && a->res != -1)
    a->first = 0;
  else if ((c == 'N' || c == 'n') && a->res != -1)
    a->first = 1;
  else
    {
      my_putstr("\033[H\033[2J");
      choose_first_player(a);
      return ;
    }
}

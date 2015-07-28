/*
** allum1.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/allum1/include
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Feb 11 14:42:25 2015 Julien Karst
** Last update Sun Feb 22 20:15:05 2015 Julien Karst
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"
#include "my_str_to_wordtab.h"

#define	HELLO	"\033[34mBienvenue dans mon Allum1 !\033[0m\n\n"
#define CLEAR	"\033[H\033[2J"
#define	TOUR	"\033[34mTour[%d]\033[0m\n"
#define	NB_LINE	"Numéro de la ligne que vous souhaitez\n[%d - %d] : "
#define	NB_LIN2	"Numéro de la ligne que vous souhaitez\n[%d - %d] : %d\n"
#define	CH_LINE	"Vous avez choisit la ligne %d \n"
#define	CH_ALUM	"Vous avez choisit %d allumettes, a la ligne %d \n"
#define	NB_VAL	"\033[31mChoisissez une nombre valide\033[0m\n"

typedef struct	s_all
{
  int		*i;
  int		*s;
  int		t;
  int		tc;
  int		nb1;
  int		nb2;
  int		res;
  int		nb_alum;
  int		snim;
  int		player;
  int		pos;
  int		count;
  int		tour;
  int		first;
}		t_all;

void		allum1(t_all *a);
void		player_one(t_all *a);
void		my_player_one(t_all *a);
void		check_win(t_all *a);
void		init_i(t_all *a, int mode);
void		print_allum(t_all *a);
void		my_allum(int i);
void		nb_alum(t_all *a);
void		number_of_lines(t_all *a);
void		ia_very_hard(t_all *a);
void		calc_snim(t_all *a);
void		algo_ia(t_all *a);
void		fct_final2(t_all *a);
void		purge();
void		replay(t_all *a);
void		else_of_player_one(t_all *a);
void		final_alum(t_all *a);
void		choose_first_player(t_all *a);
void		player_play(t_all *a);
void		ia_play(t_all *a);
void		space_alum(t_all *a, int i);
int		check_marienbad(t_all *a);
int		fct_final(t_all *a, int mode);
int		fct_count(t_all *a);
int		fct_one(t_all *a);
  
#endif /* ALLUM1_H_ */

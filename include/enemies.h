#ifndef ENEMIES_H_INCLUDED
#define ENEMIES_H_INCLUDED

#include "../include/linked_list.h"

void enemies_create_enemy(Linked_list *enemies, const int window_width);

void enemies_move_down(Linked_list *enemies, const int window_height,int *health);

void enemies_create_shot(Linked_list *enemies, Linked_list *shots, const Spaceship spaceship);

int get_enemy_width();

int get_enemy_height();

int get_enemy_speed();

#endif
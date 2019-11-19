#ifndef HITBOX_H_INCLUDED
#define HITBOX_H_INCLUDED

#include "../include/linked_list.h"

typedef struct {
	float x;
	float y;
	float x2;
	float y2;
} Rectangle;

typedef struct {
	int size;
	Rectangle *rectangle;
} Hitbox;

Hitbox get_hitbox(char *path,int element_width,int element_height);

void shot_hit_enemy(Hitbox hitbox_enemy,Hitbox hitbox_shot_ally,Linked_list * enemies,Linked_list * shots);

void spaceship_hit_enemy(Hitbox hitbox_spaceship,Hitbox hitbox_enemy,Spaceship spaceship,Linked_list * enemies,int * health);

void spaceship_hit_shot(Hitbox hitbox_spaceship,Hitbox hitbox_shot_enemy,Spaceship spaceship,Linked_list * shots,int * health);

#endif
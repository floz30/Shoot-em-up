/*Manage star structure */ 
#include "../include/star.h"

/*Return a star with all her properties set */
Star star_create(const int x, const int y, const int size, const int speed)
{
	Star star = {};
	star.x = x;
	star.y = y;
	star.size = size;
	star.speed = speed;
	return star;
}

/*Move down a star and return 1 if the star is out of the screen, if not return 0 */
int star_move_down(Star *star, const int window_height)
{
	star->y += star->speed * 1;
	if (star->y > window_height)
	{
		return 1;
	}
	return 0;
}
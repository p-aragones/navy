/*
** EPITECH PROJECT, 2020
** ship_position
** File description:
** put the position of the ships in the map
*/

#include "navy.h"

void ship_position(ship_pos_t *ship_pos, char **buff1)
{
    int k = 2;
    int i = 0;
    int j = 0;

    while (i < 4) {
        while (j <= 2) {
            ship_pos->p1_pos[i][j] = (*buff1)[k];
            ship_pos->p1_pos[i][j + 1] = (*buff1)[k + 1];
            j += 2;
            k += 3;
        }
        j = 0;
        k += 2;
        i++;
    }
}
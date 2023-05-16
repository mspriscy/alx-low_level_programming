#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - a function that frees 2 dimensinal grid
* @grid: 2 dimensional grid
* @height: height dimension of grid
* Description: frees memory of grid
* Return: nothing
*
*/
void free_grid(int **grid, int height)
{
int z;
for (z = 0; z < height; z++)
{
free(grid[z]);
}
free(grid);
}

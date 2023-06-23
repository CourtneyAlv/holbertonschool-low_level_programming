#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the 2d array
 * @height: height of the 2d array
 * Return: pointer of the 2d aray
*/
int **alloc_grid(int width, int height)
{
	int **g;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
{
	g[a] = malloc(width * sizeof(int));

	if (g[a] ==  NULL)
{
	for (b = 0; b < a; b++)
	free(g[b]);
	free(g);
	return (NULL);
}

	for (b = 0; b < width; b++)
	g[a][b] = 0;
}
	return (g);
}

#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow consisting of a triangle followed by a rectangle.
void print_arrow(int leftCol, int size){
  for (int row = 0; row <= size; row++){
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
  int begCol = (int)(((leftCol+size) / 3) + size);
  int endCol = (int)(((leftCol+size) / 3 * 2) + size);
  for (int row = 0; row <=size; row++){
    int col;
    for (col = 0; col <= begCol; col++) putchar(' ');
    for (       ; col <= endCol; col++) putchar('*');
    putchar('\n');
  }
}

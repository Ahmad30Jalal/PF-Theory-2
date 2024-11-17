#include <stdio.h>

void display_grid(char grid[5][5]) {
    int i, j;

for (i < 0; i < 5; i++) {
  for (j = 0; j < 5; j++) {
    printf("%c ", grid[i][j]);
    }
  printf("\n");
  }
}


void move(char grid[5][5], char dir, int prow, int pcol) {

 int row = prow;
 int col = pcol;
 int item = 0;

switch(dir) {

case 'w':
  row--;
  break;
 
case 'a':
  col--;
  break;

case 's':
  row++;
  break;

case 'd':
  col++;
  break;

default:
  printf("Invalid input");
  return;
  }

if (row < 0 || row > 4 || col < 0 || col > 4) {
  printf("You cannot move outside of the grid");
  }

char cell = grid[row][col];

if (cell == 'X') {
  printf("You cannot move into obstacle");
  }

if (cell == 'I') {
  printf("You collected an item");
  item++;
  }

grid[prow][pcol] = ' ';
grid[row][col] = 'P';

prow = row;
pcol = col;
}


int main() {

int prow = 4;
int pcol = 3;
char n;
int item = 0;

  char grid[5][5] = {
      {' ', ' ', 'I', 'X', ' '},
      {' ', 'X', ' ', ' ', ' '},
      {'I', ' ', 'X', 'X', ' '},
      {' ', ' ', ' ', 'I', 'X'},
      {' ', 'X', 'P', ' ', ' '}
    };

printf("Use w to move up, s to move down, a to move left, and d to move right");

while(1) {

  display_grid(grid);
  printf("Items collected: %d\n", item);
  printf("Enter your move: ");
  scanf("%c", &n);

 if (n == 'q') {
    printf("game exited");
    break;
    }

   move(grid, n, prow, pcol);
}

return 0;
}



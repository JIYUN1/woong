#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{

  int size, high_x, high_y;
  int low_x=0, low_y=0, sum = 0;
  int x, y, i, j;

  x = y = 0;
  printf("input of snail size: ");
  scanf("%d", &size);
  
  high_x = size-1;
  high_y = size-1;

  int **snail = (int **)malloc(size*sizeof(int *));

  for(i = 0; i<size; i++)
  {
    snail[i] = (int *)malloc(size*sizeof(int));
	for(j=0; j < size; j++){
	   snail[i][j] = 0;
	}
  }

  while(sum != size*size)
   {

     for(x =low_x; x<=high_x; x++)
        {
	  snail[y][x] = sum;
	  sum += 1;
	}
	x--;
	low_y++;

    for(y= low_y; y<=high_y; y++)
	{
	  snail[y][x] = sum;
          sum += 1;
	}
	y--;
	high_x--;

   for(x=high_x; x>=low_x; x--)
	{
	  snail[y][x] = sum;
	  sum += 1;
	}
	x++;
	high_y--;

  for(y=high_y; y>=low_y; y--)
	{
	  snail[y][x] = sum;
	  sum += 1;
	}
        y++;
	low_x++;
   }


  //print
  for(x=0; x<size; x++)
   {
        for(y=0; y<size; y++)
	{
           printf("%3d ", snail[x][y]);
	}

      printf("\n");
   }
 
  for(i = 0; i < size;  i++)
  {
    free(snail[i]);
  }

  free(snail);

}


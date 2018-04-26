#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chartest(char *a, int b);
int felin(char *input, int b);
void update(char *input, int b);

int main()
{

  int a,b,i;
  char input[51];

  scanf("%s", input);

  b = strlen(input)-1;

  chartest(input, b); 
 // felin(input, b);
  update(input, b);

}

int chartest(char *a, int b)
{
  
  int i;
 
  for(i=0; i<b; i++)
  {
    if(a[i] < 'a' || a[i] > 'z')
     { 
	printf("x\n");
        return -1;
     }
  }
  return 0;
}


int felin(char *input, int b)
{

 int mid, i, j;
 mid = b/2; 

 for(i=0, j=b; i<mid; i++, j--)
  {

     if(input[i] != input[j])
     {
	printf("X\n");
	return -1;
     }

  } 

  printf("O\n");
  return 0;

}

void update(char *input, int b)
{

  int mid, i, j;
  mid = b/2;
 
 for(i=0, j=b; i<=mid; i++, j--)
 {
  
   if(input[i] != input[j]) 
      input[j] = input[i];

 }

 for(i=0; i<=b; i++)
 {
   printf("%c", input[i]); 
 }
  
}

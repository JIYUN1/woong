#include<stdio.h>
#include<string.h>

#define DEBUG 

int main(void)
{
  int i;
  char strInput[51];
  int strSize;

  scanf("%s", strInput);

 #ifdef DEBUG
  //if DEBUG==1? input after compile 
    printf("%s\n", strInput);
 #endif

  for(i=0; i<strlen(strInput); i++)
  {
    if(!(strInput[i] >= 'a' && strInput[i] <= 'z'))
      {
          printf("Please small latter! \n");
          break;
      }
  }

#ifdef DEBUG
  printf("input on small latter\n");
#endif

  if(strSize%2)
      printf("strsize is odd number.\n");
  else
      printf("strsize is even number.\n");
  

  for(i=0; i<(strSize>>i); i++)
  {
     if(!(strInput[i] == strInput[strSize-1-i]))
     {
       printf("strInput is not felindrom.\n");
       return -1;
     }
     

  }
  printf("strInput is felindrom.\n");
 

  return 0;
}


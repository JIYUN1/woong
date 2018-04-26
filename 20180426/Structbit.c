#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define SIZE 10000

struct _student{

  unsigned char Name[10];
  unsigned char Kor;
  unsigned char Eng;
  unsigned char Math;
  unsigned char Germ;
  unsigned char Aver;

};
typedef struct _student STU;

void init(){
	srand((unsigned)time(NULL));
}

int main()
{
  int i;  
  char buffer[10];
  STU *person[SIZE];
  init();

  for(i=0; i<SIZE; i++)
  {
    person[i] = (STU*)malloc(sizeof(STU));
    
    sprintf(buffer, "name%05d", i);
    strcpy(person[i]->Name, buffer);
    person[i]->Kor =  rand()%101;  
    person[i]->Eng = rand()%101;
    person[i]->Math = rand()%101;
    person[i]->Germ = rand()%101;
 }

 for(i=0; i<SIZE; i++)
  {
    
    /*
    printf("Name : %s\n", person[i]->Name);
    printf("korean : %d\n", person[i]->Kor);
    printf("english : %d\n", person[i]->Eng);
    printf("math : %d\n", person[i]->Math);
    printf("germony : %d\n", person[i]->Germ);
    printf("average : %d\n", (person[i]->Kor
                           + person[i]->Eng
                           + person[i]->Math
                           + person[i]->Germ) / 4);
    printf("----------------------------\n");
    
   */
   }
}


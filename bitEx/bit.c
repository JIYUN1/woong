
# JIYUN


<pre>
#include<stdio.h>

struct Flags {
  unsigned int a : 1;
  unsigned int b : 3;
  unsigned int c : 29;
};

int main()
{
  struct Flags f1;
 
  printf("%d\n", sizeof(f1));

  return 0;
}
<code>

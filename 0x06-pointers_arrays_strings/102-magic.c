#include <stdio.h>

int main(void)
{
    int a[] = {67, 42, 98, 55, 75};
    int *p;

    p = a;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
 
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", *(p + 2));
  return (0);
}






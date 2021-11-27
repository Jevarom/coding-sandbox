#include <stdio.h>

int main()
{
  int count = 10, x; // create variables
  int *int_pointer; // create int_pointer

  int_pointer = &count; //create the address of the int_pointer
  x = *int_pointer;

  printf ("count = %i, x = %i\n", count, x); // display the results

  return 0;
}

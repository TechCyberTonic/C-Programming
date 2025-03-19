#include <stdio.h>
#include <stdbool.h>
int main()
{
  bool iscomputer = "True";
  bool islaptop = "True";
  printf("hello world!");
  if(iscomputer == true && islaptop == true)
  {
    printf("Setup completed in Computer & laptop");
  }
  else
  {
    printf("Setup recommended!");
  }
  return 0;
}

#include <stdio.h>

int main(int argc, char** argv)
{
  printf("Como o programa foi chamado: %s\n", argv[0]);
  if (argc > 1)
    printf("Hello world %s!\n", argv[1]);
  else
   {
     printf("Hello world!\n");
     printf("Please, inform you name as an argument.\n");
   }
  
  return 0;
}

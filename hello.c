#include <stdio.h>

int main(int argc, char** argv)
{
  printf("Como o programa foi chamado: %s\n", argv[0]);
  if (argc > 1)
    for (int i=1; i<argc; i++)
      printf("Hello world %s!\n", argv[i]);
  else
   {
     printf("Hello world!\n");
     printf("Please, inform you name as an argument.\n");
   }
  
  return 0;
}

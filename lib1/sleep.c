#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"



int
atoi2(const char *s)
{
  int n;

  n = 0;
  while('0' <= *s && *s <= '9')
    n = n*10 + *s++ - '0';
  return n;
}



int
main(int argc, char *argv[])
{
  int n;

  if(argc != 2 ){

          fprintf(2,"error....please input the right number...:(\n");
          exit(1);
  }

  n=atoi2(argv[1]);
  sleep(n);
  exit(0);
}



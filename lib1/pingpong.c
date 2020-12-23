#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int
main(int argc, char *argv[])
{
  int ca;
  int pid;
  int p[2];
  pipe(p);
  pid=fork();
  if(pid==0){
  read(p[1],&ca,1);
  char p1=getpid()+'0';
  printf(&p1);
  printf(":received ping\n");
  write(p[0],"1",1);

  }else{
  write(p[0],"1",1);
  int status;
  wait(&status);
  read(p[1],&ca,1);
  char p2=getpid()+'0';
  printf(&p2);
  printf(":received pong\n");
  }


  exit(0);
}


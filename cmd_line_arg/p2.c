#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
  if(argc != 5) {
  printf("Usage : ./a.out char int float string\n");
  return 0;
  }
  char ch; int x; float f; //char *s[20];
  ch = argv[1][0];
  x = atoi(argv[2]);
  f = atof(argv[3]);
  char *s = argv[4];  //base addr = base addr
  //strcpy(s,argv[4]);

  printf("ch = %c\n",ch);
  printf("x = %d\n",x);
  printf("f = %f\n",f);
  printf("s = %s\n",s);
}

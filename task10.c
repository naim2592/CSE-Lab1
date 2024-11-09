#include <stdio.h>
int main(){
   int n,x,y,b,a,c,z,d,w;
   scanf("%d",&n);
  a=n/10;
  x=n%10;
  b=a/10;
  y=a%10;
  c=b/10;
  z=b%10;
  d=c/10;
  w=c%10;
  printf("%d",x+y+z+w);


    return 0;
}
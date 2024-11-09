#include <stdio.h>
#include <math.h>
int main(){
  int a,b,x,y;
  scanf("%d%d%d%d",&a,&b,&x,&y);
  float D=sqrt((a-x)*(a-x)+(b-y)*(b-y));
  printf("%f",D);
    return 0;
}
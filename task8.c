#include <stdio.h>
int main(){
   int s;
   scanf("%d",&s);
   int h=s/3600;
   int RS=s%3600;
   int M=RS/60;
   int Fs=RS%60;
//    printf("%d",RS);
   printf("%d : %d : %d",h,M,Fs);
    return 0;
}
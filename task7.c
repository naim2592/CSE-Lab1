#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("%d \n%d",a,b);
    return 0;
}
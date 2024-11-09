#include <stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    int month=day/30;
    int d=day%30;
    printf("%d month and %d day",month,d);
    return 0;
}
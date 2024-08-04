#include<stdio.h>
int main(){
    int x = 5 ;
    printf("%d\n",x);
    x=x*x;
    printf("%d\n",x);
    x = 3 ;    // change of variable
    printf("%d\n",x);
    // New(x) = old(x) + something
    x = x + 4;
    printf("%d\n",x);
    // New(x) = old(x) - something
    x = x - 20;
    printf("%d\n",x);
    // x = x + 2; x = 20
    x += 2;          // merge operators
    printf("%d\n",x);
    x = x*80;   // x = 2
    printf("%d\n",x);
    x = x % 3;  // x = -880
    printf("%d\n",x);
    x += 2;    // x = -1 
    printf("%d\n",x);
}
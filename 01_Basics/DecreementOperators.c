#include<stdio.h>
int main(){
    printf("POST - Decreement operator");
    printf("\n");
    int x = 9;
    printf("%d\n",x);
    printf("%d\n",x--) ;        // POST - Decreement operator ( decrease by 1 i.e - 1 )  
    printf("%d\n",x);

    printf("PRE - Decreement operator");
    printf("\n");
    int y = 9;
    printf("%d\n",y);
    printf("%d\n",--y) ;         // PRE - Decreement operator ( decrease by 1 i.e - 1 )  
    printf("%d\n",y);
}
#include<stdio.h>
int main(){
    printf("POST - Increement operator");
    printf("\n");
    int x = 4;
    printf("%d\n",x);         // POST - Increement operator ( increase by 1 i.e + 1 )   
    printf("%d\n",x++) ;     // x = x + 1 
    printf("%d\n",x);
    
    printf("PRE - Increement operator");
    printf("\n");
    int y = 4;
    printf("%d\n",y);
    printf("%d\n",++y) ;                      // PRE - Increement operator  
    printf("%d\n",y);
}
#include<stdio.h>
int main(){
    float x = 5, y = 2;
    printf( "%f \n" , x + y); // 7
    printf( "%f \n" , x - y); // 3
    printf( "%f \n" , x * y); // 10
    printf( "%f \n" , x / y); // 2.5  // issue
    printf( "%d \n" , x % y); // 1

    // Modulous Operator ( % ) : - Remainder part of the division part
            // Checking of divisibility of any numbers , a % b = 0 
            
    // Important points : -
    // 1) a % b     =  a [ if a < b ]
    // 2) a % a     =  0
    // 3) a % (-b)  =  a % b
    // 4) (-a) % b  =  -[ a % b ]
}
#include<stdio.h>
int main(){
    int x = 3;        // Keywords cannot be used as identifiers ...... 32 keywords 
    printf("%d\n",x);
    int y1 = 5;         // 1y is error
    printf("%d\n",y1);
    int _1 = 6;         // 1_ is error
    printf("%d\n",_1);
    int $22 = 7;        // 1$ is allowed Any other symbol after or before other than $ is error
    printf("%d\n",$22); 
    // Any other special character after or before other than $ or _ is error

    // int x y = 3;          // E R R O R 
    // printf("%d\n",x y);
    // int x,y = 3;          // E R R O R 
    // printf("%d\n",x,y);
}

// KEYWORDs in C : - >     
// auto      double       int      break     extern     enum      unsigned     while
// case      sizeof       for      const     static     long      continue     float
// else      signed       do       short     switch     char      volatile     default 
// goto      struct       if       union     return     void      register     typedef
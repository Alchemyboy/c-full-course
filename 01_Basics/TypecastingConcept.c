// Ques : - 
//        Take integer x as input and print half of the number .  

#include<iostream>
using namespace std;
int main(){
    int x ;
    cin>>x; 
    cout<<x/2;     // not returns exact half values of odd numbers

    cout<<endl;
    cout<<endl;

    int y ;
    cin>>y;
    float z = (float)y ;   //typecasting 
    // By this concept decimal values can be finded by int datatype
    cout<<z/2; 
}
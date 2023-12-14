//Accessing Heap
//Accessing Resources
//Parameter Passing 

#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
    int a=10;
    int *p;
    p=&a; //p is assigned the address of a
    cout<<"value of a is "<<*p<<endl;
    //for c
    // int *q;
    // q=(int*)malloc(sizeof(5*sizeof(int)));
    
    //for c++
    int *q;
    q=new int[5];
    return 0;
}
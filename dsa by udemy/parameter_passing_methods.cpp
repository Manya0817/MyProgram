#include <iostream>
using namespace std;

//pass by reference
void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

//pass by address
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int x=10;
    int y=12;
    int a=11;
    int b=17;
    swap2(a,b);
    swap(&x,&y);
    cout<<"Value of x is "<<x<<" Value of y is "<<y<<endl;
    return 0;
}
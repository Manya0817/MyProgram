#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct example{
    int arr[5];
    int num;
};

//for pointer we use arrow but for normal structure we use "dot" .
//array can only be send by call by reference it can never be send by call by value

void changeLength(struct Rectangle *r){
    r->length=19;
}

//call by reference should be done when you want to change the value of the various fields present.

int area(struct Rectangle &r1){
    r1.length=10;
    int area=(r1.breadth)*(r1.length);
    return area;
}

void array_funct(struct example e1){
    e1.arr[0]=17;
    cout<<e1.arr[0]<<endl;
}

struct Rectangle *temp(){
    struct Rectangle *p;
    p=new Rectangle;
    p->length=17;
    p->breadth=25;
    return p;
    // In c 
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
}

int main(){
    struct Rectangle r1={12,10};
    cout<<"area of the rectangle is "<<area(r1)<<endl;
    changeLength(&r1);
    cout<<"length of the rectangle after performing call by address is "<<r1.length<<endl;
    struct example e1={{1,2,3,4,5},10};
    array_funct(e1);
    return 0;
}
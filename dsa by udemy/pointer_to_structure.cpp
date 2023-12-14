#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    //Creation of a new rectangle in c++

    struct Rectangle *p2;
    p2=new Rectangle;
    p2->breadth=10;
    p2->length=12;
    cout<<p2->breadth<<" "<<p2->length<<endl;


    Rectangle r1={10,15};
    Rectangle *p=&r1;
    (*p).length=20;
    p->length=20;
    p->breadth=17;
    cout<<p->length<<endl;
    cout<<r1.breadth<<endl;
    //in c

    /*
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->breadth=12;
    */
    return 0;
}
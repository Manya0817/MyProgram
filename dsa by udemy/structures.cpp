#include <iostream>
using namespace std;

struct complex{
    int real;
    int img;
};

struct student{
    int rollNo;
    char name[25];
    char dept[10];
    char address[50];
};

//taking 87 bytes of memory 

struct Rectangle{
    int length;
    int breadth;
};

struct card{
    int face;
    int shape;
    int color;
};

int main(){
    struct card deck[52];
    struct Rectangle r;
    r.length=10;
    r.breadth=20;
    struct Rectangle r2={10,34};
    cout<<"Area of the rectangle is "<<r.length*r.breadth<<endl;
    struct card c;
    c.face=9;
    c.shape=1;
    c.color=1;
    struct card c2={8,1,0};
    deck[0].color=0;
    deck[0].face=8;
    deck[0].shape=2;
    return 0;
}
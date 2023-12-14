#include  <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int peri_rectangle(struct Rectangle r){
    return 2*(r.length+r.breadth);
}

int main(){
    struct Rectangle r1={0,0,};
    int l,b;
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;
    initialize(&r1,l,b);
    int ar=area(r1);
    int peri=peri_rectangle(r1);
    cout<<"area is "<<ar<<endl;
    cout<<"Perimeter is "<<peri<<endl;
    return 0;
}
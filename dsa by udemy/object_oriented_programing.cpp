#include  <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;


Rectangle(int l,int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

int peri_rectangle(){
    return 2*(length+breadth);
}
};
int main(){
    Rectangle r1(10,2);
    // int l,b;
    // cout<<"Enter length and breadth"<<endl;
    // cin>>l>>b;
    int ar=r1.area();
    int peri=r1.peri_rectangle();
    cout<<"area is "<<ar<<endl;
    cout<<"Perimeter is "<<peri<<endl;
    return 0;
}
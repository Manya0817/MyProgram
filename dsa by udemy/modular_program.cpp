#include <iostream>
using namespace std;

int area_rectangle(int length,int breadth){
    return length*breadth;
}

int peri_rectangle(int length,int breadth){
    return 2*(length+breadth);
}

int main(){
    int length=0,breadth=0;
    cout<<"Please enter the length and breadth of the rectangle"<<endl;
    cin>>length>>breadth;
    int area=area_rectangle(length,breadth);
    int peri=peri_rectangle(length,breadth);
    cout<<"area is "<<area<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return 0;
}
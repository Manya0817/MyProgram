#include <iostream>
using namespace std;

int main(){
    int length=0;
    int breadth=0;
    cout<<"Please enter the length and breadth of the rectangle"<<endl;
    cin>>length>>breadth;
    cout<<"Area of the rectangle is "<<length*breadth<<endl;
    cout<<"Perimeter of the rectangle is "<<2*(length+breadth)<<endl;
    return 0;
}
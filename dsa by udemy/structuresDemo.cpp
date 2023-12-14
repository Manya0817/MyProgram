#include <iostream>
using namespace std;

struct rect{
    int length;
    int breadth;
    char x;
};

//This thing is known as padding in structure 

int main(){
    struct rect r1={10,23,'a'};
    cout<<sizeof(rect)<<endl;
    cout<<r1.length<<" "<<r1.breadth<<endl;
    return 0;
}
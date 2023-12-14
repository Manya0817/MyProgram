#include <iostream>
using namespace std;

//prototype
//formal parameters
int add(int num1,int num2){
    int sum=num1+num2;//function definition and declaration 
    return sum;
}

int main(){
    int num1,num2,num3;
    num1=10;
    num2=19;
    //Actual Parameters
    num3=add(num1,num2);//Function call
    cout<<"The sum of the 2 numbers is "<<num3<<endl;
    return 0;
}
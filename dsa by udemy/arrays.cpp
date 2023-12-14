#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int arr[x]={1,2,3,4,5};
    int arr2[x];
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
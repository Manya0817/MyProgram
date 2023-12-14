#include <iostream>

using namespace std;

//Returning an array
int * fun(int n){
    int *q;
    q=new int[5];
    q[0]=1;
    q[1]=2;
    q[2]=3;
    q[3]=4;
    q[4]=5;
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return p;
}

//here array is passed by address
int max(int arr[],int size){
    int maximum=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    return maximum;
}

void valueChange(int arr[],int n){
    arr[0]=17;
}

int main(){
    int *a;
    a=fun(5);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    int arr1[4]={17,18,19,20};
    //We cannot use for each loop upon a pointer 
    //But we can use for each loop upon an array
    for(int x:arr1){
        cout<<x<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"size of the array is "<<sizeof(arr1)/sizeof(int)<<endl;
    int arr[5]={10,20,30,40,50};
    valueChange(arr,5);
    cout<<arr[0]<<endl;
    int maximum=max(arr,5);
    cout<<"Maximum element in the array is "<<maximum<<endl;
    return 0;
}
#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

int main(){

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    // int *p;
    // p=new int[5];

    // p[0]=10;
    // p[1]=12;
    // p[2]=90;
    // p[3]=56;
    // p[4]=17;

    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    // delete []p;

    // int arr[5]={1,2,3,4,5};
    // int *p;
    // p=arr;
    // int *q;
    // q=&arr[0];
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }

    //for c language
    //p=(int *)malloc(5*sizeof(int));
    //This is initialisation in the heap

    //p[0]=10;
    //p[1]=12;
    //p[2]=90;
    //p[3]=14;
    //p[4]=17;

    //free(p);

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }
    // int a=17;
    // int *p;
    // p=&a;
    // cout<<*p<<endl;
    return 0;
}
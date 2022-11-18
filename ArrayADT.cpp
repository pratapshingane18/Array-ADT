// Creating array in Heap 

#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size; 
    int Length;

};

void Display(struct Array arr){
    cout<<"Elements of the array are:"<<endl;

    for(int i=0; i < arr.size; i++){
        cout<<arr.A[i]<<" ";
    }
}

int main(){

    struct Array arr;
    cout<<"enter Array size:"<<endl;

    cin>>arr.size;

    arr.A = new int[arr.size];

    arr.Length =0;


    cout<<"Enter Numbers:"<<endl;
    for( int i =0; i <arr.size; i++){
        cin>>arr.A[i];
    }

    Display(arr);




    return 0;
}
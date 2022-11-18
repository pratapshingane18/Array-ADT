// Creating array in Heap 

#include<iostream>
using namespace std;

struct Array
{
    int A[20];
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

    struct Array arr = {{2,3,4,5,6,7}, 20, 5};
    




    Display(arr);




    return 0;
}
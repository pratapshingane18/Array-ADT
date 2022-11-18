// // Creating array in Heap 

// #include<iostream>
// using namespace std;

// struct Array
// {
//     int A[20];
//     int size; 
//     int Length;
   

// };

// void Display(struct Array arr){
//     cout<<"Elements of the array are:"<<endl;

//     for(int i=0; i < arr.Length; i++){
//         cout<<arr.A[i]<<" ";
//     }
// }

// void Append(struct Array *arr, int x){
//     if(arr->Length < arr->size){
//         arr->A[arr->Length++] =x;
//     }
// }


// void Insert(struct Array *arr, int index, int x){
//     int i;
//     if(index >=0  && index <= arr->Length){
//         for(int i = arr->Length; i > index; i--){
//             arr->A[i] = arr->A[i-1];
//             arr->A[index] = x;
//             arr->Length++;        }
//     }
// }
// int main(){

//     struct Array arr1 = {{2,3,4,5,6,7}, 20, 5};
    

//     Append(&arr1, 10);
//     Insert(&arr1, 1,15);
//     Display(arr1);







//     return 0;
// }

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
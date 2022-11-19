
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

    for(int i=0; i < arr.Length; i++){
        cout<<arr.A[i]<<" ";
    }
}

void Append(struct Array *arr, int x){
    if(arr->Length < arr->size){
        arr->A[arr->Length++] =x;
    }
}


void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >=0  && index <= arr->Length){
        for(int i = arr->Length; i > index; i--){
            arr->A[i] = arr->A[i-1];
            arr->A[index] = x;
            arr->Length++;        }
    }
}


int Delete(struct Array *arr, int index ){
    int x =0;
    if(index >=0  && index < arr->Length){
        x = arr->A[index];

        for(int i=index;i < arr->Length -1; i++){
            arr->A[i] = arr->A[i+1];

        }

            arr->Length--;

            return x;

        
    }

   return 0;
}

void Swap(int *x, int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key){
    for(int i =0; i <arr->Length; i++){
        if(arr->A[i] == key){
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }

    }

    
        return -1;
    
}


int BinarySearch(struct Array arr,int key ){
    int F=0;
    int L = arr.Length -1;


    while(F <= L){
         int mid = (F+L)/2;
        if(key == arr.A[mid]){
            return mid;
        }

        else if(key < arr.A[mid] ){
            L = mid-1;

        }

        else{
            F = mid +1;
        }
    }

    return -1;
}


int main(){

    struct Array arr = {{2,3,4,5,6,7}, 20, 10};
    
    cout<<BinarySearch(arr,3)<<endl;

    Display(arr);
    

    return 0;
}

// #include<stdio.h>
// struct Array
// {
//  int A[10];
//  int size;
//  int length;
// };
//  void Display(struct Array arr)
//  {
//  int i;
//  printf("\nElements are\n");
//  for(i=0;i<arr.length;i++)
//  printf("%d ",arr.A[i]);
//  }
// void swap(int *x,int *y)
//  {
//  int temp=*x;
//  *x=*y;
//  *y=temp;
//  }
// int BinarySearch(struct Array arr,int key)
// {
//  int l,mid,h;
//  l=0;
//  h=arr.length-1;
//  while(l<=h)
//  {
//  mid=(l+h)/2;
//  if(key==arr.A[mid])
//  return mid;
//  else if(key<arr.A[mid])
//  h=mid-1;
//  else
//  l=mid+1;
//  }
// return -1;
// }
// int RBinSearch(int a[],int l,int h,int key)
// {

//  int mid=0;
//  if(l<=h)
//  {
//  mid=(l+h)/2;
//  if(key==a[mid])
//  return mid;
//  else if(key<a[mid])
//  return RBinSearch(a,l,mid-1,key);
//  }
//  else
//  return RBinSearch(a,mid+1,h,key);
// return -1;
// }
// int main()
// {
//  struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
//  printf("%d",BinarySearch(arr1,16));
//  Display(arr1);
//  return 0;
// }


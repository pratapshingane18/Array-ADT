
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

int BinarySearchRecur(struct Array arr,int f, int l, int key){
    // int f = 0;
    // int l = arr.Length;
    

    if( f <= l){

        int mid = (f +l)/2;

        if(key == arr.A[mid]){
            return mid;
        }

        else if(key < arr.A[mid]){
            return BinarySearchRecur(arr, f, mid -1,key);
        }

        else{
            return BinarySearchRecur(arr, mid +1, l, key);
        }

        



    }

    return -1;
}


int Get(struct Array arr, int num){
    if(num >= 0  && num <arr.Length)
    {
        return arr.A[num];
    }

    return -1;
}

void Set(struct Array *arr, int index, int numb){

    if(index >= 0 && index < arr->Length){
    arr->A[index] = numb;

    }
}

int Max(struct Array arr){
    int currmax = arr.A[0];
    for(int i =0; i <arr.Length; i++){
        

        if(arr.A[i] > currmax){
            currmax = arr.A[i];
        }
    }

    return currmax;
}


int min(struct Array arr){
    int currmin = arr.A[0];
    for(int i =0; i <arr.Length; i++){
        

        if(arr.A[i] < currmin){
            currmin = arr.A[i];
        }
    }

    return currmin;
}

int Sum(struct Array arr){
    int res = 0;

    for(int i =0; i < arr.Length; i++){
        res += arr.A[i];
    }

    return res;
}

float Average(struct Array arr){
    float Avg = 0;

    Avg = Sum(arr)/arr.Length;

    return Avg;
}
void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B = new int[arr->Length];
    // B = (int *)malloc(arr->Length*sizeof(int));
    for(i = arr->Length -1, j =0; i >=0; i--, j++){
        B[j] = arr->A[i];

    }


    for(i=0; i <arr->Length; i++){
        arr->A[i] = B[i];
    }



}


void ReverseUsingSwap(struct Array *arr){

    int i, j;

    for(i =0, j = arr->Length -1; i <j; i++, j--){
        Swap(&arr->A[i], &arr->A[j]);



    }

}




int main(){

    struct Array arr = {{2,3,4,5,6,7,10,12,13}, 20, 10};
   

    Display(arr);
    cout<<endl;
    ReverseUsingSwap(&arr);
    cout<<"Elements after reversing"<<endl;
    Display(arr);
    

    return 0;
}
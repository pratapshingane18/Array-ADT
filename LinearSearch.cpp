#include<iostream>
using namespace std;

int LinearSearch(int arr[], int key, int Length){
    for(int i =0; i <Length; i++){
        if(arr[i] == key){
            return i;
        }

    }

    
        return -1;
    
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout<<LinearSearch(arr, 5,20)<<endl;
    

    
    return 0;
}
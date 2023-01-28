#include<iostream>
#include"printArray.h"

using  namespace std;

int * selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    return arr;
}

int main() {

    int n;
    cout<<"Enter the size of your array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts of your array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);
    cout<<"Your sorted array is :";
    printArray(arr,n);
    return 0;
}
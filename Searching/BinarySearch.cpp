#include<iostream>
#include "sorted.h"

using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid = (start+end) /2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}


int main(){
    //Take the size of an array
    int n;
    cout<<"Enter the size of your array :";
    cin>>n;

    //To enter elements of the array
    int arr[n];
    cout<<"Enter your "<<n<<" elements of your array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //To take the element , which is to be find
    int key;
    cout<<"Enter the element to find :";
    cin>>key;

    //In Case, User does not entered sorted array
    sort(arr,n);
    cout<<"The Sorted array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }

    cout<<endl<<"The element is found at index :"<<binarySearch(arr,n,key)<<endl;



    return 0;
}

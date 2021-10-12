#include<iostream>
using namespace std;

void reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void printArray(int arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";  
    }
}

int main(){
    int arr,n;
    cin>>"Enter the size of the array">>n;
    for(int i=0;i<=n;i++){
        cin>>"Enter the array input">>arr[i];
    }
    reverseArray(arr[],0,n);
    cout<<"Reversed array is:"<<endl;
    printArray(arr[],n)

}
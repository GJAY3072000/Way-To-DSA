#include<bits/stdc++.h>
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
    int arr;
    int n;
    cout<<"Enter the size of the array"<<"\n";
    cout<<"enter the elements of the array:"<<"\n";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    reverseArray(arr[],0,n);
    cout<<"Reversed array is:"<<endl;
    printArray(arr[],n)

}
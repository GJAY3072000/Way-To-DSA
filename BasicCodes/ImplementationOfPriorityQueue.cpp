// using arrays

#include<bits/stdc++.h>
using namespace std;
struct item{
    int value;
    int priority;
};

item pr[10000];

int size=-1;
 
void enqueue(int value, int priority){
    size++;
    pr[size].value=value;
    pr[priority].value=priority;

}

int peek(){
    int hp=INT_MIN;
    int ind=-1;
    for(int i=0;i<=size;i++){
        if(hp == pr[i].priority && ind>1 && pr[ind].value < pr[i].value){
            hp=pr[i].priority;
            ind=i;
        }
        else if(hp< pr[i].priority){
            hp = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue(){
    int ind=peek();
    for(int i=ind;i<size;i++){
        pr[i]=pr[i+1];
    }
    size--;
}

int main(){
    enqueue(10,2);
    enqueue(5,4);
    enqueue(17,1);
    enqueue(3,8);
    int ind=peek();
    cout<<pr[ind].value<<endl;
    dequeue();
    ind=peek();
    cout<<pr[ind].value<<endl;
    return 0;

}
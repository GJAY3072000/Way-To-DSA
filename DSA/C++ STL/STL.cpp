#include <bits/stdc++.h>
using namespace std;

/*struct Node{
    string str;
    int num;
    double doub;
    char x;

    Node(string str_, int num_,double  doub_, char x_) {
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
};*/


int main(){
     /* Node *jay =new Node("Jay",91,97.50,'j');
    cout<<jay->doub<<" ";
    

// If we define anything outside int main then its value is automatically zero and if 
//we define anything inside int main then it will takes garbage value
// and if we define array like array<int,5>={1}->{1,0,0,0,0}
    //Container array
    array<int,5> arr;
    arr.fill(10);
    //arr.at(index);
    for(int i=0;i<5;i++){
        cout<<arr.at(i)<<" ";
    }
    
    //iterators
    //begin()-> first index
    //end()->last index
    //rbegin()->last index+1 i.e empty address
    //rend()-> right before the staring index
    */
   /* array<int,5> arr1={1,2,3,4,5};
    for(auto it : arr1.begin(); it!=arr1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    //for each loop
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\n";
    string s = "Jay gupta";
    for(auto it: s){
        cout<<it<<"\t";
    }
    //size
    cout<<arr.size();

    //front
    arr.front();

    //back
    arr.back();

    //Vector

    vector<int> arr1; //->{}
    arr1.push_back(0);//->{0}  arr1.emplace_back() this work identical as push_back but it will take lesser time 
    arr1.pop_back();//->{}
    //segementation fault if you push_back 10^7 times

    arr1.clear(); //erase all elements at once

    vector<int> vec(4,0);//vector of 4 elements with zero as input at all 4 index
    vector<int> vec2(5,10);
    //copy the entire vec2 in vec3
    vector<int> vec3(vec2.begin(),vec2.end());//->[)
    //vector<int> vec3(vec2);

    vector<int> jay(vec.begin(),vec.begin()+2);

    //lower bound //upper bound
    //swap  swap(v1,v2)
    //begin(), rbegin(), end(),rend()

    // defining 2D vector*/
    vector<vector<int>> a;
    vector<int> jay1;
    jay1.push_back(1);
    jay1.push_back(2);

    vector<int> jay2;
    jay2.push_back(3);
    jay2.push_back(4);

    vector<int> jay3;
    jay3.push_back(5);
    jay3.push_back(6);
    jay3.push_back(7);

    a.push_back(jay1);
    a.push_back(jay2);
    a.push_back(jay3);

    for(auto it : a){
        for(auto it1: it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }

    //define vector of 10x20 
    vector<vector<int>> vec(10,vector<int> (20,0));
    cout<<vec.size();

    //array of vector this is only dynamically across rows not columns
    vector<int> arr[4];
    arr[0].push_back(2);

    //3D vector of dimension 10x20x30
    vector<vector<vector<int>>> vec1(10,vector<vector<int>> (20,vector<int> (30,0)));
    














    








  
   
































return 0;

}
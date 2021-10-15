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

    //set
    // ONLY STORES UNIQUE ELEMENTS IN ASCENDING ORDER
    //it helps to store the unique elements
    //and we cannot access set element by set[0] but we can access set elements by iterartors like st.begin() etc
    set<int> st;
    int n,x;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);//it takes complexity of log(n) here n is the size of the set
    }

    //erase functionality
    //complexity of this is simple logn
    st.erase(st.begin()); //this will erase the first elemet from the set
    st.erase(st.begin(),st.begin() + 2); //-> [)

    st.erase(5);// st.erase(key) it will delete teh particular key 

    set<int> st1={1,5,7,8};
    auto it = st1.find(7); //logn it will be iterator to 7
    auto it1 = st1.find(9); //it=st.end() which is the next right after the last element

    st1.size();//it will print the size of the set

    // two ways to implement for loop for set
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }

    for(auto it : st){
        cout<<it<<endl;

    }

    //unordered set

    unordered_set<int> st2;
    // the only thing that is good in unordered set is that the average time complexity is O(1) whereas it is log(n) in ordered set
    //but the worst case is linear in nature , O(set size)

    //pro tip-> if in the question there is no need to store the element in ascending order then always use unordered set 
    //if tle occured then switch to ordered set 

    //Multiset
    //it will store all the elements in the sorted fashion

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    //-> {1,1,2,2,3}
    ms.erase(2);// it will delete all the instance of 2 from the set

    auto it=ms.find(2);// it will return the iterator pointing to the first instance of 2

    // it is log n in size

    st.count(2); // it will count how many times the instance occurs

    //Pair
    pair<int,int> pr;
    pr.first=1;
    pr.second = 2;

    // Map
    // iT stores everything in sorted order
    // it will sort according to the keys
    //map only stores unique keys
    // log n is the time complexity of map
    map<string,int> mpp;
    mpp["jay"]=1;
    mpp.erase("jay"); //mpp.erase(key)
    mpp.erase(mpp.begin());//mpp.erase(iterator)
    mpp.clear(); //entire map is clear 
    auto it = mpp.find("jay");

    mpp.empty(); //to check if map is empty or not

    //printing map
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it =mpp.begin(); it!=mpp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //pair class 
    pair<int, int> pr ={1,2};
    pair<pair<int,int>,int> pr1 = {{2,3},4};
    cout<<pr1.first.second<<endl;

    // stack and queue
    stack<int> sta;//lifo 
    //pop
    //top
    //size
    //empty
    //push/emplace

    sta.push(1);
    sta.push(2);
    sta.push(3);
    sta.push(4);
    sta.push(5);

    cout<<sta.top();
    sta.pop();


    //Delete entire stack
    while(!sta.empty()){
        sta.pop();
    }

    cout<<sta.size()<<endl;//give the size of the stack


    stack<int> sta1;
    // always check the below condition while implementing stack.top() operation
    if(!sta.empty()){
         sta1.top(); //it will throw an error
    }

    //queue fifo
    // all the given operation take O(1) time complexity
    //push
    //front
    //pop
    //size
    //empty

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.front();//->it print 1

    //take O(n) where n is the size of the element
    while(!q.empty()){
        q.pop();
    }

    //Priority Queue
    // stores all in sorted order and does all the operation in log(n) time complexity
    //push
    //size
    //top
    //pop
    //empty
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    //contains all the element in descending order -> {6,5,2,1}

    pq.top(); //it will print 6

    //minimum priority queue
    priority_queue<int,vector<int> , greater<int>>> pq1;


    //deque
    // doubly ended queue
    //push_front();
    //push_back();
    //pop_front();
    //pop_back();
    //begin,rbegin,end,rend
    //size
    //clear
    //empty
    //at
    deque<int> dq;
    

    //list
     //push_front();
    //push_back();
    //pop_front();
    //pop_back();
    //begin,rbegin,end,rend
    //size
    //clear
    //empty
    //at
    //remove() -> O(1)
    list<int> ls;


    //Q Given n number of elememnts that occurs maximum number of times 
    //input
    //5
    //1 3 3 3 2

    //output
    //3

    int n;
    cin>>n;
    map<int,int> mpp12;
    int maxi=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp12[x]++;
        if(mpp12[x]>mpp12[maxi]){
            maxi=x;
        }
            

    }
    cout<<x<<endl;

    //here the time complexity in n*log(n)




   






















return 0;

}
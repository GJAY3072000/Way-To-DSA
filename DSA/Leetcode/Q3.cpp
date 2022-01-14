// Duplicate Zeros
// https://leetcode.com/problems/duplicate-zeros/ 
// tricky question

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int counter=0;
        vector<int> res;
        for(int i=0;counter<arr.size();i++){
            if(arr[i]!=0){
                res.emplace_back(arr[i]);
                counter++;
                
            }
            else if(arr[i]==0){
                res.emplace_back(arr[i]);
                counter++;
                if(counter<arr.size()){
                    res.emplace_back(arr[i]);
                    counter++;
                }
            }
        }
       arr=res; 
    }
};
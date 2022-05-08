/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int> res;
    int ind;
    
    void trav(NestedInteger ni){
        if(ni.isInteger()){
            res.push_back(ni.getInteger());
            return;
        } else {
            for(auto x:ni.getList()) trav(x);
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        res.clear();
        for(auto x:nestedList) trav(x);
        ind = 0;
    }
    
    int next() {
        ind++;
        return res[ind-1];
    }
    
    bool hasNext() {
        return ind < res.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
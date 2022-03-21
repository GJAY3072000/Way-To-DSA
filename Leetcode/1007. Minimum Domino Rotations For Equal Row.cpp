class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        vector<int> faceA(7,0),faceB(7,0),same(7,0);
        for(int i=0;i<n;i++){
            faceA[tops[i]]++;
            faceB[bottoms[i]]++;
            if(tops[i]==bottoms[i]){
                same[tops[i]]++;
            }
        }
        for(int i=0;i<7;i++){
            if(faceA[i]+faceB[i]-same[i]==n){
                return n-max(faceA[i],faceB[i]);
            }
        }
        return -1;
    }
};
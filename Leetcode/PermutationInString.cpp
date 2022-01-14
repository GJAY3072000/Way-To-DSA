class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //taking two freq hashMap for s1 & s2
  vector<int> s1Hash(26,0);
  vector<int> s2Hash(26,0);
  int s1Len=s1.size();
  int s2Len=s2.size();
if(s1Len>s2Len) //s2 can't contain any permut.. of s2 if len of s2 is less than s1
  return false;

int left=0,right=0;
while(right<s1Len){ //suru me jitna len hai s1 ka utna window lena hai s2 ke surue me then sliding window
  s1Hash[s1[right]-'a']+=1; 
  s2Hash[s2[right]-'a']+=1;
  right+=1;
}
right-=1; //to point right to the end of the window
while(right<s2Len){
  if(s1Hash==s2Hash)
    return true;
  right+=1;
  if(right!=s2Len)
    s2Hash[s2[right]-'a']+=1; //move forward one element and include its coun't
  s2Hash[s2[left]-'a']-=1; //in sliding we left one element at left side and move forward
  left+=1;
}
return false;
        
    }
};
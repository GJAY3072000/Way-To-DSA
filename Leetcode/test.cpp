int findEarliestMonth(vector<int> stockprice){
    int n = stockprice.size();
    int i = 0 j = 1;
    int sum1=0;
    int sum2=0;
    int ans=accumulate(stockprice[0],stockprice[n])/n;
    while(i!=j){
        sum1 = floor(accumulate(stockprice[0],stockprice[i])/i);
        sum2 = floor(accumulate(stockprice[i+1],stockprice[n])/n-i+1);
        ans1 = abs(sum1-sum2);
        ans=min(ans1,ans);
        i++;
        j++;
    }
    return ans;
}
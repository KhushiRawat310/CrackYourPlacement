class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0;
        int s=1;
        int n=prices.size();
        int maxp=0,current;
        while(s<n)
        {
            current=prices[s]-prices[a];
            if(prices[a]<prices[s])
               maxp=max(current,maxp);
            else
              a=s;
            s++;
        }
        return maxp;
    }
};

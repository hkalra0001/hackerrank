#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    vector<int>nums(N);
    for (int i=0;i<N;i++)
    {
        cin>>nums[i];
    }
    int queries;
    cin>>queries;
    for (int i=0;i<queries;i++)
    {
        int x;
        cin>>x;
        vector<int>::iterator idx=lower_bound(nums.begin(),nums.end(),x);
        if (*(idx)==x)
        {
            cout<<"Yes "<<(idx-nums.begin()+1)<<endl;
        }
        else 
        {
            cout<<"No "<<(idx-nums.begin()+1)<<endl;
        }
    }
    return 0;
}

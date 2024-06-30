#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    int x;
    cin>>x;
    nums.erase(nums.begin()+x-1);
    
    int a,b;
    cin>>a>>b;
    
    nums.erase(nums.begin()+a-1,nums.begin()+b-1);
    
    cout<<nums.size()<<endl;
    
    for (int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    set<int>nums;
    int queries;
    cin>>queries;
    for (int i=0;i<queries;i++)
    {
        int query_type;
        cin>>query_type;
        int value;
        cin>>value;
        if (query_type==1)
        {
            nums.insert(value);
        }
        else if (query_type==2)
        {
            nums.erase(value);
        }
        else 
        {
            set<int>::iterator itr=nums.find(value);
            if (itr==nums.end())
            {
                cout<<"No"<<endl;
            }
            else 
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}
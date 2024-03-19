#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int queries;
    cin>>queries;
    map<string,int>marks;
    for(int i=0;i<queries;i++)
    {
        int query_type;
        cin>>query_type;
        string name;
        cin>>name;
        if (query_type==1)
        {
            int mark;
            cin>>mark;
            map<string,int>::iterator itr=marks.find(name);
            if (itr==marks.end())
            {
                marks.insert(make_pair(name,mark));
            }
            else 
            {
                marks[name]+=mark;
            }
        }
        else if (query_type==2)
        {
            marks[name]=0; 
        }
        else 
        {
            int mark=marks[name];
            cout<<mark<<endl;
        }
    }
}
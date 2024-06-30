#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set> // need to include set here
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>mySet;
    int queries;
    cin>>queries;
    while(queries--)
    {
        int query_type;
        cin>>query_type;
        int value;
        cin>>value;
        if (query_type==1)
        {
            mySet.insert(value);
        }
        else if (query_type==2)
        {
            set<int>::iterator it=mySet.find(value);
            if (it!=mySet.end())
            {
                mySet.erase(value);
            }
        }
        else
        {
            set<int>::iterator it=mySet.find(value);
            if (it!=mySet.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

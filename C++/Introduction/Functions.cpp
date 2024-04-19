#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    if (a>b && a>c && a>d)
    {
        return a;
    }
    else if (b>c && b>d)
    {
        return b;
    }
    else if (c>d)
    {
        return c;
    }
    else 
    {
        return d;
    }
    
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    cout<<max_of_four(num1, num2, num3, num4);
    return 0;
    
}

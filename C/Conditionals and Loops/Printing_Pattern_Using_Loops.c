#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maximum(int a,int b)
{
    if (a>b) return b;
    else return a;
}
int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i=0;i<=2*n-2;i++)
    {
        for (int j=0;j<=2*n-2;j++)
        {
            int top=i;
            int bottom=2*n-2-i;
            int right=2*n-2-j;
            int left=j;
            int a=maximum(maximum(top,bottom), maximum(right,left));
            printf("%d ",n-a);
        }
        printf("\n");
    }
    return 0;
}
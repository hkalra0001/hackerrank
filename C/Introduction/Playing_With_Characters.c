#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char string[100];
    char line[100];
    scanf("%c",&ch);
    scanf("%s",string);
    scanf("\n");
    scanf("%[^\n]%*c",line);
    printf("%c\n",ch);
    printf("%s\n",string);
    printf("%s",line);
    return 0;
}
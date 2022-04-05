#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four( int a, int b, int c,int d)
{
    int temp=a;
    for (int i=0;i<4;i++)
    {
        if (temp<b)
        temp=b;
        else if(temp<c)
        temp=c;
        else if(temp<d)
        temp=d;
    
    }
    return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

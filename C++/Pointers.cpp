#include <stdio.h>
#include<math.h>

void update(int *a,int *b) 
{
    // Complete this function
    
    //To store one of the results varaible temp is used
    int temp=*a;
    *a=*a+*b;
    *b=temp-*b;
    *b=abs(*b);
    //abs returns absolute value of the argument or value passed
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

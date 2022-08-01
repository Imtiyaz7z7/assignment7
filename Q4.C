#include <stdio.h>
int main() {
    int a,b,i,s;
    printf("enter a number: ");
    scanf("%d %d",&a,&b);
    for (i = 1; i <= b*a; i++)
    {
        if ( (a%i==0) && (b%i==0) )
        {
            s=i;
        }
    }
    printf("%d is HCF \n",s);
    return 0;
}
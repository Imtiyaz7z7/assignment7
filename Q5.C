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
    if (s==1)
    {
        printf("%d and %d are co-prime numbers\n",a,b);
    }else{
        printf("%d and %d are not co-prime numbers\n",a,b);
    }
    
    return 0;
}
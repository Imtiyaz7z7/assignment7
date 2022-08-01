#include<stdio.h>
int main(){
    int n,i,a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    for (n = a; n <= b; n++)
    {

        int flag=0;
        for (int i = 2; i <= n/2; i++)
        {
        if (n%i==0)
        {
            flag = 1;      
        }
        }
        if (flag==0)
        {
            printf("%d\n",n);
        }
        
    }  
}
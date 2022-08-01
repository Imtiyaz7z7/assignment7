#include<stdio.h>
int main(){
    int a;
    printf("Write a number");
    scanf("%d",&a);
    int count = 0;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
    int b = a%10;
    while (count!=0)
    {
        
    }
    
}
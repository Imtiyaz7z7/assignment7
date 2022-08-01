#include <stdio.h>
int main() {
    int a=-1,b=1,c,num;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
  return 0;
}
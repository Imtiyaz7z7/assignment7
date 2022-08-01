#include <stdio.h>
int main() {
    int a=-1,b=1,c,num;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        c = a+b;
        a=b;
        b=c;
    }
    printf("%d ",c);
  return 0;
}
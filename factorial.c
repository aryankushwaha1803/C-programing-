factorial programm
#include<stdio.h>
int main(){
        int n;
        printf("enter your number");
        scanf("%d",&n);
        int fact=1;
        for(int i=1; i<=n; i++ ){
                fact=fact*i;
        }
        printf("your fact is %d",fact);
        return 0;
}  

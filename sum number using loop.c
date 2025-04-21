#include<stdio.h>
int main(){
    int number;
    printf("enter your number you want sum:");
    scanf("%d",&number);

    int sum=0;
    for(int i=1; i<=number; i++) {
        sum=sum+i;
        
    }
    printf(" sum is: %d\n",sum);
    return 0;

}
    
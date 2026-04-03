#include<stdio.h>
int main()
{
    int num,i,c=0;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("factors :");
    for(i=1;i<=num;i++){
        if(num % i == 0){
            printf("%d\n",i);
            c++;
        }
    }
    if(c == 2){
        printf("A Prime number\n");
    }
    else{
        printf("Not a Prime number\n");
    }

}
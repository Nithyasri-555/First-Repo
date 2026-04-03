#include<stdio.h>
#include<math.h>

int main(){
  int n,f1 = 0,f2 = 1,f3,i;
  printf("Enter a number :");
  scanf("%d",&n);
  printf("Fibbonacci series upto n :");
printf("%d\n%d\n",f1,f2);
  for(i = 2;i<n;i++){
    f3 = f2 + f1;
    printf("%d\n",f3);
    f1 = f2;
    f2 = f3;
  }

 return 0;
}

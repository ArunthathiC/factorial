#include<stdio.h>
void main(){
  int fact=1,n,i;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    fact=fact*i;
  }
  printf("the factorial of number %d is %d",n,fact);
}
  

#include<stdio.h>
int main(){
  int i,flag = 0, n;
  printf("enter the number: ");
  scanf("%d",&n);
  if(n<2){
    printf("not a prime number.\n");
    return 0;
    
  }
  for(i=2; i<n; i++){
    if(n % i ==0){
      flag = 1;
      break;
    }
  }
if (flag ==0){
  printf("prime number \n");
  
} else {
  printf("not a prime number.\n");
}
  return 0;
}
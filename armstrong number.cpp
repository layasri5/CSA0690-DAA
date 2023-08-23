#include <stdio.h>
#include<math.h>
int main() {
  int n,r,mul=0;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) 
  {
    n= n/10;
    count++;
  }
  while(n!=0)
  {
  	 r=n%10;
  	 mul=(pow(r,count))+mul;
  	 n=n/10;
  }
  if(mul==n)
  {
  	printf("\n the given number is armstrong number",n);
  }
  else
  {
  	printf("\n the given number not armstrong number",n);
  }
}


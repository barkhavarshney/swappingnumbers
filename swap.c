#include<stdio.h>
int main() 
{
  int first, second, temp;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);
  printf("Before swapping: %d %d",first,second);
  temp = first;
  first = second;
  second = temp;
  printf("\nAfter swapping: %d %d",first,second);
  return 0;
}

/**                     //Documentation
 * Name: Shonubi Samuel
 * Matric number: 222513
  * description: Write a C program to count 1-N
 */


#include <stdio.h>

int main(){

int number = 0;
printf("Enter the number to be counted to: ");
scanf("%d", &number);
for(int i = 1; i <= number; i++){
 printf("%d \n", i);
}
}
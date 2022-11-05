
/**                     //Documentation
 * Name: Shonubi Samuel
 * Matric number: 222513
  * description: Write a C program to accept the names of 10 students
 */

#include <stdio.h>      

int main(void)          
{
 

char name[10][20];  // Set the code to able to collect maximum of 10 name
                    // and 20 character each

     int i,n;
     printf("Enter the number of student names (<10): ");
     scanf("%d",&n);

     // reading string from user
     printf("Enter %d names:\n",n);
     for(i=0; i<=n; i++)

        gets(name[i]);

     // displaying strings
     printf("\nEntered names are:\n");
     for(i=0;i<=n;i++)
        puts(name[i]);































  return 0;
}


/**                     //Documentation
 * Name: Shonubi Samuel
 * Matric number: 222513
  * description: Write a C programming language that reverses a sentence
 */


#include <stdio.h>  
#include <string.h>  
  
// use recursion function   
void reverseString(char *strg)  
{  
    // declare static variable  
    static int x, length_of_string, temp;  
    length_of_string = strlen(strg); // use strlen() to get the length of string  
      
      
    if (x < length_of_string/2){
        // temp variable use to temporary hold the string  
        temp = strg[x];  
        strg[x] = strg[length_of_string - x - 1];  
        strg[length_of_string - x - 1] = temp;  
        x++;  
        reverseString(strg); // recusively calls the reverseString() function  
    }  
}  
      
    int main()  
    {  
        char strg[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(strg); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", strg);  
          
        // call reverseString() function   
        reverseString(strg);  
        printf (" After reversing the string: %s", strg);  
    }  

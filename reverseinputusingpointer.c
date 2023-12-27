#include <stdio.h> 
#include <string.h> 
 
// Function to reverse the string 
// using pointers 
void reverseString(char* str) 
{ 
    int l, i; 
    char *begin_ptr, *end_ptr, ch; 
 
    // Get the length of the string 
    l = strlen(str); 
 
    // Setting the begin_ptr
    // to start of string 
    begin_ptr = str;
   
      //Setting the end_ptr the end of
      //the string
    end_ptr = str + l - 1;
 
    // Swap the char from start and end 
    // index using begin_ptr and end_ptr 
    for (i = 0; i < (l - 1) / 2; i++) { 
 
        // swap character 
        ch = *end_ptr; 
        *end_ptr = *begin_ptr; 
        *begin_ptr = ch; 
 
        // update pointers positions 
        begin_ptr++; 
        end_ptr--; 
    } 
} 
 
// Driver code 
int main() 
{ 
 
    // Get the string 
    char str[100] = "GeeksForGeeks"; 
    printf("Enter a string: %s\n", str); 
 
    // Reverse the string 
    reverseString(str); 
 
    // Print the result 
    printf("Reverse of the string: %s\n", str); 
 
    return 0; 
} 

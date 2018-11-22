char a, b, c; //declare three uninitialized char variables
char code = 'x' //declare the char variable named code

code = '!' //sores ! in the variable named code

//ASCII Table
char x = 'a';
char y = 90;

printf(%d, x) // returns 97
printf(%c, x) // returns a

printf(%d, y) // returns 90
printf(%c, y) // returns Z

//To print extended ASCII characters you must use unsigned char (0 - 255)
//regular ASCII is 0 - 127
unsigned char x;

//to use a string we use an array of characters
char string[10]; //Holds 9 char values, the last value is \0 which is the null character

//intializing character arrays (easy way)
char string[] = "Alabama";
char *string = "Alabama";

//When you call malloc() you pass the number of bytes of memory needed
#include <stdlib.h>
malloc(size_t size);

//To allocate memory for a string of 100 characts
#include <stdlib.h>
#include <stdio.h>
int main (void)
{
char *str
str = (char *) malloc(100);

if (str == NULL)
    printf("Not enough memory to allocate buffer\n");
    exit(1)

printf("String was allocated!\n");
return 0;
}

//To allocate memory for an array of 50 integers
int *numbers;
numbers = (int *) malloc(50 * sizeof(int));

//Allocate memory for an array of 10 float values
float *numbers;
numbers = (float *) malloc(10 * sizeof(float));

//Say yoyu want to allocate space for a string of 99 characters and the null character
char *ptr;
ptr = malloc(100);
//Same as
char ptr[100];

//Program should test the return value of malloc() against NULL

//You should always use malloc as followed to ensure that other programs or computers can run the program
//if not it might not run on other programs or computers
ptr = malloc(100 * sizeof(char));

//always unallocate memory once the program is done by using free()
free(ptr)

//puts() puts a string on the screen
//can be used to displat literal strings and string variables
example
char *m1 = "C";
char *m2 = "is the best programming language";

puts(m1);
puts(m2);

//returns
//C
//is the best programming language

//printf(%s) prints out the string as well, good for printing multiple strings on one line
//ie
printf(This %s is an %s, x, y);

//gets() reads input from keyboard up until newline character
//must include <stdio.h>

//When using scanf(%s%s%s), make sure to separate input by space
//such as Jan Feb Mar



/* Quiz */
//1. What is the range of numeric values in the ASCII character set?
    // 0 - 127
//2. When the C compiler encounters a single character enclosed in single qutation marks, how is it interpreted?
    //As a numeric value
//3. What is C's definition of a string?
    //An array of characters
//4. What is a literal string?
    //A character array with double qutation marks
//5. To store a string of n characters, you need a character array of n + 1 elements. Why is the extra element needed?
    //To leave space at the end for the null character \0
//6. When the compiler encounters a literal string, how is it interpreted?
    //As an arrary of characters following the ASCII table
//7. Using the ASCII chart in Appendix A, state the numeric value stored for each of the following:
    //a 97
    //A 65
    //9 39
    //A space 32
    //unsigned character 206
    //unsigned character 6
//9. How many bytes of storage are allocated for each of the following variables?
    //9 bytes
    //9 bytes
    //1 byte
    //20 bytes
    //20 bytes
//10. Using the following declaration: char *string = "A string!", what are the values of the following?
    //string A
    //*string A
    //string[9] 0(NULL)
    //string[33] 
    //*string+8 73
    //string address of the first element





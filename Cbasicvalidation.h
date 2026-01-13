#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>







//Function Declarations :

//Variables :
int validate_integerdatatype_full(int );
int validate_integerdatatype_fullwithrangealso(int );
char validate_singlechar_full(char );
char validate_singlechar_fullwithrangealso(char );
float validate_floatdatatype_full( float );
float validate_floatdatatype_fullwithrangealso( float );
//These single variable validations can be used in a loop for 1D or multidimensional arrays





//Arrays , character 1D :
int getche_string_char_array(char []);
//These 1D character array validations can be used in a loop for 2D or multidimensional arrays





//Function Implementations / Definitions :

//No float , no char .
int validate_integerdatatype_full(int n)
{

    char ch;

    while (1)
    {
        printf("Enter an integer : ");
        if (scanf("%d", &n) == 1)
        {
            // Check if there is a leftover character (like a decimal point)
            if (scanf("%c", &ch) == 1 && ch != '\n')
            {
                printf("Invalid Input. Please enter a valid integer again.\n");
                while (getchar() != '\n');  // Clear input buffer
            }

            else
            {
                return n;  // Valid integer input
            }
        }

        else
        {
            printf("Invalid Input. Please enter a valid integer again.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}





//No float , no char , no negative numbers
int validate_integerdatatype_fullwithrangealso(int n)
{

    char ch;

    while (1)
    {
        printf("Enter an integer : ");
        if (scanf("%d", &n) == 1)
        {
            // Check if there is a leftover character (like a decimal point)
            if (scanf("%c", &ch) == 1 && ch != '\n')
            {
                printf("Invalid Input. Please enter a valid integer again.\n");
                while (getchar() != '\n');  // Clear input buffer
            }

            else
            {
                if(n>=0)
                {
                    return n;  // Valid integer input
                }
                else
                {
                    printf("Negative Number !\n");
                }
            }
        }

        else
        {
            printf("Invalid Input. Please enter a valid integer again.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}














//No float , no int , only single character
char validate_singlechar_full(char ch)
{
    char extra;

    while (1)
    {
        printf("Enter a character between (A-Z) or (a-z) : ");

        // Read a single character and check if there�s extra input
        if (scanf(" %c", &ch) == 1)
        {
            if (scanf("%c", &extra) == 1 && extra != '\n')
            {
                printf("Invalid Input! Only one character is allowed.\n");
                while (getchar() != '\n');  // Clear buffer
            }
             // Allow all ASCII characters 0-127
            else if (ch>=0 && ch<=127 )
            {
                return ch;  // Valid input
            }
            else
            {
                printf("Invalid Input! Please enter a valid character.\n");
            }
        }
        else
        {
            printf("Invalid Input! Please enter a valid letter.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}











//Only single character , no float , no int , only alphabets
char validate_singlechar_fullwithrangealso(char ch)
{
    char extra;

    while (1)
    {
        printf("Enter a character between (A-Z) or (a-z) : ");

        // Read a single character and check if there�s extra input
        if (scanf(" %c", &ch) == 1)
        {
            if (scanf("%c", &extra) == 1 && extra != '\n')
            {
                printf("Invalid Input! Only one character is allowed.\n");
                while (getchar() != '\n');  // Clear buffer
            }
            else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                return ch;  // Valid character input
            }
            else
            {
                printf("Invalid Input! Please enter a valid letter (A-Z or a-z).\n");
            }
        }
        else
        {
            printf("Invalid Input! Please enter a valid letter.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}




















//No int , no char
float validate_floatdatatype_full( float num)
{

    char ch;

    while (1)
    {
        printf("Enter a float number : ");

        // Read input and check for non-numeric values
        if (scanf("%f", &num) == 1)
        {
            // Check if there's extra invalid input after the number
            if (scanf("%c", &ch) == 1 && ch != '\n')
            {
                printf("Invalid Input! Only numbers and a single decimal point are allowed.\n");
                while (getchar() != '\n');  // Clear input buffer
            }

            else
            {
                return num;  // Valid float input
            }
        }
        else
        {
            printf("Invalid Input! Please enter a valid float number.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}










//No int , no char , no negative number
float validate_floatdatatype_fullwithrangealso( float num)
{

    char ch;

    while (1)
    {
        printf("Enter a float number : ");

        // Read input and check for non-numeric values
        if (scanf("%f", &num) == 1)
        {
            // Check if there's extra invalid input after the number
            if (scanf("%c", &ch) == 1 && ch != '\n')
            {
                printf("Invalid Input! Only numbers and a single decimal point are allowed.\n");
                while (getchar() != '\n');  // Clear input buffer
            }

            else
            {
                if(num>=0)
                {
                    return num;  // Valid float input
                }
                else
                {
                    printf("Negative Number !\n");
                }
            }
        }
        else
        {
            printf("Invalid Input! Please enter a valid float number.\n");
            while (getchar() != '\n');  // Clear input buffer
        }
    }
}











//Used to take string input , char array , upto 100 characters only , returns the count :
int getche_string_char_array(char arr[])
{
    char x;
    int count ;
    int a = 0;
    while(a == 0)
    {
        count = 0;
        printf("Enter a string of upto 100 characters (Press enter to exit): ");
        for(int i = 0; i<100 ; )
        {

            x = getche();

            if(x == 13)
            {
                i = 150;
            }
            else if(x == 8)
            { // For backspace only
                 if(count > 0)
                 {
                    printf(" \b"); // Erase the character from console
                    count--;
                    i--;
                 }

            }
            else
            {
                arr[i] = x;
                count++;
                i++;
            }
        }

        for(int i = 0 ; i<count ; i++)
        {
            if ( ! (  (arr[i]>='A' && arr[i]<='Z') || (arr[i] >='a' && arr[i] <='z')  || (arr[i]==32) ) )
            {
                i = 150;
                count = -1;
                printf("You didn't enter a valid alphabet (A-Z) or (a-z)");
            }
        }
        //For reading exact characters , use == symbol
            if(count <= 100 && count>=0)
            {
                a = 1;
                arr[count] = '\0';
                return count;
            }
            else if(count>100)
            {
                a = 0;
                printf("You entered more than 100 characters");
            }
    }
}
























//Char Data Type---:
//Use %c for char data type inputs and You may print their real character values by %c or ASCII decimal values by %d
// char ch = '-300 or 300 ' , put here only a single value or it will wrap around in very unexpected way printing first value from right side
// char ch = 'a' , will print a on %c and 97 on %d
// char ch = 97 , will print a on %c and 97 on %d
// signed char ch = -5 will print -5 on %d and square root sign (-5 mod 256 = 251) on %c
// signed char ch = out of range , or 128 prints 128 mod 256 = -128 at %d and ascii value at -128 mod 256 = 128 which is symbol
// signed char ch = out of range , or -130 prints -130 mod 256 = 126 at %d and ascii value at 126 which is ~.
// unsigned char ch = 251 prints 251 at %d and sq root symbol at %c.
// unsigned char ch = out of range or -5 prints -5 mod 256 = 251 at %d and square root sign (-5 mod 256 = 251) at %c.
// char is by default signed .

//You may input char by getch or scanf(" %c" but getch is better in sentinel values.









//Integer Data Type -----:
//Use %d to input and display int data type
//By using %c to print %d integer , it will print ascii value
//By using %c to input integer , it will either print its ASCII value by %d or the character by %c
// int a = 200 , will print 200 at %d and ascii value of 200 at %c.
// int a = -150 , will print -150 at %d and ascii value of (-150 mod 256) %c
// int a = 2147483648 will print 2147483648 % 4294922296 = -2147483648 at %d and 2147483648 mod 256 at %c.
// unsigned int a = 150 will print 200 at %d and ascii value of 200 at %c.
// unsigned int a = -5 will print -5 at %d , -5 mod 4294922296 at %u and -5 mod 256 = 251 square root sign at %c
// int is signed by default

//printf("%c",200) will treat 200 as signed int and print ascii value of 200 here.
//printf("%c",2147483648) will treat the number as signed int and print ascii value of num mod 256 and print num mod 4294922296 at %d
//printf("%d",'a') prints the ascii value 65
//If you want to input an integer but not a character , use a loop , scanf %d and getchar to clean buffer and %d fpr input.If you dont use getchar , it will become infinite loop



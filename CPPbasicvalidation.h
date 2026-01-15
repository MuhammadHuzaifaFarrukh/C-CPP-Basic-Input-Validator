#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <string>
#include <conio.h>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;


//Function Declarations :

//Variables :
int validateint_full(int );
int validateint_fullwithrangealso(int );
char validatechar_singlechar_full(char );
char validatechar_singlechar_fullwithrangealso(char );
float validatefloat_full(float );
float validatefloat_fullwithrangealso(float );
float validatefloat_full_dividesign();
float validatefloat_full_dividesign_rangealso();
void print_float_as_integer_if_whole(float, int, char );

//These are for static variable validations but you may use them for dynamic allocation variables validations as well
//These single variable (static / dynamic ) validations can be used in a loop for 1D or multidimensional arrays





//Try to use (*arr)[column_size] in static or fixed size arrays and *arr[] in dynamic arrays

//Arrays , integer nD , static + dynamic :
//These 1D or 2D int array validations can be used in a loop for 2D or multidimensional arrays


//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
void validateint_1DArray(int arr[], int ); // //or int *arr
void validateint_2DArray(int arr[][3], int);  //or int (*arr)[3]


//The below function returns a pointer to the main or any function like
int* validateint_dynamic_1DArray(int );
//Use below function to deallocate
void delete1DArray(int* arr); // or int arr[]

//You need to use pointer to pointer approach to allocate / deallocate more than 1D dynamic arrays
//Number of pointers increase as dimensions increase
int** validateint_dynamic_2DArray(int, int );
//Use below function to deallocate
void delete2DArray(int** arr, int ); // or int *arr[]





//Arrays , float nD , static + dynamic :
//These 1D or 2D float array validations can be used in a loop for 2D or multidimensional arrays

//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
void validatefloat_1DArray(float arr[], int size); //or float *arr

void validatefloat_2DArray(float arr[][3], int rows); //or float *arr[3]

//The below function returns a pointer to the main or any function like
// E.g float *arr =  validatefloat_dynamic_1DArray( size)
float* validatefloat_dynamic_1DArray(int size);
//Use below function for deallocation must
void deleteDynamic1DFloat(float* arr); // or float arr[]

//You need to use pointer to pointer approach to allocate / deallocate more than 1D dynamic arrays
//Number of pointers increase as dimensions increase

float** validatefloat_dynamic_2DArray(int, int );
//Use below function for deallocation must
void deleteDynamic2DFloat(float** arr, int rows); // or float *arr[]



//Find length of a character array ( or std::string)
int getCStringLength(char* );



//Arrays , character nD , static + dynamic :
//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
//You need to use pointer to pointer approach to allocate / deallocate more than 1D dynamic arrays
//Number of pointers increase as dimensions increase
//In functions of more than 1D , a separate array is used for counting each row of the array , you may modify this function as you please , by keeping this separate array here in the function or using a variable in the main for this purpose
//You may modify these functions parameters by adding a length of array variable etc
int getche_char_array(char []);

char* getche_dynamic_1Darray(int* ); // or int arr[]
//Use below function if you are using above
void delete1DCharArray(char* arr); // or char arr[]

int getche_char_2Darray(char arr[][100], int ); // or char *arr[]

char** getche_char_dynamic_2Darray(int, int* );
//Use below function for deallocation
void delete2DCharArray(char**, int );



int isValidChar(char );
int getline_char_array(char [], int);


//int isValidChar(char c);
//Use above function if you are using below function
char* getline_dynamic_1Darray(int*, int) ;
//Use below function for deallocation
//void delete1DCharArray(char* arr);


//int isValidChar(char c);
//Use above function if you are using below function
void getline_2Darray(char arr[][101], int, int []);


//int isValidChar(char);
//Use above function if you are using below function
char** getline_dynamic_2Darray(int, int*, char [], int );
//Use below function for deallocation
//void delete2DCharArray(char** , int );


//int isValidChar(char )
int getline_char_array_exact(char []);


//int isValidChar(char );
//Use above function if you are using below function
char* getline_dynamic_1Darray_exact(int* );
//Use below function for deallocation
//void delete1DCharArray(char* ) ;


//int isValidChar(char );
//Use above function if you are using below function
void getline_2Darray_exact(char arr[][11], int rows, int* ) ;

//int isValidChar(char );
//Use above function if you are using below function
char** getline_dynamic_2Darray_exact(int, int*, char [], int  );
//Use below function for deallocation
//void delete2DCharArray(char** , int );





//These 1D character array validations can be used in a loop for 2D or multidimensional arrays
//Array address formula :
//Suppose length , height , rows , columns be in order of 4th dimension then here are the formulas for finding addresses for 1-4D arrays
//&arr[i] = address of arr[0] + sizeof(int)*i if it is int 1D array
//&arr[i][j] = address of arr[0][0] + sizeof(int)*(i*columns + j) if it is int 2D array
//&arr[i][j][k] = address of arr[0][0][0] + sizeof(int)*(i*rows*columns + j*columns + k) if it is int 3D array
//&arr[i][j][k][l] = address of arr[0][0][0][0] + sizeof(int)*(i*height*rows*columns + j*rows*columns + k*columns + l )
//For calculating the address , just keep multiplying the array dimensions from left to right altogether laeving first left dimension only , i.e if height , rows , columns , then multiply -> rows*columns*1st dim + columns*2nd dim ...




//String Variable Type Class  equivalent to 1D Character Array :
//We don't need dynamic functions separate as the static functions will do the job for both
bool isValidChar_string(char );
void string_getline(std::string&, int  );

//bool isValidChar_string(char );
void string_getline_exact(std::string& );


//bool isValidChar_string(char );
int getche_string(string& str);


//These single string variable validations can be used in a loop for 1D or multidimensional arrays





//String Arrays , 1D Strings = 2D character array , , static + dynamic :
//bool isValidChar_string(char );
bool validateString(const std::string& s);
void string_array_getline(std::string []);


//bool isValidChar_string(char );
//bool validateString(const std::string& s);
//Use above functions must for using below function
std::string* string_1Darray_getline_dynamic();
//Use below functionfor deallocations
void deleteStringArray(std::string* );


//bool isValidChar_string(char );
//Use above function must for using below function
void string_array_getche(string str[]);


//bool isValidChar_string(char );
std::string* string_1Darray_getche_dynamic(int array_size, int max_str_size = 100);
//Use below functionfor deallocations
//void deleteStringArray(std::string* );



// This is used when we don't want to use delete and this manages the memory very good in case of 2D character arrays or 1D string . No need for this in string variables as they already don't need any new or delete allocation
// Returns true if valid character (A-Z, a-z, space), false otherwise
//bool isValidChar_string(char );
//Use above function must for using below function
std::vector<std::string> string_getline_vector_memorymanagement(int );


//These 1D string array validations can be used in a loop for 2D or multidimensional character arrays
//You may make or allocate dynamic variables / arrays / strings in main function and then make a loop there and then keep calling the single variable or 1D array function validation input for the required heap variables or higher dimensions arrays or strings on stack or heap instead of making





//How to get multiple Delimiters in getline(cin, arr) for std::string only (by sstream)
//Also can be used for getting multiple inputs / arguments but for one data type at a time
//Also used when asked to take input in a whole line with space separated and array size not known (Usually in "CP" competitive programming)
//The Main reason in using these in "CP" is that array size is unknown otherwise for fixed size or fixed number of variables we can also input like cin>>a>>b>>c of same data type
//But the input doesn't stop at these delimiters
std::vector<std::string> parse_and_validate_string(const std::string& input_line);
std::vector<int> parse_and_validate_numbers(const std::string& input_line); // Just like a splitter function for coding contests where N is not given sometimes and we write code in C++

//To make input storing stop at these delimiters , we use this function:
void string_getline_multiple_delimiters(std::string& str, int );





//Function Implementations / Definitions :
//No float , no character
int validateint_full(int n)
{
    using namespace std;

    char ch;

    while (1)
    {
        cout << "Enter an integer : ";
        if (cin >> n)
        {
            // Check if there's leftover input (like a decimal point)
            if (cin.get(ch) && ch != '\n')
            {
                cout << "Invalid Input. Please enter a valid integer again.\n";
                cin.clear();  // Clear error flags
                while (cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                return n;  // Valid integer input
            }
        }
        else
        {
            cout << "Invalid Input. Please enter a valid integer again.\n";
            cin.clear();  // Clear error state
            while (cin.get() != '\n');  // Flush input buffer
        }
    }
}














//No float , no character , no negative number
int validateint_fullwithrangealso(int n)
{
    using namespace std;

    char ch;

    while (1)
    {
        cout << "Enter an integer : ";
        if (cin >> n)
        {
            // Check if there's leftover input (like a decimal point)
            if (cin.get(ch) && ch != '\n')
            {
                cout << "Invalid Input. Please enter a valid integer again.\n";
                cin.clear();  // Clear error flags
                while (cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                if(n>=0)
                {
                    return n;  // Valid integer input
                }
                else
                {
                    cout<<"Negative Number !"<<endl;
                }
            }
        }
        else
        {
            cout << "Invalid Input. Please enter a valid integer again.\n";
            cin.clear();  // Clear error state
            while (cin.get() != '\n');  // Flush input buffer
        }
    }
}




//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
void validateint_1DArray(int arr[], int size) //int *arr
{
    char ch;
    for (int i = 0; i < size; i++)
    {
        while (true)
        {
            cout << "Enter element [" << i << "]: ";
            if (cin >> arr[i])
            {
                // Check for leftover input (e.g., decimals/letters)
                if (cin.get(ch) && ch != '\n')
                {
                    cout << "Error: Only integers allowed. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Flush buffer
                }
                else
                {
                    break;  // Valid input
                }
            }
            else
            {
                cout << "Error: Invalid integer. Try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Flush buffer
            }
        }
    }
}






//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
void validateint_2DArray(int arr[][3], int rows)  // or int *arr[]
{
    char ch;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while (true)
            {
                cout << "Enter element [" << i << "][" << j << "]: ";
                if (cin >> arr[i][j])
                {
                    // Check for leftover input (e.g., decimal points)
                    if (cin.get(ch) && ch != '\n')
                    {
                        cout << "Invalid input. Please enter an integer.\n";
                        cin.clear();
                        while (cin.get() != '\n'); // Flush buffer
                    }
                    else
                    {
                        break; // Valid input
                    }
                }

                else
                {
                    cout << "Invalid input. Please enter an integer.\n";
                    cin.clear();
                    while (cin.get() != '\n'); // Flush buffer
                }
            }
        }
    }
}




//You may change the size as you please , as it is for dynamic 1D array
//This function returns a pointer to the main or any function like
// E.g int *arr ; arr =  validateint_dynamic_1DArray( size);
int* validateint_dynamic_1DArray(int size)
{
    int* arr = new int[size];  // Allocation
    char ch;

    for (int i = 0; i < size; i++)
    {
        while (true)
        {
            cout << "Enter element [" << i << "]: ";
            if (cin >> arr[i])
            {
                // Check for leftover input (e.g., decimals/letters)
                if (cin.get(ch) && ch != '\n')
                {
                    cout << "Error: Only integers allowed. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                else
                {
                    break;  // Valid input
                }
            }
            else
            {
                cout << "Error: Invalid integer. Try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    return arr;  // Return pointer to the allocated array
}
//Use below function to deallocate after using the above function

void delete1DArray(int* arr) // int arr[]
{
    // or int arr[]
    delete[] arr;  // Free memory
    arr = nullptr;
}






//You may change the size as you please , as it is for dynamic 2D array
//This function returns a double pointer to the main or any function like
//You need to use pointer to pointer approach to allocate / deallocate more than 1D dynamic arrays
//Number of pointers increase as dimensions increase
// E.g : int** myArray = createAndValidate2DArray(rows, cols);
int** validateint_dynamic_2DArray(int rows, int cols)
{
    // Allocate memory
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // Validate and fill each element
    char ch;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            while (true)
            {
                cout << "Enter element [" << i << "][" << j << "]: ";
                if (cin >> arr[i][j])
                {
                    // Check for leftover input (like decimals)
                    if (cin.get(ch) && ch != '\n')
                    {
                        cout << "Error: Only integers allowed. Try again.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    else
                    {
                        break; // Valid input
                    }
                }
                else
                {
                    cout << "Error: Invalid integer. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
        }
    }
    return arr;
}

//Use below function to deallocate after using the above function
void delete2DArray(int** arr, int rows) //int *arr[]
{
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i]; // Free each row
    }
    delete[] arr; // Free row pointers
    arr = nullptr;
}



/*
//For allocating a 3D array using 2D arrays :
    int*** str = new int**[num_arrays];

    char array_names[][20] = {  };  //Name for each 2D array
    for (int i = 0; i < num_arrays; i++)
    {
        // Call function to allocate the i-th 2D array
        //Input rows and columns from user
        int *count = new int[rows]; // Track success per row of each 2D
        str[i] = int_allocating_validating_function(rows, count , array_names[i] , columns );
        delete[] count;
    }
*/














//No int , no float , only single character
char validatechar_singlechar_full(char ch)
{
    using namespace std;
    char extra;

    while (1)
    {
        std::cout << "Enter a character (ASCII) :  ";
        std::cin >> ch;

        // Check if there's extra input (prevents multiple characters)
        if (std::cin.get(extra) && extra != '\n')
        {
            std::cout << "Invalid Input! Only one character is allowed.\n";
            while (std::cin.get() != '\n');  // Clear input buffer
        }
        // Allow all ASCII characters 0-127
        else if (ch>=0 && ch<=127 )
        {
            return ch;  // Valid input
        }
        else
        {
            std::cout << "Invalid Input! Please enter a valid character.\n";
        }

        // Clear any remaining input to prevent infinite loop
        std::cin.clear();
    }
}












//No int , no float , only single character , only alphabets
char validatechar_singlechar_fullwithrangealso(char ch)
{
    using namespace std;
    char extra;

    while (1)
    {
        std::cout << "Enter a character between (A-Z) or (a-z) : ";
        std::cin >> ch;

        // Check if there's extra input (prevents multiple characters)
        if (std::cin.get(extra) && extra != '\n')
        {
            std::cout << "Invalid Input! Only one character is allowed.\n";
            while (std::cin.get() != '\n');  // Clear input buffer
        }
        // Allow only alphabetic characters (A-Z, a-z)
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            return ch;  // Valid input
        }
        else
        {
            std::cout << "Invalid Input! Please enter a valid letter (A-Z or a-z).\n";
        }

        // Clear any remaining input to prevent infinite loop
        std::cin.clear();
    }
}
























//No int , no char
float validatefloat_full(float num)
{

    using namespace std;
    char ch;

    while (1)
    {
        std::cout << "Enter a float number : ";

        // Read input and check if it is a valid float
        if (std::cin >> num)
        {
            // Check if there's extra invalid input (like characters after the number)
            if (std::cin.get(ch) && ch != '\n')
            {
                std::cout << "Invalid Input! Only numbers and a single decimal point are allowed.\n";
                std::cin.clear();  // Clear error flags
                while (std::cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                return num;  // Valid float input
            }
        }
        else
        {
            std::cout << "Invalid Input! Please enter a valid float number.\n";
            std::cin.clear();  // Clear error state
            while (std::cin.get() != '\n');  // Flush input buffer
        }
    }
}












//No int , no char , no negative numbers
float validatefloat_fullwithrangealso(float num)
{
    using namespace std;

    char ch;

    while (1)
    {
        std::cout << "Enter a float number : ";

        // Read input and check if it is a valid float
        if (std::cin >> num)
        {
            // Check if there's extra invalid input (like characters after the number)
            if (std::cin.get(ch) && ch != '\n')
            {
                std::cout << "Invalid Input! Only numbers and a single decimal point are allowed.\n";
                std::cin.clear();  // Clear error flags
                while (std::cin.get() != '\n');  // Flush input buffer
            }
            else
            {
                if(num>=0)
                {
                    return num;  // Valid float input
                }
                else
                {
                    cout<<"Negative Number !"<<endl;
                }

            }
        }
        else
        {
            std::cout << "Invalid Input! Please enter a valid float number.\n";
            std::cin.clear();  // Clear error state
            while (std::cin.get() != '\n');  // Flush input buffer
        }
    }
}







float validatefloat_full_dividesign()
{
    using namespace std;
    string input;

    while (true)
    {
        cout << "Enter a float number (e.g., 3.14 or 2/3): ";
        getline(cin, input); // Read the entire line of input

        // Try converting directly to float first
        stringstream ss_float(input);
        float num;
        if (ss_float >> num && ss_float.eof())
        {
            return num; // Valid float input
        }

        // Check if it's a fraction (contains exactly one '/')
        size_t slash_pos = input.find('/');
        if (slash_pos != string::npos && input.find('/', slash_pos + 1) == string::npos)
        {
            // Split the string into numerator and denominator
            string numerator_str = input.substr(0, slash_pos);
            string denominator_str = input.substr(slash_pos + 1);

            // Try converting numerator and denominator to integers
            stringstream ss_num(numerator_str);
            stringstream ss_den(denominator_str);
            int numerator, denominator;

            if (ss_num >> numerator && ss_num.eof() && ss_den >> denominator && ss_den.eof())
            {
                if (denominator != 0)
                {

                    return static_cast<float>(numerator) / denominator;

                }
                else
                {
                    cout << "Invalid Input! Denominator cannot be zero.\n";
                }
            }
            else
            {
                cout << "Invalid Input! Numerator and denominator must be integers.\n";
            }
        }
        else
        {
            cout << "Invalid Input! Please enter a valid float number or a fraction (e.g., 2/3).\n";
        }

        // Clear error flags (though getline doesn't usually set them in this way)
        cin.clear();
        // No need to flush the buffer with getline as it reads the whole line
    }
}








float validatefloat_full_dividesign_rangealso()
{
    using namespace std;
    string input;

    while (true)
    {
        cout << "Enter a float number (e.g., 3.14 or 2/3): ";
        getline(cin, input); // Read the entire line of input

        // Try converting directly to float first
        stringstream ss_float(input);
        float num;
        if (ss_float >> num && ss_float.eof())
        {
            return num; // Valid float input
        }

        // Check if it's a fraction (contains exactly one '/')
        size_t slash_pos = input.find('/');
        if (slash_pos != string::npos && input.find('/', slash_pos + 1) == string::npos)
        {
            // Split the string into numerator and denominator
            string numerator_str = input.substr(0, slash_pos);
            string denominator_str = input.substr(slash_pos + 1);

            // Try converting numerator and denominator to integers
            stringstream ss_num(numerator_str);
            stringstream ss_den(denominator_str);
            int numerator, denominator;

            if (ss_num >> numerator && ss_num.eof() && ss_den >> denominator && ss_den.eof())
            {
                if (denominator != 0)
                {
                    if (static_cast<float>(numerator) / denominator > 0)
                    {
                        // The fraction's value is greater than zero
                        return static_cast<float>(numerator) / denominator;
                    }
                    else if (static_cast<float>(numerator) / denominator <= 0)
                    {
                        cout << "Invalid Input! The value must be greater than zero.\n";
                    }
                }
                else
                {
                    cout << "Invalid Input! Denominator cannot be zero.\n";
                }
            }
            else
            {
                cout << "Invalid Input! Numerator and denominator must be integers.\n";
            }
        }
        else
        {
            cout << "Invalid Input! Please enter a valid float number or a fraction (e.g., 2/3).\n";
        }

        // Clear error flags (though getline doesn't usually set them in this way)
        cin.clear();
        // No need to flush the buffer with getline as it reads the whole line
    }
}








void print_float_as_integer_if_whole(float value, int integral_width = 0, char fill_char = ' ') //Width will be padded with char fill_char
{
    using namespace std;
    if (std::floor(value) == std::ceil(value))
    {
        // The value has no fractional part, so it's a whole number
        std::cout << std::setw(integral_width) << std::setfill(fill_char) << static_cast<int>(value) << std::endl;
    }
    else
    {
        // The value has a fractional part, so print it as a float
        std::cout << std::fixed << std::setprecision(5) << std::setw(integral_width) << std::setfill(' ') << value << std::endl;
    }
}




void validatefloat_1DArray(float arr[], int size) //or float *arr
{
    char ch;
    for (int i = 0; i < size; i++)
    {
        while (true)
        {
            cout << "Enter element [" << i << "]: ";
            if (cin >> arr[i])
            {
                if (cin.get(ch) && ch != '\n')
                {
                    cout << "Error: Only floats allowed. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                else
                {
                    break;  // Valid input
                }
            }
            else
            {
                cout << "Error: Invalid float. Try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
}














//You may change the size as you please , as it is for static 2D array
//For and nD array static , specify the last n-1 dimensions in prototype
void validatefloat_1DArray(float arr[][3], int rows) // or float *arr[3]
{
    char ch;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while (true)
            {
                cout << "Enter element [" << i << "][" << j << "]: ";
                if (cin >> arr[i][j])
                {
                    if (cin.get(ch) && ch != '\n')
                    {
                        cout << "Error: Only floats allowed. Try again.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Error: Invalid float. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
        }
    }
}








// E.g float *arr =  validatefloat_dynamic_1DArray( size)
float* validatefloat_dynamic_1DArray(int size)
{
    float* arr = new float[size];
    char ch;
    for (int i = 0; i < size; i++)
    {
        while (true)
        {
            cout << "Enter element [" << i << "]: ";
            if (cin >> arr[i])
            {
                if (cin.get(ch) && ch != '\n')
                {
                    cout << "Error: Only floats allowed. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "Error: Invalid float. Try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    return arr;
}
//Use below function for deallocation must
void deleteDynamic1DFloat(float* arr) //or float arr[]
{
    delete[] arr;
    arr = nullptr;
}










// E.g :   float** dyn2DArray = createAndValidateDynamic2DFloat(2, 3);
float** validatefloat_dynamic_2DArray(int rows, int cols)
{
    float** arr = new float*[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new float[cols];
        for (int j = 0; j < cols; j++)
        {
            char ch;
            while (true)
            {
                cout << "Enter element [" << i << "][" << j << "]: ";
                if (cin >> arr[i][j])
                {
                    if (cin.get(ch) && ch != '\n')
                    {
                        cout << "Error: Only floats allowed. Try again.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Error: Invalid float. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
        }
    }
    return arr;
}
//Use below function for deallocation must
void deleteDynamic2DFloat(float** arr, int rows) // or float *arr[]
{
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr= nullptr;
}







/*
//For allocating a 3D array using 2D arrays :
    float*** str = new float**[num_arrays];

    char array_names[][20] = {  };  //Name for each 2D array
    for (int i = 0; i < num_arrays; i++)
    {
        // Call function to allocate the i-th 2D array
        //Input rows and columns from user
        int *count = new int[rows]; // Track success per row of each 2D
        str[i] = float_allocating_validating_function(rows, count , array_names[i] , columns );
        delete[] count;
    }
*/






//C uses functions like : fgets , getche , getch that have stdin buffer whereas C++ uses getline , cin.get etc that have std::cin buffer
//Stop reading input means that input is stopped reading although user may keep writing but exiting input means that user can't write anymore and goes to next step of execution
//getline , cin.get , cin.getline functions are what only allow stop reading input with any key you want however exit when user presses enter key.
//getche is more good as it allows stop reading and exiting with any key you want




//Used to take string input , char array , upto 100 characters only , returns the count :
//Will stop reading at any key you want
int getche_char_array(char arr[])
{
    char x;
    int count ;
    int a = 0;
    while(a == 0)
    {
        count = 0;
        cout<<endl<<"Enter a string of upto 100 characters (Press enter to exit): "<<endl;
        for(int i = 0; i<100 ; )
        {

            x = getche();

            if(x == 13)
            {
                i = 150;
            }
            else if(x == 8)
            {
                // For backspace only
                if(count > 0)
                {
                    cout << " \b"; // Erase the character from console
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
                cout<<endl<<"You didn't enter a valid alphabet (A-Z) or (a-z)"<<endl;
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
            cout<<endl<<"You entered more than 100 characters"<<endl;
        }
    }
}



//Find length of a string
int getCStringLength(char* str)
{
    int len = 0;
    while (str[len] != '\0')   // Manually count until null terminator
    {
        len++;
    }
    return len;
}



// E.g : int char_count; char* text = createAndValidate1DCharArray(&char_count);
char* getche_dynamic_1Darray(int* char_count) // int char_count[]
{
    char* arr = new char[101];  // Allocate (100 chars + null terminator)
    int count = 0;
    bool valid = false;

    while (!valid)
    {
        std::cout << "\nEnter text (A-Z/a-z/spaces only, max 100 chars):\n";
        count = 0;
        char ch;

        // Character-by-character input
        while (count < 100 && (ch = getche()) != 13)    // 13 = Enter key
        {
            if (ch == 8)    // Backspace
            {
                if (count > 0)
                {
                    std::cout << " \b";
                    count--;
                }
            }
            else if (isalpha(ch) || ch == ' ')
            {
                arr[count++] = ch;
            }
            else
            {
                std::cout << "\nInvalid character! Only letters/spaces allowed.\n";
                break;
            }
        }

        // Validate entire string
        if (count > 0)
        {
            arr[count] = '\0';  // Null-terminate
            valid = true;
        }
    }

    *char_count = count;
    return arr;
}
//Use below function for deallocation
void delete1DCharArray(char* arr) // or char arr[]
{
    delete[] arr;  // Free the allocated memory
    arr = nullptr; // Prevent dangling pointer (optional)
}





//You may modify this function as you please , by keeping this separate array here in the function or using a variable in the main for this purpose
//E.g :  char strings[5][100]; // Stores 5 strings of max 100 chars each
//       getche_char_2Darray(strings , 5);
int getche_char_2Darray(char arr[][100], int rows) // or char *arr
{
    for(int r = 0; r < rows; r++)
    {
        char x;
        int count = 0;
        bool valid = false;

        while(!valid)
        {
            cout << endl << "Enter string " << r+1 << " (max 100 chars, ENTER to finish): " << endl;
            count = 0;

            // Character input loop
            for(int i = 0; i < 100; )
            {
                x = getche();

                if(x == 13)   // Enter key
                {
                    break;
                }
                else if(x == 8)   // Backspace
                {
                    if(count > 0)
                    {
                        cout << " \b";
                        count--;
                        i--;
                    }
                }
                else
                {
                    arr[r][i] = x;
                    count++;
                    i++;
                }
            }

            // Null-terminate the string
            arr[r][count] = '\0';

            // Validation
            valid = true;
            for(int i = 0; i < count; i++)
            {
                if(!(   (arr[r][i]>='A' && arr[r][i]<='Z') ||
                        (arr[r][i]>='a' && arr[r][i]<='z') ||
                        (arr[r][i]==32)  ) )
                {
                    cout << endl << "Invalid character detected. Only A-Z, a-z and spaces allowed." << endl;
                    valid = false;
                    break;
                }
            }

            if(count > 100)
            {
                cout << endl << "Maximum 100 characters exceeded!" << endl;
                valid = false;
            }
        }
    }
    return 1; // Success
}




//Here a separate array is used for counting each row of the array , you may modify this function as you please , by keeping this separate array here in the function or using a variable in the main for this purpose
// E.g :
//int rows = 3;
//int* char_counts = new int[rows];  // Track lengths
//char** strings = getche_char_dynamic_2Darray(rows, char_counts);

char** getche_char_dynamic_2Darray(int rows, int* char_counts)
{
    char** arr = new char*[rows];  // Allocate row pointers

    for (int r = 0; r < rows; r++)
    {
        arr[r] = new char[101];  // Allocate each string (100 chars + null)
        bool valid = false;

        while (!valid)
        {
            std::cout << "\nEnter string #" << r + 1 << " (A-Z/a-z/spaces, max 100 chars):\n";
            int count = 0;
            char ch;

            // Real-time input with validation
            while (count < 100 && (ch = getche()) != 13)    // 13 = Enter key
            {
                if (ch == 8)    // Backspace
                {
                    if (count > 0)
                    {
                        std::cout << " \b";
                        count--;
                    }
                }
                else if ((ch >= 'A' && ch <= 'Z') ||  // Uppercase check
                         (ch >= 'a' && ch <= 'z') ||  // Lowercase check
                         (ch == ' '))                 // Space check
                {
                    arr[r][count++] = ch;
                }
                else
                {
                    std::cout << "\nInvalid character! Only A-Z, a-z and spaces allowed.\n";
                    break;
                }
            }

            if (count > 0)
            {
                arr[r][count] = '\0';  // Null-terminate
                char_counts[r] = count;
                valid = true;
            }
        }
    }
    return arr;
}
//Use below function for deallocation
void delete2DCharArray(char** arr, int rows)
{
    for (int r = 0; r < rows; r++)
    {
        delete[] arr[r];  // Free each string
    }
    delete[] arr;         // Free row pointers
    arr = nullptr;        // Optional safety
}








//cin.getline will may keep reading input but will stop storing if we specify the third argument in it :
// cin.getline(arr, 100 , '\n')


//Code for string input using cin.getline , will input upto 100 or the size which user will give characters :
//Use cin.getline code when user will have to exit using enter key only :
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise
int isValidChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
    {
        return 1;
    }
    return 0;
}
//Below code requires the above isValidChar Function code as well
int getline_char_array(char arr[], int MAX_SIZE)
{

    int valid = 0;
    int count = 0;

    while (valid == 0)
    {
        std::cout << "\nEnter a string (A-Z, a-z, spaces only, max "<<MAX_SIZE<<" chars):\n";

        // Read input
        std::cin.getline(arr, MAX_SIZE + 1);  // +1 for null terminator

        // Check for input overflow
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cout << "Input too long! Max "<<MAX_SIZE<<" characters allowed.\n";
        }
        else
        {
            // Validate each character and count length
            count = 0;
            valid = 1;

            while (arr[count] != '\0' && count <= MAX_SIZE)
            {
                if (isValidChar(arr[count]) == 0)
                {
                    valid = 0;
                    std::cout << "Error: Only A-Z, a-z, and spaces allowed!\n";

                }
                count = count + 1;
            }


        }
    }
    cout<<endl;

    return count;
}



//Code for string input using cin.getline , will input upto 100 characters :
//Use cin.getline code when user will have to exit using enter key only :
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise

//E.g : int count;    char* str = getline_dynamic_1Darray(&count);

/*
int isValidChar(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ';
}
*/
//Below code requires the above isValidChar Function code as well
char* getline_dynamic_1Darray(int* char_count, int MAX_SIZE )
{
    //const int MAX_SIZE = 100;
    char* arr = new char[MAX_SIZE + 1]; // +1 for null terminator
    int valid = 0;

    while (!valid)
    {
        cout << "\nEnter a string (A-Z, a-z, spaces only, max "<<MAX_SIZE<< " chars):\n";
        cin.getline(arr, MAX_SIZE + 1);

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input too long! Max 100 characters allowed.\n";
        }
        else
        {
            *char_count = 0;
            valid = 1;

            while (arr[*char_count] != '\0')
            {
                if (!isValidChar(arr[*char_count]))
                {
                    valid = 0;
                    cout << "Error: Invalid character detected.\n";
                    break;
                }
                (*char_count)++;
            }
        }
    }
    return arr;
}
//Use below function for deallocation
/*
void delete1DCharArray(char* arr) // or char arr[]
{
    delete[] arr;  // Free the allocated memory
    arr = nullptr; // Prevent dangling pointer (optional)
}
*/





//Code for string input using cin.getline , will input upto 100 characters :
//Use cin.getline code when user will have to exit using enter key only :
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise

//Here a separate array is used for counting each row of the array , you may modify this function as you please , by keeping this separate array here in the function or using a variable in the main for this purpose

//E.g :
//const int ROWS = 3;
//char arr[ROWS][101];
//int counts[ROWS]; // You may allocate counts -> Rows dynamically
//getline_static_2Darray(arr, ROWS, counts);


/*
int isValidChar(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ';
}
*/


//Below code requires the above isValidChar Function code as well
void getline_2Darray(char arr[][101], int rows, int char_counts[])
{
    const int MAX_SIZE = 100;
    for (int r = 0; r < rows; r++)
    {
        int valid = 0;
        while (!valid)
        {
            cout << "\nEnter string #" << r+1 << " (A-Z, a-z, spaces only) :";
            cin.getline(arr[r], MAX_SIZE + 1);

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input too long! Max 100 chars.\n";
            }
            else
            {
                char_counts[r] = 0;
                valid = 1;

                while (arr[r][char_counts[r]] != '\0')
                {
                    if (!isValidChar(arr[r][char_counts[r]]))
                    {
                        valid = 0;
                        cout << "Error: Invalid character detected.\n";
                        break;
                    }
                    char_counts[r]++;
                }
            }
        }
    }
}










//Code for string input using cin.getline , will input upto 100 characters :
//Use cin.getline code when user will have to exit using enter key only :
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise

//Here a separate array is used for counting each row of the array , you may modify this function as you please , by keeping this separate array here in the function or using a variable in the main for this purpose

//E.g :
//int rows = 3;
//int* counts = new int[rows];
//char** names = getline_dynamic_2Darray(rows, counts , "names" , 50); //Here in this function , space for null is managed

/*
int isValidChar(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ';
}
*/
//Below code requires the above isValidChar Function code as well
char** getline_dynamic_2Darray(int rows, int* char_counts, char c[], int MAX_SIZE)
{
    char** arr = new char*[rows];

    for (int r = 0; r < rows; r++)
    {
        arr[r] = new char[MAX_SIZE + 1];
        int valid = 0;

        while (!valid)
        {
            cout << "\nEnter "<<c<<" #" << r+1 << ":\n";
            cin.getline(arr[r], MAX_SIZE + 1);

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input too long! Max "<<MAX_SIZE<<" chars.\n";
            }
            else
            {
                char_counts[r] = 0;
                valid = 1;

                while (arr[r][char_counts[r]] != '\0')
                {
                    if (!isValidChar(arr[r][char_counts[r]]))
                    {
                        valid = 0;
                        cout << "Error: Invalid character detected.\n";
                        break;
                    }
                    char_counts[r]++;
                }
            }
        }
    }
    return arr;
}
/*
//Use below function for deallocation
void delete2DCharArray(char** arr, int rows)
{
    for (int r = 0; r < rows; r++)
    {
        delete[] arr[r];  // Free each string
    }
    delete[] arr;         // Free row pointers
    arr = nullptr;        // Optional safety
}
*/















//Code for string input using cin.getline , will input exactly 10 characters :
//Use cin.getline code when user will have to exit using enter key only:
/*
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise
int isValidChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
    {
        return 1;
    }
    return 0;
}
*/
//Below code requires the above isValidChar Function code as well
int getline_char_array_exact(char arr[])
{
    const int EXACT_SIZE = 10;
    int valid = 0;

    while (valid == 0)
    {
        std::cout << "\nEnter a string (A-Z, a-z, spaces only, exactly 10 chars):\n";

        // Read input
        std::cin.getline(arr, EXACT_SIZE + 1);  // +1 for null terminator

        // Check for input of exact length
        int count = 0;
        while (arr[count] != '\0')
        {
            count++;
        }

        if (count == EXACT_SIZE)
        {
            // Validate each character
            valid = 1;
            for (int i = 0; i < EXACT_SIZE; i++)
            {
                if (isValidChar(arr[i]) == 0)
                {
                    valid = 0;
                    std::cout << "Error: Only A-Z, a-z, and spaces allowed!\n";
                    i = EXACT_SIZE;  // Exit loop
                }
            }
        }
        else
        {
            std::cin.clear(); //This is to ensure if the user enters more than size
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cout << "Error: Input must be exactly 10 characters long!\n";
        }
    }

    return EXACT_SIZE;  // Always returns 10 when successful
}










//Code for string input using cin.getline , will input exactly 10 characters :
//Use cin.getline code when user will have to exit using enter key only:

//E.g :
//int success;
//char* str = getline_dynamic_1Darray_exact(&success);

/*
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise
int isValidChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
    {
        return 1;
    }
    return 0;
}
*/
char* getline_dynamic_1Darray_exact(int* success)
{
    const int EXACT_SIZE = 10;
    char* arr = new char[EXACT_SIZE + 1]; // +1 for null terminator
    *success = 0;

    while (*success == 0)
    {
        cout << "\nEnter a string (A-Z, a-z, spaces only, exactly 10 chars):\n";
        cin.getline(arr, EXACT_SIZE + 1);

        // Check exact length
        int count = 0;
        while (arr[count] != '\0')
        {
            count++;
        }

        if (count == EXACT_SIZE)
        {
            // Validate characters
            *success = 1;
            for (int i = 0; i < EXACT_SIZE; i++)
            {
                if (!isValidChar(arr[i]))
                {
                    *success = 0;
                    cout << "Error: Only A-Z, a-z, and spaces allowed!\n";
                    break;
                }
            }
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Input must be exactly 10 characters long!\n";
        }
    }

    return arr;
}
//Use below function for deallocation
/*
void delete1DCharArray(char* arr) // or char arr[]
{
    delete[] arr;  // Free the allocated memory
    arr = nullptr; // Prevent dangling pointer (optional)
}
*/







//Code for string input using cin.getline , will input exactly 10 characters :
//Use cin.getline code when user will have to exit using enter key only:

//E.g :
//const int ROWS = 3;
//char arr[ROWS][11]; // 10 chars + null terminator
//int success[ROWS];
//getline_static_2Darray_exact(arr, ROWS, success);

/*
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise
int isValidChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
    {
        return 1;
    }
    return 0;
}
*/
//Below code requires the above isValidChar Function code as well
void getline_2Darray_exact(char arr[][11], int rows, int* success_flags)
{
    const int EXACT_SIZE = 10;
    for (int r = 0; r < rows; r++)
    {
        success_flags[r] = 0;

        while (success_flags[r] == 0)
        {
            cout << "\nEnter string #" << r+1 << " (A-Z, a-z, spaces only, exactly 10 chars):\n";
            cin.getline(arr[r], EXACT_SIZE + 1);

            // Check exact length
            int count = 0;
            while (arr[r][count] != '\0')
            {
                count++;
            }

            if (count == EXACT_SIZE)
            {
                // Validate characters
                success_flags[r] = 1;
                for (int i = 0; i < EXACT_SIZE; i++)
                {
                    if (!isValidChar(arr[r][i]))
                    {
                        success_flags[r] = 0;
                        cout << "Error: Invalid character detected!\n";
                        break;
                    }
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error: Input must be exactly "<<EXACT_SIZE<<" characters long!\n";
            }
        }
    }
}






//Code for string input using cin.getline , will input exactly 10 characters :
//Use cin.getline code when user will have to exit using enter key only:

//E.g :
//int rows = 3;
//int* success = new int[rows];
//char** arr = getline_dynamic_2Darray_exact(rows, success , "hello" , 10);

/*
// Returns 1 if valid character (A-Z, a-z, space), 0 otherwise
int isValidChar(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
    {
        return 1;
    }
    return 0;
}
*/
//Below code requires the above isValidChar Function code as well
char** getline_dynamic_2Darray_exact(int rows, int* success_flags, char c[], int EXACT_SIZE )
{
    char** arr = new char*[rows];

    for (int r = 0; r < rows; r++)
    {
        arr[r] = new char[EXACT_SIZE + 1]; // 10 chars + null terminator
        success_flags[r] = 0;

        while (success_flags[r] == 0)
        {
            cout << "\nEnter "<<c<< " #" << r+1 << " (A-Z, a-z, spaces only, exactly "<<EXACT_SIZE<<" chars):\n";
            cin.getline(arr[r], EXACT_SIZE + 1);

            // Check exact length
            int count = 0;
            while (arr[r][count] != '\0')
            {
                count++;
            }

            if (count == EXACT_SIZE)
            {
                // Validate characters
                success_flags[r] = 1;
                for (int i = 0; i < EXACT_SIZE; i++)
                {
                    if (!isValidChar(arr[r][i]))
                    {
                        success_flags[r] = 0;
                        cout << "Error: Invalid character detected!\n";
                        break;
                    }
                }
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error: Input must be exactly  "<<EXACT_SIZE<<" characters long!\n";
            }
        }
    }
    return arr;
}

/*
//Use below function for deallocation
void delete2DCharArray(char** arr, int rows)
{
    for (int r = 0; r < rows; r++)
    {
        delete[] arr[r];  // Free each string
    }
    delete[] arr;         // Free row pointers
    arr = nullptr;        // Optional safety
}
*/





/*
//For allocating a 3D array using 2D arrays :
    char*** str = new char**[num_arrays];

    char array_names[][20] = {  };  //Name for each 2D array
    for (int i = 0; i < num_arrays; i++)
    {
        // Call function to allocate the i-th 2D array
        //Input rows and columns from user
        int *count = new int[rows];
        str[i] = getline_dynamic_2Darray(rows, count , array_names[i] , columns );
        delete[] count;
    }
*/




// Returns true if valid character (A-Z, a-z, space)
//This is for validating string type variables that are exited when pressed enter key
//Use this when exit with enter key only and for input upto 100 characters
bool isValidChar_string(char c)
{
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}
// Function to get a validated string input
void string_getline(std::string& str, int MAX_SIZE)  // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    str.clear();
    bool valid = false;

    while (!valid)
    {
        std::cout << "Enter a string (A-Z, a-z, spaces only, max "<<MAX_SIZE<<" chars):\n";
        std::getline(std::cin, str);

        // Check length by counting characters until null terminator
        int count = 0;
        while (str[count] != '\0')
        {
            count = count + 1;
            if (count > MAX_SIZE)
            {
                break;
            }
        }

        // Handle length validation
        if (count > MAX_SIZE)
        {
            std::cout << "Error: Input too long! Max "<<MAX_SIZE<<" characters allowed.\n";
        }
        else
        {
            // Validate each character using manual iteration
            valid = true;
            int i = 0;
            while (str[i] != '\0')
            {
                if (!isValidChar_string(str[i]))
                {
                    valid = false;
                    std::cout << "Error: Only A-Z, a-z, and spaces allowed!\n";
                    i = MAX_SIZE; // Force exit from loop
                }
                i = i + 1;
            }
        }
    }

    // Clear input buffer if needed
    //Not much necessary below code , only if end of file is reached !
    /*
    if (std::cin.eof()) {
        std::cin.clear();
        char c;
        cout<<"End of File is reached ! "<<endl;
        while ((c = std::cin.get()) != '\n' && c != EOF) {}
    }
    */
}
















// Returns true if valid character (A-Z, a-z, space) but with exactly 100 characters
//This is for validating string type variables that are exited when pressed enter key only
/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}
*/
//Use above code function as well if you want to use below code

void string_getline_exact(std::string& str) // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    const int EXACT_SIZE = 100;
    str.clear();
    bool valid = false;

    while (!valid)
    {
        std::cout << "Enter exactly 100 characters (A-Z, a-z, spaces only):\n";

        // Get input using getline
        std::getline(std::cin, str);
        valid = true;

        // Check length by counting characters
        int length = 0;
        while (str[length] != '\0')
        {
            length++;
            if (length > EXACT_SIZE) break;
        }

        // Validate length
        if (length != EXACT_SIZE)
        {
            std::cout << "Error: Need exactly 100 characters. You entered " << length << ".\n";
            valid = false;
            continue;
        }

        // Validate characters
        for (int i = 0; i < EXACT_SIZE; i++)
        {
            if (!isValidChar_string(str[i]))
            {
                std::cout << "Error: Invalid character at position " << i << "!\n";
                valid = false;
                break;
            }
        }
    }

    // Clear input buffer if needed
    //Not much necessary below code , only if end of file is reached !
    /*
    if (std::cin.eof()) {
        std::cin.clear();
        char c;
        cout<<"End of File is reached ! "<<endl;
        while ((c = std::cin.get()) != '\n' && c != EOF) {}
    }
    */
}









// Returns true if valid character (A-Z, a-z, space) , reading up to 100 or exact 100 characters
//This is for validating string type variables that are exited when pressed enter key or any other key as you wish
//Using getche
/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}

*/
//Use above code function as well if you want to use below code
int getche_string(string& str) // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    char x;
    int count = 0;
    int a = 0;

    while(a == 0)
    {
        str.clear();
        count = 0;
        cout << endl << "Enter a string of up to 100 characters (Press enter to exit): " << endl;

        // Input loop
        for(int i = 0; i < 100; )
        {
            x = getche();

            if(x == 13)   // Enter key
            {
                i = 150; // Exit loop
            }
            else if(x == 8)   // Backspace
            {
                if(count > 0)
                {
                    cout << " \b"; // Erase character from console
                    str.pop_back(); // Remove last character from string
                    count--;
                    i--;
                }
            }
            else
            {
                if(isValidChar_string(x))
                {
                    str += x; // Add character to string
                    count++;
                    i++;
                }
                else
                {
                    cout << "\b \b"; // Erase invalid character
                }
            }
        }

        // Validate all characters (redundant check since we validate during input)
        bool allValid = true;
        int i = 0;
        while(i < count && allValid)
        {
            if(!isValidChar_string(str[i]))
            {
                allValid = false;
            }
            i++;
        }

        //Use count == 100 for exact 100 characters
        if(count <= 100 && count >= 0 && allValid)
        {
            a = 1;
            return count;
            cout<<endl;
        }
        else if(!allValid)
        {
            cout << endl << "You didn't enter valid alphabets (A-Z) or (a-z)" << endl;
        }
        else if(count > 100)
        {
            cout << endl << "You entered more than 100 characters" << endl;
        }
    }
    cout<<endl;

    // Clear input buffer if needed
    //Not much necessary below code , only if end of file is reached !
    /*
    if (std::cin.eof()) {
        std::cin.clear();
        char c;
        cout<<"End of File is reached ! "<<endl;
        while ((c = std::cin.get()) != '\n' && c != EOF) {}
    }
    */


    return count;
}












//1D String = 2D Character Array
//Using string 1d array input validation of upto or exact 100 characters using getline(cin , name)
//Press enter for next input of string
/*
bool isValidChar_string(char c)
{
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}
*/

// Function to validate a single string
bool validateString(const std::string& s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (!isValidChar_string(s[i]))
        {
            return false;
        }
        i = i + 1;
    }
    return true;
}
//Use above two functions for using below function

// Function to get 100 validated strings
void string_array_getline(std::string str[]) // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    const int MAX_SIZE = 100;
    int current_string = 0;

    while (current_string < 100)
    {
        std::cout << "Enter string #" << current_string + 1 << " (A-Z, a-z, spaces only, max 100 chars):\n";
        std::getline(std::cin, str[current_string]);

        // Check length
        int count = 0;
        while (str[current_string][count] != '\0' && count <= MAX_SIZE)
        {
            count = count + 1;
        }

        //Use count == MAX_SIZE for exact 100 characters

        if (count > MAX_SIZE)
        {
            std::cout << "Error: String too long! Max 100 chars allowed.\n";
        }
        else if (!validateString(str[current_string]))
        {
            std::cout << "Error: Only A-Z, a-z, and spaces allowed!\n";
        }
        else
        {
            current_string = current_string + 1;
        }

        // Clear input buffer if needed
        //Not much necessary below code , only if end of file is reached !
        /*
        if (std::cin.eof()) {
            std::cin.clear();
            char c;
            cout<<"End of File is reached ! "<<endl;
            while ((c = std::cin.get()) != '\n' && c != EOF) {}
        }
        */
    }
}






//1D String = 2D Character Array
//Using string 1d array input validation of upto or exact 100 characters using getline(cin , name)
//Press enter for next input of string

// Function to get 100 validated dynamic strings

//E.g : std::string* dynamicStrings = string_1Darray_getline_dynamic();

/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}


bool validateString(const std::string& s) {
    int i = 0;
    while (i < s.length()) {  // Changed from '\0' check to .length()
        if (!isValidChar_string(s[i])) {
            return false;
        }
        i = i + 1;
    }
    return true;
}
*/
//Use above two functions for using below function
// Function to get 100 validated dynamic strings
std::string* string_1Darray_getline_dynamic() // You may give 2 parameters of ARRAY_SZIE and MAX_SIZE input by user to have your own characters of rows and columns of string
{
    const int ARRAY_SIZE = 100;
    const int MAX_STRING_SIZE = 100;
    std::string* strArray = new std::string[ARRAY_SIZE];
    int current_string = 0;

    while (current_string < ARRAY_SIZE)
    {
        std::cout << "Enter string #" << current_string + 1
                  << " (A-Z, a-z, spaces only, max " << MAX_STRING_SIZE << " chars):\n";
        std::getline(std::cin, strArray[current_string]);

        // Check length
        if (strArray[current_string].length() > MAX_STRING_SIZE)
        {
            std::cout << "Error: String too long! Max " << MAX_STRING_SIZE << " chars allowed.\n";
        }
        else if (!validateString(strArray[current_string]))
        {
            std::cout << "Error: Only A-Z, a-z, and spaces allowed!\n";
        }
        else
        {
            current_string++;
        }

        // Optional EOF handling (same as your original)
        if (std::cin.eof())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return strArray;
}

// Function to delete string array
void deleteStringArray(std::string* arr)
{
    delete[] arr;
    arr = nullptr;
}









//1D string = 2D character array
//Using string 1d array input validation of upto or exact 100 characters using getche
//Press enter or make any other key as you please
//This inputs 100 strings of max 100 characters
/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}
*/

void string_array_getche(string str[]) // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    for(int i = 0; i < 100; i++)
    {
        string s;
        char ch;
        int count = 0;

        cout << "\nString " << (i+1) << "/100 (A-Z, a-z, spaces, max 100 chars):\n";


        while(count < 100)
        {
            ch = getche();

            if(ch == 13)
            {
                break; // Enter pressed
            }
            if(ch == 8)   // Backspace
            {
                if(count > 0)
                {
                    cout << " \b";
                    s.pop_back();
                    count--;
                }
                continue;
            }

            if(isValidChar_string(ch))
            {
                s += ch;
                count++;
            }
            else
            {
                cout << "\b \b"; // Erase invalid char
            }
        }


        // Verify exact length if needed
        /*
        if(s.length() != 100)
        {
            cout << "\nError: Need exactly 100 characters! Try again.\n";
            i--; // Repeat this string
            continue;
        }
        */

        str[i] = s; // Store completed string


        // Clear input buffer if needed
        //Not much necessary below code , only if end of file is reached !
        /*
        if (std::cin.eof()) {
            std::cin.clear();
            char c;
            cout<<"End of File is reached ! "<<endl;
            while ((c = std::cin.get()) != '\n' && c != EOF) {}
        }
        */
    }
}











//1D string  = 2D character array
//Using string 1d array input validation of upto or exact 100 characters using getche
//Press enter or make any other key as you please
//This inputs 100 strings of max 100 characters

//E.g :
//const int ARRAY_SIZE = 100;
// 1. Allocate and fill in one step
//std::string* strArray = string_1Darray_getche_dynamic(ARRAY_SIZE);

// Character validation function
/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           c == ' ';
}
*/
//Use above function for using below function
// Function to get 100 validated dynamic strings

// Combined allocation and input function
std::string* string_1Darray_getche_dynamic(int array_size, int max_str_size ) // You may give 2 parameters of array_size and max_str_size input by user to have your own characters in a string
{
    std::string* arr = new std::string[array_size];

    for(int i = 0; i < array_size; i++)
    {
        std::string s;
        char ch;
        int count = 0;

        std::cout << "\nString " << (i+1) << "/" << array_size
                  << " (A-Z, a-z, spaces, max " << max_str_size << " chars):\n";

        while(count < max_str_size)
        {
            ch = _getche(); // Use platform-specific getche()

            if(ch == 13)   // Enter pressed
            {
                break;
            }
            if(ch == 8)    // Backspace
            {
                if(count > 0)
                {
                    std::cout << " \b";
                    s.pop_back();
                    count--;
                }
                continue;
            }

            if(isValidChar_string(ch))
            {
                s += ch;
                count++;
            }
            else
            {
                std::cout << "\b \b"; // Erase invalid char
            }
        }

        /* Uncomment for exact length requirement
        if(s.length() != max_str_size) {
            std::cout << "\nError: Need exactly " << max_str_size << " characters! Try again.\n";
            i--;
            continue;
        }
        */

        arr[i] = s;

        // Handle EOF if needed
        if (std::cin.eof())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return arr;
}

// Cleanup function
// Function to delete string array
/*
void deleteStringArray(std::string* arr) {
    delete[] arr;
}
*/






// 1D vector of type string = 2D character array or 2D character vector
// This is used when we don't want to use delete and this manages the memory very good in case of 2D character arrays or 1D string . No need for this in string variables as they already don't need any new or delete allocation
// Returns true if valid character (A-Z, a-z, space), false otherwise

//E.g :
//int rows = 3;
//std::vector<std::string> strings = string_getline_vector_memorymanagement(rows);

/*
bool isValidChar_string(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ';
}
*/

// Reads 'rows' strings of EXACT_SIZE=10 (validates length and characters)
std::vector<std::string> string_getline_vector_memorymanagement(int rows) // You may give another parameter of MAX_SIZE input by user to have your own characters in a string
{
    const int MAX_SIZE = 10;
    std::vector<std::string> strings(rows); // Automatically manages memory

    for (int r = 0; r < rows; r++)
    {
        while (true)
        {
            std::cout << "\nEnter string #" << r + 1
                      << " (A-Z, a-z, spaces only, at most  10 chars):\n";
            std::string input;
            std::getline(std::cin, input);

            // Check length
            if (input.length() > MAX_SIZE)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error: Input must be at most 10 characters long!\n";
                continue;
            }

            // Check characters
            bool valid = true;
            for (char c : input)
            {
                if (!isValidChar_string(c))
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                strings[r] = input; // Stores the valid string
                break;
            }
            else
            {
                std::cout << "Error: Invalid character detected!\n";
            }
        }
    }
    return strings; // No manual cleanup needed!
}



//getline() will also stop putting input if we specify its 3rd argument
//std::getline(std::cin, string, '!');







//Multiple Delimiters Adding using sstream , stringstream which works by reading words or tokens that are separated by any form of whitespace (' ' , '\t' , '\n)
//For input like : apples , bananas , oranges or one two three etc
//Also used when asked to take input in a whole line with space separated and array size not known (Usually in "CP" competitive programming)
//The Main reason in using these in "CP" is that array size is unknown otherwise for fixed size or fixed number of variables we can also input like cin>>a>>b>>c of same data type

//It also can be used to add many arguments or inputs as many as user wants to as we haven't specified any limit , it can be used as variadic functions.
//Like variadic functions , they can be used to have many arguments in a vector but of one data type
//How to use in main :
/*
std::string input;
    const int MAX_SIZE = 100;
    std::vector<std::string> items;

    do {
        std::cout << "Enter a list of items (max " << MAX_SIZE << " chars):\n> ";
        std::getline(std::cin, input);

        if (input.length() > MAX_SIZE) {
            std::cout << "Error: Input exceeds the " << MAX_SIZE << " character limit.\n";
            items.clear(); // Ensure items vector is empty to continue loop
            continue;
        }

        items = parse_and_validate_string(input);

        if (items.empty() && !input.empty()) {
            std::cout << "Error: Input could not be processed due to invalid characters. Try again.\n";
        }

    } while (items.empty() && !input.empty());

    std::cout << "\nItems found:\n";
    for (const auto& found_item : items) {
        std::cout << "- " << found_item << std::endl;
    }
*/


// Custom validation function to check if a character is valid
bool isValidCharacter(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    if (c == ' ' || c == ',' || c == ';' || c == '|')
    {
        return true;
    }
    return false;
}
// Below function requires above function
std::vector<std::string> parse_and_validate_string(const std::string& input_line)
{
    // Validate the entire string
    for (char c : input_line)
    {
        if (!isValidCharacter(c))
        {
            // Return an empty vector to signal failure
            return {};
        }
    }

    // Create a working copy of the string to modify
    std::string working_string = input_line;

    // Replace all delimiters with a single space
    for (char& c : working_string)   // & is used as c will make changes in the original string that's why
    {
        if (c == ',' || c == ';' || c == '|')
        {
            c = ' ';
        }
    }

    // Use stringstream to extract items
    std::stringstream ss(working_string); // here we use a copy of our original string
    std::string item;    // This one will hold each word of list
    std::vector<std::string> items_list;     //This one will hold the final list that will be displayed

    while (ss >> item)  // >> operator can easily extract one word and skips the whitespace, and stores in item then we use push_back to push it in vector
    {
        items_list.push_back(item);
    }

    return items_list;
}










//Now we make splitter function that is used to take input of numbers like in this form : 1 2 3 4 or 1,2,3,4 etc
//Also used when asked to take input in a whole line with space separated

// Custom validation function for numbers and delimiters
//How to use in main :

/*
std::string input;
    const int MAX_SIZE = 100;
    std::vector<int> numbers;

    do
    {
        std::cout << "Enter a list of numbers (max " << MAX_SIZE << " chars):\n";
        std::cout << "Example: 10,20;30|40 50\n> ";
        std::getline(std::cin, input);

        if (input.length() > MAX_SIZE)
        {
            std::cout << "Error: Input exceeds the " << MAX_SIZE << " character limit.\n";
            numbers.clear();
            continue;
        }

        numbers = parse_and_validate_numbers(input);

        if (numbers.empty() && !input.empty())
        {
            std::cout << "Error: Input could not be processed. Try again.\n";
        }

    }
    while (numbers.empty() && !input.empty());

    std::cout << "\nNumbers found:\n";
    for (int found_number : numbers)
    {
        std::cout << "- " << found_number << std::endl;
    }

*/


bool isValidNumberChar(char c)
{
    // Check for digits
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    // Check for allowed delimiters
    if (c == ' ' || c == ',' || c == ';' || c == '|')
    {
        return true;
    }
    return false;
}
//Below function requires above function as well :
std::vector<int> parse_and_validate_numbers(const std::string& input_line)
{
    // Validate the entire string
    for (char c : input_line)
    {
        if (!isValidNumberChar(c))
        {
            std::cout << "Error: Invalid character '" << c << "' detected.\n";
            return {}; // Return an empty vector to signal failure
        }
    }

    // Create a working copy of the string to modify
    std::string working_string = input_line;

    // Replace all non-space delimiters with a single space
    for (char& c : working_string)
    {
        if (c == ',' || c == ';' || c == '|')
        {
            c = ' ';
        }
    }

    // Use stringstream to extract numbers
    std::stringstream ss(working_string);
    int number;   // Now this will allow string char to be converted into numbers int form and the magic happens as >> operator knows the data type
    std::vector<int> numbers_list;

    // The stream extraction operator '>>' automatically converts the string representation to an int
    while (ss >> number)
    {
        numbers_list.push_back(number);
    }

    // Check if any parsing failed (e.g., "12 3a 4")
    if (!ss.eof() && !ss.good())
    {
        std::cout << "Error: Invalid number format detected.\n";
        return {};
    }

    return numbers_list;
}
//The Above two functions allow multiple delimiters but don't stop reading input at them, instead they just bring the output to a newline
//The Best way to add delimiters multiple ones is below :


// Custom validation function to check for valid characters and delimiters
/*
bool isValidChar_string(char c)
{
    // Delimiters
    if (c == ',' || c == ';' || c == '|')
    {
        return false; // Delimiters are not valid characters for the string content
    }
    // Valid characters
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           (c == ' ');
}
*/
//Use above function for using below function
// Function to get a validated string input with a character limit and delimiter check
void string_getline_multiple_delimiters(std::string& str, int MAX_SIZE)
{
    str.clear();
    std::cout << "Enter a string (A-Z, a-z, spaces only, max "<<MAX_SIZE<<" chars):\n";

    char c;
    int count = 0;
    while (count < MAX_SIZE && std::cin.get(c))
    {
        // Check for newline (end of line input)
        if (c == '\n')
        {
            break;
        }

        // Check for delimiters and stop
        if (c == ',' || c == ';' || c == '|')
        {
            std::cin.putback(c); // Put the delimiter back for future use
            break;
        }

        // Validate other characters
        if (isValidChar_string(c))
        {
            str += c;
            count++;
        }
        else
        {
            std::cout << "Error: Invalid character '" << c << "' entered. Only A-Z, a-z, and spaces allowed.\n";
            str.clear(); // Clear the string to force re-entry
            // Flush the input buffer to discard rest of the invalid line
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }

    // If the loop finished due to a full buffer, discard the rest of the line
    if (count >= MAX_SIZE && std::cin.peek() != '\n')
    {
        std::cout << "Error: Input too long! Max "<<MAX_SIZE<<" characters allowed.\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        str.clear(); // Clear the string to signal an invalid input
    }

    // This loop handles the case where the user entered an invalid line and needs to re-enter
    if (str.empty() && std::cin.good())
    {
        string_getline_multiple_delimiters(str, MAX_SIZE); // Recursively call to get a new line
    }
}



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

//These are for static (stack-based) variable validations but you may use them for dynamic allocation variables validations as well
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



//ARRAYS either : character nD , static + dynamic :
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




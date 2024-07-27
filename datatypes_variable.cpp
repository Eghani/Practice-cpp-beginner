// Basic Problems

// Simple Variable Declaration and Output
// Problem: Write a C++ program to declare an int variable named age, initialize it with your age, and print it.

#include<iostream>
using namespace std;
int main ()
{
    int age = 19; // initialize with my age 
    cout<<"my age is "<<age;
  return 0;
}

// String and Character Output
// Problem: Write a C++ program that declares a char variable named initial and a string variable named name.
//  Initialize initial with the first letter of your name and name with your full name. Print both variables.

#include<iostream>
#include<string> // include strings header file 
using namespace std;
int main ()
{
    char initial = 'k'; // single letter stored in char variable
    string name = "kabir"; // word stored in strings 
    cout<<"My initial is:- "<<initial<<endl;
    cout<<"My name is:- "<<name<<endl;
  return 0;
}

// Basic Arithmetic with Floats
// Problem: Write a C++ program to declare two float variables, num1 and num2, initialize them with values, 
// and compute their sum, difference, product, and quotient. Print the results.

#include<iostream>
using namespace std;
int main ()
{
    float num1 = 90 ;
    float num2 = 5 ;
    cout<<endl;
    cout<<endl; // line breack for clarity
    // sum
    cout<<"sum of the numbers " <<num1<<" and "<<num2<<" is:- "<<num1+num2<<endl;
    // diffrence
    cout<<"Diffrence between the numbers " <<num1<<" and "<<num2<<" is:- "<<num1-num2<<endl;
    //product 
    cout<<"product of the numbers " <<num1<<" and "<<num2<<" is:- "<<num1*num2<<endl;
    // quotiant 
    cout<<"Quotiant of the numbers " <<num1<<" and "<<num2<<" is:- "<<num1/num2<<endl;
    cout<<endl;
    cout<<endl; // line break for clarity 
  return 0;
}

// Intermediate Problems


// Type Casting
// type casting is nothing but change the type of data for ex     int to float   or double to int 
// Problem: Write a C++ program that takes a double variable, assigns it a value, and then casts it to int.
// Print both the original double value and the casted int value.

#include<iostream>
using namespace std;
int main ()
{
    double integer = 50.6; //have to take decimal to show what type casting is 
    int changed_integer = static_cast<int>(integer);
    cout<<"before type casting :- "<<integer<<endl;
    cout<<"after type casting :- "<<changed_integer<<endl;
  return 0;
}


// Data Type Sizes
// Problem: Write a C++ program that uses the sizeof operator to display the sizes (in bytes) of int, long, short, and float.
//  Print the sizes in a user-friendly format.

#include<iostream>
using namespace std;
int main ()
{
     // default sizes
    int a;
    float b;
    long c;
    short d;
    double e;
    cout<<"Size of "<<"int a"<<" is :-  "<<sizeof(a)<<endl;
    cout<<"Size of "<<"float b"<<" is :-  "<<sizeof(b)<<endl;
    cout<<"Size of "<<"long c"<<" is :-  "<<sizeof(c)<<endl;
    cout<<"Size of "<<"short d"<<" is :-  "<<sizeof(d)<<endl;
    cout<<"Size of "<<"double e"<<" is :-  "<<sizeof(e)<<endl;
  return 0;
}

// Variable Scope
// Problem: Write a C++ program that demonstrates the scope of local and global variables.
// Define a global variable and a local variable with the same name, then print both within a function to show the difference.

// try it by yourself 



// Advanced Problems


// Constants and Literals
// Problem: Write a C++ program that defines several constants using the const keyword for the gravitational constant (9.81), 
// the speed of light (299792458), and Planck's constant (6.62607015e-34). Use these constants in calculations and display the results.

// Array of Different Data Types
// Problem: Write a C++ program that creates an array of int, float, and double types. 
// Initialize the arrays with some values and print all elements of each array.

// Enum and Switch Statement
// Problem: Write a C++ program that defines an enum type for different types of weather (Sunny, Rainy, Cloudy).
//  Use a switch statement to print a message based on the value of a weather variable.

// Type Aliases and Complex Expressions
// Problem: Write a C++ program that uses typedef or using to create type aliases for unsigned long long, double, and float.
//  Use these aliases to declare variables and perform complex expressions involving arithmetic operations, then print the results.


// These problems will help you deepen your understanding of C++ data types and variables while progressively challenging your skills.
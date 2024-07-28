// Beginner:

// Basic Arithmetic Operations:
// Write a program that performs addition, subtraction, multiplication, and division on two integers. 
// Print the results of each operation.

#include<iostream>
using namespace std;
int main ()
{
    int a = 6;
    int b = 2;

    cout<<"addition:- "<<a+b<<endl;
    cout<<"subtraction:- "<<a-b<<endl;
    cout<<"multiplication:- "<<a*b<<endl;
    cout<<"division:- "<<a/b<<endl;
  return 0;
}


// Relational and Logical Operators:
// Write a program that uses relational operators to compare two integers and logical operators 
// to check if both integers are positive. Print the results.

#include <iostream>
using namespace std;

int main() {
    int a = 14, b = 5;
    cout << "Is a > b? " << (a > b) << endl;
    cout << "Are both a and b positive? " << (a > 0 && b > 0) << endl;
    return 0;
}

// NOTE OUTPUT WILL BE IN 1 OR 0 1:- TRUE  0:- FALSE ASSUME

// Intermediate:

// Compound Assignment and Increment Operators:
// Write a program that uses compound assignment operators (+=, -=, *=, /=) and increment operators (++, --) on an integer. 
// Print the results after each operation.


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    x += 5;  // x = x + 5
    cout << "After +=: " << x << endl;
    x -= 3;  // x = x - 3
    cout << "After -=: " << x << endl;
    x *= 2;  // x = x * 2
    cout << "After *=: " << x << endl;
    x /= 4;  // x = x / 4
    cout << "After /=: " << x << endl;
    x++;     // x = x + 1
    cout << "After ++: " << x << endl;
    x--;     // x = x - 1
    cout << "After --: " << x << endl;
    return 0;
}


// Conditional (Ternary) Operator:
// Write a program that uses the conditional (ternary) operator to determine the larger of two integers. Print the larger integer.


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 15;
    int max = (a > b) ? a : b;  // max will be assigned the larger value between a and b
    cout << "The larger value is: " << max << endl;  // Output will be: The larger value is: 15  (B IS GREATER THAN A)
    return 0;
}


// Advanced:

// Bitwise Operators:
// Write a program that demonstrates the use of bitwise operators (&, |, ^, ~, <<, >>). 
// Perform operations on two integers and print the results of each bitwise operation.


// easy to understand practice theory 






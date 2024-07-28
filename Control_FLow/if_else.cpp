// 1 - Write a program that takes an integer input from the user 
//      and checks whether the number is positive, negative, or zero. Print the result.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "ENter the number " << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "a is possitive" << endl;
    }
    else if (a < 0)
    {
        cout << "a is Negative" << endl;
    }
    else if (a == 0)
    {
        cout << "a is zero" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}


// Write a program that takes an integer input from the user and checks whether the number is odd or even. Print the result.


#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "ENter the number " << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is even" << endl;
    }
    else
    {
        cout << a << " is odd";
    }

    return 0;
}

// Write a program that takes a student's score as input and prints "Pass" if the score is 40 or more, and "Fail" otherwise.

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "ENter your marks " << endl;
    cin >> marks;

    if (marks >= 40)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}

// Write a program that takes two integers as input and prints the larger of the two.

#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout << "enter the num1" << endl;
    cin >> num1;
    cout << "enter the num2" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Num1 is greater than num2" << endl;
    }
    else if (num2 > num1)
    {
        cout << "Num2 is greater than num1" << endl;
    }
    else
    {
        cout << "Equal";
    }

    return 0;
}

// Write a program that takes a character input from the user and checks whether it is a vowel or a consonant. (Consider both uppercase and lowercase letters.)


// Write a program that takes a year as input and checks whether it is a leap year. A year is a leap year if it is divisible by 4 but not by 100, except if it is also divisible by 400.


// Write a program that takes an age as input and classifies the person into one of the following categories:
// Child (0-12 years)
// Teenager (13-19 years)
// Adult (20-59 years)
// Senior (60+ years)



// Write a program that takes two integers and a character (+, -, *, /) as input and performs the corresponding arithmetic operation. Print the result. (Handle division by zero appropriately.)


// Write a program that takes a student's score as input and assigns a grade based on the following criteria:
// A (90-100)
// B (80-89)
// C (70-79)
// D (60-69)
// F (below 60)


// Write a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.
// Equilateral: All three sides are equal.
// Isosceles: Two sides are equal.
// Scalene: All sides are different.
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

#include <iostream>
using namespace std;
int main()
{
    char alp;
    cout << "please enter the alphabet " << endl;
    cin >> alp;

    if ((alp == 'a') || (alp == 'e') || (alp == 'i') || (alp == 'o') || (alp == 'u') || (alp == 'A') || (alp == 'E') || (alp == 'I') || (alp == 'O') || (alp == 'U'))
    {
        cout << "VOWEL" << endl;
    }
    else
    {
        cout << "CONSUNENT" << endl;
    }

    return 0;
}

// Write a program that takes a year as input and checks whether it is a leap year. A year is a leap year if it is divisible by 4 but not by 100, except if it is also divisible by 400.

#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout << "enter the year " << endl;
    cin >> yr;

    if ((yr % 4 == 0) && (yr % 100 != 0) || (yr % 400 == 0))
    {
        cout << "the year is leap year " << endl;
    }
    else
    {
        cout << "the year is non leap year " << endl;
    }
    return 0;
}

// Write a program that takes an age as input and classifies the person into one of the following categories:
// Child (0-12 years)
// Teenager (13-19 years)
// Adult (20-59 years)
// Senior (60+ years)


#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age please :- " << endl;
    cin >> age;

    if (age > 0 && age <= 12) {
        cout << "Child" << endl;
    } 
    else if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl;
    } 
    else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;
    } 
    else if (age >= 60) {
        cout << "Senior" << endl;
    } 
    else {
        cout << "Invalid age" << endl;
    }

    return 0;
}




// Write a program that takes two integers and a character (+, -, *, /) as input and performs the corresponding arithmetic operation. Print the result. (Handle division by zero appropriately.)

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char operation;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an arithmetic operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 <<endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." <<endl;
            break;
    }

    return 0;
}


// Write a program that takes a student's score as input and assigns a grade based on the following criteria:
// A (90-100)
// B (80-89)
// C (70-79)
// D (60-69)
// F (below 60)



#include <iostream>

using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    } else if (score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}



// Write a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.

// here are some details
// Equilateral: All three sides are equal.
// Isosceles: Two sides are equal.
// Scalene: All sides are different.


#include <iostream>

using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}

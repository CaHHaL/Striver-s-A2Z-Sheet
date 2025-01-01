// code 360
//  Problem statement
//  The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

//     F(n) = F(n - 1) + F(n - 2),
//     Where, F(1) = 1, F(2) = 1

// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

// "Indexing is start from 1"

// Example :
// Input: 6

// Output: 8

// Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
// So by using the given formula of the Fibonacci series, we get the series:
// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 6

// Sample Output 1:
// 8

// Explanation of sample input 1 :
// The number is ‘6’ so we have to find the “6th” Fibonacci number.
// So by using the given formula of the Fibonacci series, we get the series:
// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.

// Expected time complexity :
// The expected time complexity is O(n).

// Constraints:
// 1 <= 'n' <= 10000
// Where ‘n’ represents the number for which we have to find its equivalent Fibonacci number.

// Time Limit: 1 second

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    int f1 = 1;
    int f2 = 1;
    int sum = 0;
    if (n == 1)
    {
        cout << f1;
    }
    else if (n == 2)
    {
        cout << f2;
    }
    else
    {
        for (int i = 0; i <= n - 3; i++)
        {
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
        }
        cout << sum;
    }
}

// GFG
// IN JAVA
// While loop is another loop like for loop but unlike for loop it only checks for one condition.
// Here, we will use a while loop and print a number n's table in reverse order.

// Examples:

// Input: n = 1
// Output: 10 9 8 7 6 5 4 3 2 1
// Input: n = 2
// Output: 20 18 16 14 12 10 8 6 4 2

// import java.util.Scanner;

// public class Solution {
//     public static void main(String[] args) {
//         // Scanner to take user input
//         Scanner scanner = new Scanner(System.in);

//         // Input number n
//         System.out.print("Enter a number: ");
//         int n = scanner.nextInt();

//         // Starting point of the table
//         int i = 10;

//         // While loop to print the multiplication table in reverse
//         while (i >= 1) {
//             // Print the current value of the multiplication table
//             System.out.print(n * i + " ");
//             i--; // Decrement to move to the next value in reverse order
//         }

//         // Close scanner
//         scanner.close();
//     }
// }

// Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
// If the user's choice is 1, calculate the area of the circle having the given radius(R).
// Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

// Note : A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

// Examples :

// Input: choice = 1, R = 5
// Output: 78.53981633974483
// Explaination: The choice is 1. So we have to calculate the area of the circle.
// Input: choice = 2, L = 5, B = 10
// Output: 50
// Explaination: Here we have to calculate the area of the rectangle.

#include <iostream>
#include <cmath> // For M_PI
#include <vector>
using namespace std;

class Solution
{
public:
    double calculateArea(int choice, vector<double> arr)
    {
        if (choice == 1)
        {
            // Calculate the area of the circle: π * R^2
            double R = arr[0]; // Radius
            return M_PI * R * R;
        }
        else if (choice == 2)
        {
            // Calculate the area of the rectangle: L * B
            double L = arr[0]; // Length
            double B = arr[1]; // Breadth
            return L * B;
        }
        return 0; // Return 0 for invalid choice, just in case
    }
};

int main()
{
    Solution solution;

    int choice;
    cout << "Enter your choice (1 for Circle, 2 for Rectangle): ";
    cin >> choice;

    vector<double> arr;

    if (choice == 1)
    {
        double R;
        cout << "Enter the radius of the circle: ";
        cin >> R;
        arr.push_back(R); // Store radius in the vector
    }
    else if (choice == 2)
    {
        double L, B;
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> L >> B;
        arr.push_back(L); // Store length in the vector
        arr.push_back(B); // Store breadth in the vector
    }

    double area = solution.calculateArea(choice, arr);
    cout << "The area is: " << area << endl;

    return 0;
}

// Geek is learning about functions and calling a function with arguments. He learns that passing can take one of two forms: pass by value or pass by reference.

// Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.

// Example 1:

// Input:
// a = 1
// b = 2
// Output:
// 2 4
// Explanation: 1 was passed by value whereas 2 passed by reference.
// Example 2:

// Input:
// a = 10
// b = 20
// Output: 11 22
// Explanation: 10 was passed by value whereas 20 passed by reference.

// Constraints:
// 1 <= a,b <= 105

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function passedBy() which takes a and b as input parameters and returns array of two required integers.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> passedBy(int a, int &b)
    {
        // Add 1 to a (passed by value)
        a += 1;

        // Add 2 to b (passed by reference)
        b += 2;

        // Return the result as a vector
        return {a, b};
    }
};

int main()
{
    Solution solution;

    int a = 10;
    int b = 20;

    // Calling the function passedBy with a and b
    vector<int> result = solution.passedBy(a, b);

    // Output the result
    cout << result[0] << " " << result[1] << endl;

    return 0;
}

// Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
// Given a data type, help Geek in finding the size of it in byte.

// Data Type - Character, Integer, Long, Float and Double

// Example 1:

// Input: Character
// Output: 1
// Explaination: For java it would be 2 bytes.
// Example 2:

// Input: Integer
// Output: 4

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int dataTypeSize(string str)
    {
        // Check the input string and return the corresponding size in bytes
        if (str == "Character")
        {
            return sizeof(char); // Typically 1 byte in C++
        }
        else if (str == "Integer")
        {
            return sizeof(int); // Typically 4 bytes in C++
        }
        else if (str == "Long")
        {
            return sizeof(long); // Typically 8 bytes in C++
        }
        else if (str == "Float")
        {
            return sizeof(float); // Typically 4 bytes in C++
        }
        else if (str == "Double")
        {
            return sizeof(double); // Typically 8 bytes in C++
        }
        else
        {
            return -1; // Invalid data type string
        }
    }
};

int main()
{
    Solution solution;
    string dataType;

    // Test cases
    cout << "Enter data type: ";
    cin >> dataType;

    int size = solution.dataTypeSize(dataType);

    if (size != -1)
    {
        cout << "Size of " << dataType << ": " << size << " bytes" << endl;
    }
    else
    {
        cout << "Invalid data type!" << endl;
    }

    return 0;
}

// Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.

// Examples :

// Input: n = 4, m = 8
// Output: lesser
// Explanation: 4 < 8 so print 'lesser'.
// Input: n = 8, m = 8
// Output: equal
// Explanation: 8 = 8 so print 'equal'.
// Input: n = 8, m = 4
// Output: greater
// Explanation: 8 > 4 so print 'greater'.

#include <iostream>
using namespace std;

class Solution
{
public:
    void checkRelation(int n, int m)
    {
        if (n < m)
        {
            cout << "lesser" << endl;
        }
        else if (n == m)
        {
            cout << "equal" << endl;
        }
        else
        {
            cout << "greater" << endl;
        }
    }
};

int main()
{
    Solution solution;

    // Test cases
    int n, m;
    cout << "Enter two integers n and m: ";
    cin >> n >> m;

    solution.checkRelation(n, m);

    return 0;
}

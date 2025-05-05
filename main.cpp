// for C++ i/o (cout, cin)
#include <iostream>
// for C i/o (printf, scanf)
#include <stdio.h>
using namespace std;

// there is a function called (sum)
int sum(int n);

// there is a function called (product)
int product(int n);

// there is a function called (subtract)
int subtract (int n);

// there is a function called (divide)
int divide(int n);

// initially the recurse is called from the main func.
int main() {

    // (sum)
    int sumNum, sumResult;
    printf("Enter a positive number (for addition): ");
    // takes in user input and stores it in sumNum (the '&' gives the address of the sumNum variable)
    scanf("%d", &sumNum);
    // recursive sum function is called
    sumResult = sum(sumNum);
    printf("sum = %d \n", sumResult);

    // (product)
    int prodNum, prodResult;
    cout << "Enter a positive number (for multiplication): ";
    cin >> prodNum;
    prodResult = product(prodNum);
    cout << "Result is: " << prodResult << endl;

    int subNum, subResult;
    cout << "Enter a positive number (for subtraction): ";
    cin >> subNum;
    subResult = subtract(subNum);
    cout << "Result is: " << subResult << endl;

    int divNum, divResult;
    cout << "Enter a positive number for division: ";
    cin >> divNum;
    divResult = divide(divNum);
    cout << "Result is: " << divResult << endl;

    return 0;
}

// recursive sum function
int sum (int n) {
    // if num is not = to 0
    if (n != 0) {
        // sum function calls itself...
        // the num + the (num - 1)...
        // ex 5 + 4 -> 9 + 3 -> 12 + 2 -> 14 + 1 -> 15 + (0)
        return n + sum(n - 1);
        // now that the initial num entered is 0 the sum is returned
    } else {
        return n;
    }
}

// recursive product function
int product(int n) {
    if (n == 1) {
        return 1;
    } else {
        // ex. 5 -> 5 * 4 = 20 -> 20 * 3 = 60 -> 60 * 2 = 120 -> 120 * (1)
        return n * product(n - 1);
    }
}

// recursive subtract function
int subtract (int n) {
    if (n == 0) {
        return 0;
    } else {
        // this is nested recursive subtraction
        /**
        *subtract(7)
            = 7 - subtract(6)
            = 7 - (6 - subtract(5))
            = 7 - (6 - (5 - subtract(4)))
            = 7 - (6 - (5 - (4 - subtract(3))))
            = 7 - (6 - (5 - (4 - (3 - subtract(2)))))
            = 7 - (6 - (5 - (4 - (3 - (2 - subtract(1))))))
            = 7 - (6 - (5 - (4 - (3 - (2 - (1 - subtract(0)))))))

            so...
            1 - 0 = 1

            2 - 1 = 1

            3 - 1 = 2

            4 - 2 = 2

            5 - 2 = 3

            6 - 3 = 3

            7 - 3 = 4
         */
        return n - subtract(n - 1);
    }
}

// recursive divide function
int divide(int n) {
    if (n %2 == 0) {
        return n / 2;
    }
    
    if (n == 1){
        return 1;
    } else {
        // because everything is an int everything is whole numbers
        // ex. 27 -> (27(odd) / 2 = 13(odd)) -> (13(odd) / 2 = 6) -> becuase 6 is even it enteres the first 'if-stmnt' (6(even) / 2 = 3) loop done
        return n / divide(n / 2);
    }
}


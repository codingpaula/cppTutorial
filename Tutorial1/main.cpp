//
//  main.cpp
//  Tutorial1
//
//  Created by Manuela Paula Ritter on 02.12.20.
//

#include <iostream>
#include <vector>
#include <array>

using std::array;
using std::cout;
using std::vector;

constexpr double square(double x) // square a double precision floating-point number
{
    return x*x;
}

void print_int_vector(vector<int> vec)
{
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i == vec.size() - 1 ? " <-- vector\n" : ", ");
    }
}

void print_square(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

void print_sizes()
{
    cout << "size of an int: " << sizeof(int) << "\n";
    cout << "size of a char: " << sizeof(char) << "\n";
    cout << "size of a double: " << sizeof(double) << "\n";
}

void print_equation(double x, double y)
{
    cout << "equation " << x << " == " << y << ": " << (x==y) << "\n";
}

void print_compare_to_two(double x)
{
    double two {2};
    print_equation(x, two);
}

bool accept()
{
    int tries = 1;
    while (tries<4) {
        cout << "Do you want to proceed (y or n)?\n";
    
    char answer = 0;
    std::cin >> answer;
    
    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Sorry, I don't understand that.\n";
            ++tries;
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
}

void print_this_array(array<int, 10> array)
{
    for (int i = 0; i < 10; ++i)
        cout << array[i] << (i == 9 ? " <-- array with 10 entries\n" : ", ");
}

int main(int argc, const char * argv[])
{
    // -- 2.2.1 Hello World --
    cout << "Hello, World!\n";
    
    // -- 2.2.2 Types, Variables, and Arithmetic
    print_square(1.234);
    print_square(5.678);
    print_sizes();
    print_equation(1.234, 1.234);
    print_equation(1.234, 5.678);
    print_compare_to_two(1.234);
    vector<int> vec {1,2,3,4,5};
    print_int_vector(vec);

    
    // -- 2.2.3 Constants
    cout << square(1.34) << "\n";

    // -- 2.2.4 Tests and Loops
    bool proceed = accept();
    cout << proceed << "\n";
    
    // -- 2.2.5 Pointers, Arrays and Loops
    array<int, 10> arr {1,2,3,4,5,6,7,8,9,10};
    print_this_array(arr);

    cout << &arr[1] << " <-- watch this reference \n";
    
    return 0;
}

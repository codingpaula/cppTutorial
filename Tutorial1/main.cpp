//
//  main.cpp
//  Tutorial1
//
//  Created by Manuela Paula Ritter on 02.12.20.
//

#include <iostream>
#include <vector>

constexpr double square(double x) // square a double precision floating-point number
{
    return x*x;
}

void print_int_vector(std::vector<int> vec)
{
    for(int n : vec) {
        std::cout << n << "\n";
    }
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

void print_sizes()
{
    std::cout << "size of an int: " << sizeof(int) << "\n";
    std::cout << "size of a char: " << sizeof(char) << "\n";
    std::cout << "size of a double: " << sizeof(double) << "\n";
}

void print_equation(double x, double y)
{
    std::cout << "equation x==y: " << (x==y) << "\n";
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
        std::cout << "Do you want to proceed (y or n)?\n";
    
    char answer = 0;
    std::cin >> answer;
    
    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "Sorry, I don't understand that.\n";
            ++tries;
        }
    }
    std::cout << "I'll take that for a no.\n";
    return false;
}

int main(int argc, const char * argv[])
{
    // -- 2.2.4 Tests and Loops
    bool proceed = accept();
    std::cout << proceed << "\n";
    
    // -- 2.2.3 Constants
    std::cout << square(1.34) << "\n";
    
    // -- 2.2.2 Types, Variables, and Arithmetic
    print_square(1.234);
    print_square(5.678);
    print_sizes();
    print_equation(1.234, 1.234);
    print_equation(1.234, 5.678);
    print_compare_to_two(1.234);
    std::vector<int> vec {1,2,3,4,5};
    print_int_vector(vec);

    // -- 2.2.1 Hello World --
    std::cout << "Hello, World!\n";
    return 0;
}

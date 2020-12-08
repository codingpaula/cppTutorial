//
//  main.cpp
//  Tutorial1
//
//  Created by Manuela Paula Ritter on 02.12.20.
//

#include <iostream>

double square(double x) // square a double precision floating-point number
{
    return x*x;
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

void print_sizes()
{
    std::cout << "size of an int: " << sizeof(int) << "\n";
    std::cout << "size of an char: " << sizeof(char) << "\n";
}

int main(int argc, const char * argv[])
{
    print_square(1.234);
    print_square(5.678);
    print_sizes();
    std::cout << "Hello, World!\n";
    return 0;
}

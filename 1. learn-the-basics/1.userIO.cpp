#include <iostream>
using namespace std;
int main(){
    //running without newline
    cout<<"Hello world";
    cout<<"Hi";
    //runing with newline
    cout<<"hello from 1"<<"\n";
    cout<<"hello from 2"<<"\n";
    //running with endl 
    cout<<"hello"<<endl<<"endl line"<<endl;

    //getting input from the user 
    int x,y;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;
    cout<<"The number entered is "<<x<<" and "<<y<<endl;

}

/*
 * Introductory Notes:
 *
 * 1. #include Directive:
 *    - The #include directive is used to include libraries that provide specific functionalities.
 *    - Examples:
 *      - <iostream>: Used for input/output operations (e.g., cin, cout).
 *      - <math.h>: Provides mathematical functions.
 *      - <bits/stdc++.h>: Includes almost all standard C++ libraries (commonly used in competitive programming).
 *
 * 2. using namespace std:
 *    - This statement allows us to use standard library functions without prefixing them with "std::".
 *    - For example, instead of writing "std::cout", we can simply write "cout".
 *
 * 3. int main():
 *    - The "main" function is the entry point of the program.
 *    - The compiler starts executing the program from this function.
 *
 * 4. cout and endl:
 *    - "cout" is used to print output to the console.
 *    - "endl" inserts a newline and flushes the output buffer.
 *    - Alternatively, "\n" can also be used for a newline, but it does not flush the buffer.
 *
 * 5. cin:
 *    - "cin" is used to take input from the user (not used in this example).
 */
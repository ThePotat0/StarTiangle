/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
     int n;

     std::cout << "Введите высоту треугольника: ";
     std::cin >> n;

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
         std::cout << "*";
        }
    std::cout << std::endl;
    }
    return 0;
}
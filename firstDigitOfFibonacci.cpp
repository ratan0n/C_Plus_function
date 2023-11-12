#include <iostream>
#include <cmath>

// Function to find the first digit of the nth Fibonacci number
int firstDigitOfFibonacci(int n) {
    // Constants for the Binet's formula
    const double sqrt5 = std::sqrt(5);
    const double phi = (1 + sqrt5) / 2;

    // Using Binet's formula to find the nth Fibonacci number
    double fibLog = n * std::log10(phi) - std::log10(sqrt5);
    fibLog -= std::floor(fibLog); // Extract the decimal part of the logarithm
    double fibNum = std::pow(10, fibLog);

    // Returning the first digit of the Fibonacci number
    return static_cast<int>(fibNum);
}

int main() {
    // Print the first digit of Fibonacci numbers for the 13th to 1000th position
    for (int n = 13; n <= 1000; ++n) {
        std::cout << "The first digit of Fibonacci number at position " << n << " is: " << firstDigitOfFibonacci(n) << std::endl;
    }
    return 0;
}

#include <iostream>
#include <string>

class Calculus {
public:
    double calculateDerivative(double x2, double x1) {
        return (f(x2) - f(x1)) / (x2 - x1);
    }

    double f(double x) {
        return x * x + 2 * x + 1;
    }

    std::string function() {
        return "x^2 + 2x + 1";
    }
};

class Main {
public:
    void run() {
        Calculus calculus;

        std::cout << "Welcome to the Derivative Calculator!" << std::endl;
        std::cout << "With the equation f(x) = "
                  << calculus.function()
                  << std::endl;
        std::cout << "Enter the a value to find the derivative of it: " << std::endl;
        
        double input;
        std::cin >> input;

        double derivative = calculus.calculateDerivative(input - 0.0001, input);
        std::cout << "The derivative of f(x) at x = " << input << " is approximately: " << derivative << std::endl;
        
                
    }
};

int main() {
    Main main;
    main.run();
    return 0;
}
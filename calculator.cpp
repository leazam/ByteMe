# include <iostream>

int main() {

    char op; 
    double num1;
    double num2; 
    double result; 

    std::cout << "************** CALCULATOR **************\n";

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op; 

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Enter only one of (+ - * /) !!!" << '\n';

    } 
    std::cout << "****************************************";



    return 0; 
}
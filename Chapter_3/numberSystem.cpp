#include <iostream>

int main()
{
    int number1 = 15;         // decimal
    int number2 = 017;        // octal
    int number3 = 0x0F;       // hex-decimal
    int number4 = 0b00001111; // binary

    std::cout << "Hello World ! " << std::endl;
    std::cout << "Number1 : " << number1 << std::endl;
    std::cout << "Number2 : " << number2 << std::endl;
    std::cout << "Number3 : " << number3 << std::endl;
    std::cout << "Number4 : " << number4 << std::endl;

    return 0;
}
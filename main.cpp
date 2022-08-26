#include <iostream>
#include <math.h>


bool isPrime (int number) {

    bool isPrimeFlag = true;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrimeFlag = false;
            break;
        }  
      }
      return isPrimeFlag;

}

int main() {

        bool isPrimeFlag;
        int number;
        std::cout << "Welcome to FunkyNumber, the only program that lets you know just how funky your number is. Please type your number: " << std::endl;
        std::cin >> number;

            while (number > 20 || number < 1 || std::cin.fail()) {

                std::cout << "Sorry, FunkyNumber currently only supports integers from 1-20" << std::endl;
                std::cin.clear();
                std::cin.ignore(256,'\n');
                std::cin >> number;
            }
        
        isPrimeFlag = isPrime(number);
            if (isPrimeFlag && number != 1) {
            std::cout << "Your number is prime, +1 Funky points!" << std::endl;
            } else {
            std::cout << "Your number is not prime." << std::endl;
            }
        

}
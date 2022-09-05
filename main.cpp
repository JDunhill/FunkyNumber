#include <iostream>
#include <math.h>

int FunkyCounter = 0, factorCounter = 0;
bool isPrimeFlag = true;

bool isPrime (int number) {

   
    
    // function for checking if prime and returning number of factors if not
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
               factorCounter++;
            isPrimeFlag = false;
            
        }  
      }
      return isPrimeFlag;
        FunkyCounter++;
}



int main() {


        // start prompt

        int number;
        std::cout << "Welcome to FunkyNumber, the only program that lets you know just how funky your number is. Please type your number: " << std::endl;
        std::cin >> number;

        // will return error if number is outside permitted range or if not an integer, returning to prompt until number is permitted
            while (number > 20 || number < 1 || std::cin.fail()) {

                std::cout << "Sorry, FunkyNumber currently only supports integers from 1-20. Please try again:" << std::endl;
                std::cin.clear();
                std::cin.ignore(256,'\n');
                std::cin >> number;
            }
        
        isPrimeFlag = isPrime(number);
            if (isPrimeFlag && number != 1) {
            std::cout << "Your number is prime, +5 Funky points!" << std::endl;
            } else {
            std::cout << "Your number is not prime. It has " << factorCounter << " factors. You get +" << factorCounter << " Funky points!" << std::endl;
            }
        

return 0;
}
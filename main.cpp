#include <iostream>
#include <math.h>

int funkyCounter = 0, factorCounter = 0;
bool isPrimeFlag = true;

bool isPrime (int number) {

   
    
    // function for checking if prime and returning number of factors if not
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
               factorCounter++;
               funkyCounter++;
            isPrimeFlag = false;
            
        }  
      }
      return isPrimeFlag;
        
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
            funkyCounter = funkyCounter + 5;
            } else {
            std::cout << "Your number is not prime. It has " << factorCounter << " factors. You get +" << factorCounter << " Funky points!" << std::endl;
            }
        
            // Random fun facts about certain numbers 

            switch (number) {
                case 3:
                    std::cout << "3 is the second most common lucky number among Western countries: +2 Funky points!" << std::endl;
                    funkyCounter = funkyCounter + 2;
                    break;
                case 4:
                    std::cout << "4 is the only number that is spelt with the same number of letters as itself: +5 Funky points!" << std::endl;
                    funkyCounter = funkyCounter + 5;
                    break;
                case 7: 
                    std::cout << "7 is the most common lucky number among Western countries: +3 Funky points!" << std::endl;
                    funkyCounter = funkyCounter + 3;
                    break;
                case 8:
                    std::cout << "8 is the third most common lucky number among Western countries: +1 Funky points!" << std::endl;
                    funkyCounter = funkyCounter + 1;
                    break;

            } 

            std::cout << "Your final score is: " << funkyCounter << std::endl;
        

return 0;
}
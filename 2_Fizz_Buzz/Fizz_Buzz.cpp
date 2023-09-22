/*Code that prints integers up to some user-input.
 If the integer is divisible by 3, print 'Fizz'. If divisible by 5, print 'Buzz'.
If divisible by both 3 and 5, print 'FizzBuzz'.
*/ 
#include <iostream>
#include <string>

int main(){
    int upperLimit;
    std::cout << "Please input your desired upper limit for the FizzBuzz program as a positive integer: " << "\n";
    std::cin >> upperLimit;

    int current = 1;
    while (current < upperLimit+1){
        std::string butWillItFizzBuzz;
        if (current%3==0){
            butWillItFizzBuzz += "Fizz";
        }
        if (current%5==0){
            butWillItFizzBuzz += "Buzz";
        }

        if (butWillItFizzBuzz.empty()){
            std::cout << current << " ";
        } else{
            std::cout << butWillItFizzBuzz << " ";
        }
        current++;
    }
    return 0;
}
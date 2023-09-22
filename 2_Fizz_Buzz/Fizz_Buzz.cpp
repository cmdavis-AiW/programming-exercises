/*Code that prints integers up to some user-input.
 If the integer is divisible by 3, print 'Fizz'. If divisible by 5, print 'Buzz'.
If divisible by both 3 and 5, print 'FizzBuzz'.
*/ 
#include <iostream>
#include <string>

class Its_Buzzing_Time{
    int upperLimit;
    public:
        Its_Buzzing_Time(int);
        void fizz_the_buzz();
};

Its_Buzzing_Time::Its_Buzzing_Time(int uppLim){
    upperLimit = uppLim;
}

void Its_Buzzing_Time::fizz_the_buzz(){
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
}

int main(){
    int upperLimit;
    std::cout << "Please input your desired upper limit for the FizzBuzz program as a positive integer: " << "\n";
    std::cin >> upperLimit;
    Its_Buzzing_Time fb(upperLimit);
    fb.fizz_the_buzz();
    
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(nullptr));

    int confidintialNumber = rand() % 50 + 1;
    
    int guess;
    int Counter = 0;
    cout << "\t\t\t\t\tWelcome..."<<endl;
    cout << "\t\t\t\t=============================\n";
     cout << "\t\t\t\t\tGessNumberGame\n";
     cout << "\t\t\t\t================================\n";
     cout << "I have selected a number between 1 and 50 . Can you guess it?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

       Counter++;

        if (guess < confidintialNumber) {
            std::cout << "Too low! Try again.\n";
        }
        else if (guess > confidintialNumber) {
            std::cout << "Too high! Try again.\n";
        }
        else {
            std::cout << "Congratulations! You guessed the number in " << Counter << " attempt!\n";
        }
    } while (guess != confidintialNumber);

    return 0;
}
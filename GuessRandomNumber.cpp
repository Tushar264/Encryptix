#include <iostream>
#include <random>
#include <ctime>
#include <limits>

using namespace std;

void guessTheNumber() {
    // generating the random number
    srand(time(0));
    int randomNum = rand();

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number." << endl;
    cout << "Try to guess it!" << endl;

    while (true) {
        int userGuess;
        cin>>userGuess;

        if (userGuess < randomNum) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNum) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNum << endl;
            break;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}

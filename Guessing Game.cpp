#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // seed the random number generator

    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int guess;
    int attempts = 0;
    bool guessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100. Try to guess it.\n";

    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            guessedCorrectly = true;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Too high. Try again.\n";
        }
    }

    cout << "\nCongratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts!\n";

    return 0;
}

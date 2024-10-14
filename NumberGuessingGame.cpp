#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int lowerBound = 1;
    int upperBound = 100;
    int numberToGuess = std::rand() % (upperBound - lowerBound + 1) + lowerBound;
    int playerGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between " << lowerBound << " and " << upperBound << "." << std::endl;

    // Loop until the player guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
        attempts++;

        if (playerGuess < lowerBound || playerGuess > upperBound) {
            std::cout << "Please guess a number between " << lowerBound << " and " << upperBound << "." << std::endl;
        } else if (playerGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (playerGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << numberToGuess << " in " << attempts << " attempts!" << std::endl;
        }
    } while (playerGuess != numberToGuess);

    return 0;
}

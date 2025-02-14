#include <iostream>
int main()
 {
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts!" << std::endl;
        }
    } 
    while (guess != randomNumber);
    return 0;
}

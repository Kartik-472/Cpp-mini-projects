#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int guess;
    char play;
    char temp;

    std::cout << '\n' << "-------------------- Welcome to a random number guessing game! --------------------" << '\n' << std::endl;

    do
    {
        int tries = 0;
        int num = rand() % 100 + 1;

        while (num != guess)
        {
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            tries++;

            if (guess < num)
            {
                std::cout << "Your guess is less than the number." << '\n' << std::endl;
                continue;
            }
            else if (guess > num)
            {
                std::cout << "Your guess is greater than the number." << '\n' << std::endl;
                continue;
            }
            else if (num == guess)
            {
                std::cout << '\n' << "--------------------------------------------------" << '\n' << std::endl;
                std::cout << "You guessed it in " << tries << " tries." << '\n' << std::endl;
                break;
            }
            
        }
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> play;
        std::cout << '\n' << "--------------------------------------------------" << '\n' << std::endl;
    } while (play == 'y' || play == 'Y');

    std::cout << "---------- Thank you for playing this game! :) ----------" << '\n' << std::endl;
    std::cout << "Enter any character to exit the program..." << std::endl;
    std::cin >> temp;
    
    return 0;
}
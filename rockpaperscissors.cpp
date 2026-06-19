#include <iostream>
#include <ctime>

// 1 = rock; 2 = paper; 3 = scissors;

int comptchoice()
{
    srand(time(0));
    int choice = rand() % 3 + 1;
    return choice;
}

int userchoice()
{
    int userchoice;
    std::cout << '\n'
              << "--------------------------------------------------" << std::endl;
    std::cout << '\n'
              << "Enter your choice (1 = r, 2 = p, 3 = s): ";
    std::cin >> userchoice;
    return userchoice;
}

int result(int uchoice, int cchoice)
{
    if (cchoice == 1)
    {
        switch (uchoice)
        {
        case 1:
            std::cout << "    _______" << '\n'
                      << "---'   ____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "The game is a draw you both chose Rock!..." << std::endl;
            break;
        case 2:
            std::cout << "     _______" << '\n'
                      << "---'    ____)____" << '\n'
                      << "           ______)" << '\n'
                      << "          _______)" << '\n'
                      << "         _______)" << '\n'
                      << "---.__________)" << '\n'
                      << std::endl;
            std::cout << "Computer's Rock was trapped by your Paper :)" << std::endl;
            break;
        case 3:
            std::cout << "    _______" << '\n'
                      << "---'   ____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "Your scissors were destroyed by Computer's Rock :(" << std::endl;
            break;
        default:
            break;
        }
    }
    else if (cchoice == 2)
    {
        switch (uchoice)
        {
        case 1:
            std::cout << "     _______" << '\n'
                      << "---'    ____)____" << '\n'
                      << "           ______)" << '\n'
                      << "          _______)" << '\n'
                      << "         _______)" << '\n'
                      << "---.__________)" << '\n'
                      << std::endl;
            std::cout << "Your Rock was trapped by the Computer's Paper :(" << std::endl;
            break;
        case 2:
            std::cout << "     _______" << '\n'
                      << "---'    ____)____" << '\n'
                      << "           ______)" << '\n'
                      << "          _______)" << '\n'
                      << "         _______)" << '\n'
                      << "---.__________)" << '\n'
                      << std::endl;
            std::cout << "The game is a draw you both chose Paper!..." << std::endl;
            break;
        case 3:
            std::cout << "    _______" << '\n'
                      << "---'   ____)____" << '\n'
                      << "          ______)" << '\n'
                      << "       __________)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "Your Scissors obliterated Computer's Paper :)" << std::endl;
            break;
        default:
            break;
        }
    }
    else
    {
        switch (uchoice)
        {
        case 1:
            std::cout << "    _______" << '\n'
                      << "---'   ____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (_____)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "Your Rock destroyed Computer's Scissors :)" << std::endl;
            break;
        case 2:
            std::cout << "    _______" << '\n'
                      << "---'   ____)____" << '\n'
                      << "          ______)" << '\n'
                      << "       __________)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "Your Paper was obliterated by Computer's Scissors :(" << std::endl;
            break;
        case 3:
            std::cout << "    _______" << '\n'
                      << "---'   ____)____" << '\n'
                      << "          ______)" << '\n'
                      << "       __________)" << '\n'
                      << "      (____)" << '\n'
                      << "---.__(___)" << '\n'
                      << std::endl;
            std::cout << "The game is a draw you both chose Scissors!..." << std::endl;
        default:
            break;
        }
    }
}

int main()
{
    char play = 'y';
    std::cout << '\n'
              << "-------------------- Welcome to a RPS game! --------------------" << '\n'
              << std::endl;
    std::cout << "Here you play against a computer and the winning figure is shown with a message" << std::endl;
    std::cout << '\t' << '\t' << '\t' << "All the best :p" << std::endl;

    do
    {
        result(userchoice(), comptchoice());
        std::cout << '\n'
                  << "--------------------------------------------------" << '\n'
                  << std::endl;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> play;
    } while (play == 'y' || play == 'Y');

    std::cout << '\n'
              << "-------------------- Thanks for playing! :) --------------------" << '\n'
              << '\n'
              << "Enter any character to exit..." << std::endl;
    std::cin >> play;
    return 0;
}
#include <iostream>

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    std::cout << "--------------------------------------------------" << '\n';
    std::cout << "Welcome to a percentage calculator" << '\n';
    std::cout << "This will help you calculate the percentage of top subjects." << '\n' << '\n';
    int topsub = 0;
    int sum = 0;
    int size = 0;
    std::cout << "How many subject(s) do you have?: ";
    std::cin >> size;
    std::cout << '\n';
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter marks in subject " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    sort(marks, size);

    std::cout << '\n' << "How many top subject(s) would you like to consider?: ";
    std::cin >> topsub;
    
    if (topsub > size || topsub == 0)
    {
        std::cout << "Invalid number of top subjects..." << '\n';
        return -1;
    }

    for (int i = 0; i < topsub; i++)
    {
        sum += marks[i];
    }

    double percentage = (double)sum / topsub;

    std::cout << '\n' << "The percentage of top " << topsub << " subject(s) is: " << percentage << "%" << '\n';
    std::cout << "--------------------------------------------------";

    return 0;
}
#include <iostream>
#include <vector>

class Student
{
public:
    std::string name;
    int marks;
};

std::vector<Student> students;

void addstudents()
{
    Student s;
    std::cout << "\n------------------------------\n";
    std::cout << "Name: ";
    std::cin >> s.name;
    std::cout << "Marks: ";
    std::cin >> s.marks;
    students.push_back(s);
}

void viewstudents()
{
    std::cout << "\n------------------------------\n";
    std::cout << "Total student(s): " << students.size() << "\n";
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << "\nStudent " << i + 1 << "\n";
        std::cout << "Name = " << students[i].name;
        std::cout << "\nMarks = " << students[i].marks << "\n";
    }
}

void topper()
{
    Student topper = students[0];
    for (int i = 0; i < students.size(); i++)
    {
        if (topper.marks < students[i].marks)
        {
            topper = students[i];
        }
    }

    std::cout << "\n------------------------------\n";
    std::cout << "The topper is " << topper.name << " with " << topper.marks << " marks.\n";
}

int main()
{
    int choice = 0;

    do
    {
        std::cout << "\n===== Student Management System =====\n";
        std::cout << "\n1. Add Student";
        std::cout << "\n2. View Students";
        std::cout << "\n3. Find Topper";
        std::cout << "\n4. Exit\n";
        std::cout << "\nEnter your choice (1-4): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            addstudents();
            break;
        case 2:
            if (students.empty())
            {
                std::cout << "\nNo student(s) added...!\n";
            }
            else
            {
                viewstudents();
            }
            break;
        case 3:
            if (students.empty())
            {
                std::cout << "\nNo student(s) added...!\n";
                break;
            }
            topper();
            break;
        case 4:
            std::cout << "\n\nThanks for using this program... :)";
            break;
        default:
            std::cout << "\nNot a valid choice...!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <vector>

double assignment_score()
{
    std::vector<double> ass(4, 0);
    std::vector<std::string> ordinal{"first", "second", "third", "fourth"};
    for (int i = 0; i < 4; i++)
    // printf(" the assignment", ordinal[i]);{}
    {
        std::cout << "Enter the score for the " << ordinal[i] << " assignment" << std::endl;
        std::cin >> ass[i];
    }
    double count = 0;
    for (int i = 0; i < 4; i++)
    {
        count += ass[i];
    }
    count /= 4;
    printf("average assignments score: %f", count);
    return count;
}
int main()
{
    double ass_avg{assignment_score()};

    double midterm, final, section;
    printf("Enter the score for the midterm");
    std::cin >> midterm;
    printf("Enter the score for the final");
    std::cin >> final;
    printf("Enter the score for the section grade");
    std::cin >> section;

    double finalgrade = ass_avg * 0.4 + midterm * 0.15 +
                        final * 0.35 + section * 0.1;

    printf("The final grade is %f", finalgrade);
}
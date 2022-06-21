#include <iostream>

// void GetInput(WeeklySales){

// };
void CalcMethod1(int num_shoes)
{
    int shoeprice{225};

    int weekly{600};
    int hoursweek{40};
    std::cout << weekly << std::endl;
};
void CalcMethod2(int num_shoes)
{
    int shoeprice{225};

    int hourly{7};
    double commission{0.1};
    int hoursweek{40};

    double weekly = hourly * hoursweek + (commission * num_shoes * shoeprice);
    std::cout << weekly << std::endl;
};
void CalcMethod3(int num_shoes)
{
    int shoeprice{225};

    double commission{0.2};
    int incentive{20};
    double weekly = (commission * num_shoes * shoeprice) + incentive * num_shoes;
    std::cout << weekly << std::endl;
};

int main()
{
    int numshoes{10};
    CalcMethod1(numshoes);
    CalcMethod2(numshoes);
    CalcMethod3(numshoes);
}
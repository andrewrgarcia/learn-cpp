/*The common field cricket chirps in direct proportion to the current temperature.
Adding 40 to the number of time a cricket chirps in a minute, then dividing that
 value by 4 gives us the temperature. Write a program that takes as input the
  number of chirps in a minute and prints the current temperature. For example,

Number of chirps: 120
The temperature is: 40.0 degrees. */

#include <iostream>

void cricket(int numchirps)
{
    double temp = (numchirps + 40) / 4;
    printf("The temperature is: %f degrees.", temp);
}
int main()
{
    int numchirps;
    printf("number of chirps: ");
    std::cin >> numchirps;
    cricket(numchirps);
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
    int totalScore = 0;
    vector<int> scores;

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            scores.push_back(x);
        }
    }
    int calculateTotalScore()
    {
        for (int i = 0; i < 5; i++)
        {
            totalScore += scores[i];
        }
        return totalScore;
    }
};
// C++ program to generate a JSON-serialized jason.js database of 3-D "nodes"
// with randomly-selected colors, given properties with randomly-selected magnitudes,
// and placed in random 3-D space.
// Andrew Garcia, 2022
#include <iostream>
#include <string>
#include <chrono>
#include <boost/range/algorithm.hpp>
#include <boost/range/algorithm_ext.hpp>
#include <boost/range/irange.hpp>
#include <bits/stdc++.h>

template <typename T>
void printvector(std::vector<T> &vector)
{
    for (int i = 0; i < vector.size(); i++)
        std::cout << vector[i] << " ";
    std::cout << std::endl;
}

template <typename T>
void printmatrix(std::vector<std::vector<T>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
        // std::cout << vector[i][0] << " ";
        printf("{%d,%d,%d} ", matrix[i][0], matrix[i][1], matrix[i][2]);
    std::cout << std::endl;
}

template <typename T>
std::vector<T> randsamples(std::vector<T> &vector, int N)
{
    std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
    // std::vector<T> vector;

    // for (int i = 0; i < vector.size(); i++)
    //     vector.push_back(i);

    std::vector<T> vector_of_samples;

    for (int i = 0; i < N; i++)
    {
        int idx = generator() % vector.size();
        // std::cout << vector[idx] << std::endl;
        vector_of_samples.push_back(vector[idx]);
    }

    return vector_of_samples;
}

std::string random_color()
{
    std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<double> dist{0.0, 1.0};
    int color{static_cast<int>(dist(generator) * 16777215)};

    // std::cout << color;

    std::stringstream stream;
    stream << std::hex << color;
    std::string result("0x" + stream.str());
    // std::string hexcolor {"0x"+result};
    // std::cout << result;

    return result;
}

int main(int argc, char **argv)
// int main()
{

    int N{std::stoi(argv[1])};

    std::vector<int> voltage_range;
    boost::push_back(voltage_range, boost::irange(1, 1200));
    std::vector<std::string> state_list{"active", "latent", "off"};

    std::vector<int> voltages{randsamples(voltage_range, N)};
    std::vector<std::string> states{randsamples(state_list, N)};

    std::vector<std::string> random_colors;
    for (int i = 0; i < N; i++)
    {
        random_colors.push_back(random_color());
    }

    std::vector<int> coordinate_range;
    boost::push_back(coordinate_range, boost::irange(0, 200));

    std::vector<int> coordsx{randsamples(coordinate_range, N)};
    std::vector<int> coordsy{randsamples(coordinate_range, N)};
    std::vector<int> coordsz{randsamples(coordinate_range, N)};

    std::vector<int> v(3, 0);
    std::vector<std::vector<int>> coords(N, v);

    for (int i = 0; i < N; i++)
    {
        coords[i][0] = coordsx[i];
        coords[i][1] = coordsy[i];
        coords[i][1] = coordsz[i];
    }

    printmatrix(coords);
    printvector(random_colors);
    printvector(voltages);
    printvector(states);

    // jsonmake
    std::ofstream ofs("jason.js", std::ofstream::out);
    ofs << "{\"xyz\":\"[";
    for (int j = 0; j < N; j++)
    {
        ofs << "[";
        for (int i = 0; i < 3; i++)
            if (i == 2)
                ofs << coords[j][i];
            else
                ofs << coords[j][i] << ",";
        if (j == N - 1)
            ofs << "]";
        else
            ofs << "],";
    }
    ofs << "]\"},";

    ofs << "{\"color\":\"[";
    for (int j = 0; j < N; j++)
    {

        ofs << random_colors[j];
        if (j == N - 1)
            ofs << "";
        else
            ofs << ",";
    }
    ofs << "]\"},";

    ofs << "{\"voltage\":\"[";
    for (int j = 0; j < N; j++)
    {

        ofs << voltages[j];
        if (j == N - 1)
            ofs << "";
        else
            ofs << ",";
    }
    ofs << "]\"},";

    ofs << "{\"active_state\":\"[";
    for (int j = 0; j < N; j++)
    {

        ofs << states[j];
        if (j == N - 1)
            ofs << "";
        else
            ofs << ",";
    }
    ofs << "]\"}";

    ofs.close();
}

void jsonmake(std::vector<int> vector)
{

    int N = (std::cbrt(vector.size()) + 0.5);
    std::vector<std::vector<int>> jason;

    // make jason matrix
    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < N; i++)
            {
                int atom{vector[(N * N) * k + N * j + i]};
                if (atom)
                    jason.push_back({k, j, i, atom});
            }
        }
    }

    // jsonmake jason matrix
    int M = jason.size();

    std::ofstream ofs("jason.js", std::ofstream::out);
    ofs << "var jsonstr = '[";
    for (int j = 0; j < M; j++)
    {
        ofs << "[";
        for (int i = 0; i < 4; i++)
            if (i == 3)
                ofs << jason[j][i];
            else
                ofs << jason[j][i] << ",";
        if (j == M - 1)
            ofs << "]";
        else
            ofs << "],";
    }
    ofs << "]'";

    ofs.close();
}
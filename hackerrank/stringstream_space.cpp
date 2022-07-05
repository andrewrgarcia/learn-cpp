#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch{' '}; 
    vector<int> numbers;
    // int a, b, c;
    // ss >> a >> ch >> b >> ch >> c;
    // ss >> a >> ch;
    // ss >> b >> ch;
    // ss >> c >> ch;
    int number;
    while (ss >> number){
        numbers.push_back(number);
        ss >> ch;
    }

    // numbers = {a,b,c};
    return numbers;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

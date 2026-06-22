#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string text;
    getline(cin, text);

    stringstream ss(text);
    string word;

    int count = 0;

    while(ss >> word)
        count++;

    cout << count;

    return 0;
}

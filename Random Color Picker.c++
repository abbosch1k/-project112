#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string colors[] = {
        "Red","Blue","Green","Black"
    };

    cout << colors[rand()%4];

    return 0;
}

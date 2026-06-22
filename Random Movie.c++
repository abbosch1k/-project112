#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string movies[] = {
        "Avatar",
        "Titanic",
        "Inception",
        "Interstellar"
    };

    cout << movies[rand()%4];

    return 0;
}

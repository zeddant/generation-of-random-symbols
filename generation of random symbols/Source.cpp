#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string generateRandomString(int length) {
    const string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    string randomString;

    srand(time(0));

    for (int i = 0; i < length; ++i) {
        randomString += characters[rand() % characters.size()];
    }

    return randomString;
}

int main() {
    int length;

    cout << "enter lenght: ";
    cin >> length;

    if (length <= 0) {
        cout << "lenght should be greater than zero" << endl;
        return 1;
    }

    string randomString = generateRandomString(length);
    cout << randomString << endl;

    return 0;
}
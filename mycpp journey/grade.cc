#include <iostream>
using namespace std;

int main() {
    int score;
	cout << "Enter your score ";
	cin >> score;
    if (score >= 70) {
        cout << "You have an A";
    } else if (score >= 60) {
        cout << "You have a B";
    } else if (score >= 50) {
        cout << "You have a C";
    } else if (score >= 40) {
        cout << "You have a D";
    } else {
        cout << "You have FAILED";

    }
    return 0;
}

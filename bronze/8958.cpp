#include <iostream>
#include <string>
using namespace std;

int main() {
    int test_case;
    int result = 0;
    string quiz;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> quiz;
        int score = 0;
        for (int j = 0; j < quiz.length(); j++) {
            if (quiz[j] == 'O') {
                score += 1;
            } else {
                score = 0;
            }
            result += score;
        }
        cout << result << endl;
        result = 0;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string s;
    int test_case, repeat;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        cin >> repeat >> s;
        for (int j = 0; j < s.length();j++) {
            for (int k = 0; k < repeat; k++) {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}
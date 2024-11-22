#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    int count[10] = {0};
    cin >> a >> b >> c;

    string result = to_string(a*b*c);

    for (int i = 0; i < result.length(); i++) {
        count[result[i]-'0']++;
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }

    return 0;
}
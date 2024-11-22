#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr;
    string ascending = "1 2 3 4 5 6 7 8";
    string descending = "8 7 6 5 4 3 2 1";
    string result = "";

    getline(cin, arr);
    
    if (arr == ascending) {
        result = "ascending";
    } else if (arr == descending) {
        result = "descending";
    } else {
        result = "mixed";
    }

    cout << result;

    return 0;
}
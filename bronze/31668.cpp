#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    int result;
    cin >> n >> m >> k;

    //밥에 들어가는 양 N
    //사용한 그램 M
    //가지 K

    result = m / n * k;
    cout << result << endl;

    return 0;
}
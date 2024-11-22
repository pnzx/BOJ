#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s, m, l, xl, xxl, xxxl;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;

    int t, p;
    cin >> t >> p;

    int tresult, presult_1, presult_2;
    tresult = ceil(double(s)/double(t)) + ceil(double(m)/double(t)) + ceil(double(l)/double(t)) + ceil(double(xl)/double(t)) + ceil(double(xxl)/double(t)) + ceil(double(xxxl)/double(t));
    presult_1 = (s + m + l + xl + xxl + xxxl) / p;
    presult_2 = (s + m + l + xl + xxl + xxxl) % p;

    cout << tresult << endl;
    cout << presult_1 << " " << presult_2 << endl;

    return 0;
}
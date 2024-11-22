#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int day = 0;
    int count = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        day=stoi(s.substr(2));

        if(day<=90) {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int T;
    int H, W, N;
    int floor, room;
    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        
        floor = N % H;
        room = N / H + 1;

        if(floor == 0) {
            floor = H;
            room = N / H;
        }
        cout << floor * 100 + room << endl;
    }

    return 0;
}



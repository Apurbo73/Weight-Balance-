#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;

        int minGain = x1 * M;
        int maxGain = x2 * M;
        int actualGain = w2 - w1;

        if (actualGain >= minGain && actualGain <= maxGain)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}

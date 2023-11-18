#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double x, d1, d2;
        cin >> x >> d1 >> d2;

        double result = ( x * d1) / d2;
        int rounded_result = ceil(result);

        cout << rounded_result << endl;
    }

    return 0;
}

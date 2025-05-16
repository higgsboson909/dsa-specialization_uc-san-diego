#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills (int distance, int miles_per_tank, vector <int> stops) {

    // 950
    // 400
    // 200 375 550 750

    // 10
    // 3
    // 4
    // 1 2 5 9

    int refillTime = 0;
    int currentCapacity = miles_per_tank;
    stops.push_back(distance);
    for (int i = 0; i < stops.size() - 1; i++) {
        if (currentCapacity < stops[i + 1]) {
            refillTime++;
            if (currentCapacity + miles_per_tank < stops[i + 1]) 
                return -1;
            currentCapacity = miles_per_tank + stops[i];
            
        }
    }

    return refillTime;

    // return -1;
}

int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}

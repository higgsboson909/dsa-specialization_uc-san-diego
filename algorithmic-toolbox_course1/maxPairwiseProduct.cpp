#include<iostream>
#include<vector>



using std::vector;
using std::cout;
using std::cin;

long long maxPairwiseProduct(const vector<int>& numbers) {
    long long result = 0;

    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(result < ((long long)numbers[i]) * numbers[j])
                result = ((long long)numbers[i]) * numbers[j];
        }
    }

    return result;
}


int main () {

    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    cout << maxPairwiseProduct(numbers) << "\n";
    


    return 0;
}
    

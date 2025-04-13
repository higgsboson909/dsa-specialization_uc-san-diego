#include<iostream>
#include<vector>



using std::vector;
using std::cout;
using std::cin;

int maxPairwiseProduct(const vector<int>& numbers) {
    int result = 0;

    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(result < numbers[i] * numbers[j])
                result = numbers[i] * numbers[j];
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
    

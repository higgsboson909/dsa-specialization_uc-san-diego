#include<iostream>
#include<vector>
#include<cstdlib>


using std::vector;
using std::cin;
using std::cout;

long long maxPairwiseProduct (const vector<int>& numbers) {
    long long result = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (result < ((long long)numbers[i]) * numbers[j]) {
                result = ((long long)numbers[i]) * numbers[j];
            }
        }
    }

    return result;
}

long long fast_maxPairwiseProduct (const vector<int>& numbers) {
    int index1, index2 = -1;
    for (int i = 0; i < numbers.size(); ++i) {
        if (index1 == -1 || numbers[index1] < numbers[i])
            index1 = i;
    }

    for (int i = 0; i < numbers.size(); ++i) {
        if (index1 != i && (index2 == -1 || numbers[index2] < numbers[i])) 
            index2 = i;
    }

    return ((long long)numbers[index1]) * numbers[index2];

}


int main () {

    while (true) {
        int n = (rand() % 1000) + 2;
        cout << n << "\n";
    
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int random = rand() % 100000;
            cout << random << "\t";
            nums.push_back(random);
        }
        cout << "\n";

        long long res1 = maxPairwiseProduct(nums);
        long long res2 = fast_maxPairwiseProduct(nums);
        if(res1 == res2) {
            cout << "OK\n" << res1 << "\n";
        }
        else {  
            cout << "Wrong Answer\n";
            cout << res1 << "\t" << res2;
            break;
        }

    }
    
    return 0;
}

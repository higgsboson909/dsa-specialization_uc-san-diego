#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

long long fast_maxPairwiseProduct(const vector<int>& numbers){

    int index1, index2 = -1;
    
    for (int i = 0; i < numbers.size(); ++i) {
        if(index1 == -1 || numbers[index1] < numbers[i]) 
            index1 = i;
    }

    for (int i = 0; i < numbers.size(); ++i) {
        if(index1 != i && (index2 == -1 || numbers[index2] < numbers[i]))
            index2 = i;
    }

    return ((long long)numbers[index1]) * numbers[index2];

}

int main (){
   
    int n; 
    cin >> n;

    vector<int> numbers;
    int num;
    for (int i = 0; i < n; i++){
        cin >> num;
        numbers.push_back(num);
    }

    cout << fast_maxPairwiseProduct(numbers);


    return 0;
}

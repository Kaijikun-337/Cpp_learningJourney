#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums = {91, 2, 3, 4, 5};
    vector<int> squares;

    squares.resize(nums.size());

    transform(nums.begin(), nums.end(), squares.begin(),
        [](int n) {return n*n;}
    );

    for(const auto& i : squares){
        cout<<i<<" ";
    }

    return 0;
}
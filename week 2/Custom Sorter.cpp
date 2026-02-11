#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {5,2,9,1,3};
    vector<int> nums2 = {-5, -2, -9, 1, -3};
    sort(nums.begin(), nums.end());
    sort(nums2.begin(), nums2.end());
    cout<<"First sort:"<<endl;
    cout<<"First Vector: ";
    for(const auto& i : nums){
        cout<<i<<" ";
    }
    cout<<"Second Vector: ";
    for(const auto& i : nums2){
        cout<<i<<" ";
    }

    cout<<endl<<"Second Sort"<<endl;
    sort(nums.begin(), nums.end(), [](int a, int b) {return a > b;});
    sort(nums2.begin(), nums2.end(), [](int a, int b) {return abs(a) < abs(b);});
    cout<<"First Vector: ";
    for(const auto& i : nums){
        cout<<i<<" ";
    }
    cout<<"Second Vector: ";
    for(const auto& i : nums2){
        cout<<i<<" ";
    }

    return 0;
}
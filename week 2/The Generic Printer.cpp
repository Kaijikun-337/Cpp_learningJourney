#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printVector(const vector<T>& Vector){
    for(int i = 0; i < Vector.size(); i++){
        //const auto& i : Vector preferably 
        cout<<Vector.at(i)<<endl;
    }
    cout<<endl;
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<string> words = {"Hello", "C++"};
    vector<double> nums2 = {1.5, 2.5};

    cout<<"Integer vector: "<<endl;
    printVector(nums);
    cout<<"String vector: "<<endl;
    printVector(words);
    cout<<"Double vector: "<<endl;
    printVector(nums2);
    
    


    return 0;
}
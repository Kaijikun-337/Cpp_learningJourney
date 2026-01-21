#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numVector;
    int newCapacity, oldCapacity = numVector.capacity();

    for(int i = 0; i < 1000; i++){
        numVector.push_back(i);
        newCapacity = numVector.capacity();
        if(newCapacity != oldCapacity){
            cout<<"Resize happened! New Capacity: "<<newCapacity<<endl;
            oldCapacity = newCapacity;
        }
    }
    
    return 0;
}
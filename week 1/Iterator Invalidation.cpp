#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myVector = {1, 2, 4, 3, 5, 8, 10, 12, 13};

    vector<int>::iterator i;

    for(i = myVector.begin(); i != myVector.end();){
        if( *i % 2 == 0 ){
            i = myVector.erase(i);
        }
        else{
            i++;
        }
    }

    cout<<"After deletion: "<<endl;
    for(i = myVector.begin(); i != myVector.end(); i++){
        cout<<*i<<" ";
    }


    return 0;
}
#include <iostream>

using namespace std;

void leak(){
    int* ptr = new int[10000];

    for(int i = 0; i < 10000; i++){
        ptr[i] = i;
    }

    delete[] ptr;
    //delete ptr;
}

int main(){
    while(true){
        leak();
        cout<<"Leaking..."<<endl;
    }


    return 0;
}
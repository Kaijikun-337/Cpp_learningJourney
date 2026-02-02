#include <iostream>

using namespace std;

struct Box{
    int weight;

    Box(int num) : weight(num) {}

    Box operator+(const Box &b)const{
        return Box(weight + b.weight);
    }
};

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main(){
    Box b1 = 10, b2 = 20, b3 = add(b1, b2);
    
    cout<<"First Weight: "<<b1.weight<<endl;
    cout<<"Second Weight: "<<b2.weight<<endl;
    cout<<"Third Weight: "<<b3.weight<<endl;


    return 0;
}
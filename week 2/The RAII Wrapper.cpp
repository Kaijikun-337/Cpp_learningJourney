//RAII - Resource Acquisition Is Intialization

#include <iostream>

using namespace std;

class HeapInt{
public:
    int* ptr;

    HeapInt(int num){
        ptr = new int(num);
        cout<<"Allocated"<<endl;
    }

    ~HeapInt(){
        delete ptr;
        cout<<"Freed"<<endl;
    }

};

int main(){

    cout<<"Start Main"<<endl;
    
    {
        HeapInt h(100);
        cout<<"Leaving the scope"<<endl;
    }

    cout<<"End Main"<<endl;

    return 0;
}
#include <iostream>

using namespace std;

template <typename T, int size>
class SuperClassyClass{
    private:
        T arr[size];
    
    public:
        void fill(T value){
            for(int i = 0; i < size; i++){
                arr[i] = value;
            }
        }

        T& at(int index){
            if(index < size && index > -1){
                return arr[index];
            }
            else{
                cout<<"ERROR"<<endl;
                return arr[0];
            }
        }
};

int main(){
    SuperClassyClass<int, 5> arr;

    arr.fill(10);
    cout<<arr.at(2)<<endl;
    cout<<arr.at(7)<<endl;
    arr.at(2) = 999;
    cout << arr.at(2); 


    return 0;
}
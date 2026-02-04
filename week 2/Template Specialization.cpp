#include <iostream>

using namespace std;

template <typename T>
class Wrapper{
    private:
    T data;

    public:
    Wrapper(T value) :  data (value) {}

    void print() { cout<<"The data: "<<data<<endl; }

    void update(T newValue) { data = newValue; }
};

template<>
class Wrapper<bool>{
    private:
        bool data;

    public:
        Wrapper(bool v) : data(v) {}

        void update(bool newValue) { data = newValue; }

        void print(){
            if(data){
                cout<<"CONFIRMED"<<endl;
            }
            else{
                cout<<"DENIED"<<endl;
            }
        }
};

int main(){
    Wrapper<int> num = {100};
    Wrapper<string> txt = {"Hello"};
    Wrapper<bool> b = {false};

    cout<<"Before editing: "<<endl;
    num.print();
    txt.print();
    b.print();
    cout<<"After editing: "<<endl;
    num.update(200);
    num.print();
    txt.update("Bye");
    txt.print();
    b.update(true);
    b.print();



    return 0;
}
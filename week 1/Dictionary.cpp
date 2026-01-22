#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> fruits = {{"Banana", 3}, {"Apple", 5}, {"Cherry", 10}};

    fruits["Dates"] = 7;
    fruits.insert({"Mango", 20});

    for(auto fruit : fruits){
        cout<<"Name: "<<fruit.first<<" Price: "<<fruit.second<<endl;    
    }

    return 0;
}
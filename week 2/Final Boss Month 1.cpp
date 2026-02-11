#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Product
{
    int id;
    string name;
    double price;
    int quantity;
};


int main(){
    Product it1, it2, it3, it4, it5;

    it1.id = 000;
    it2.id = 001;
    it3.id = 010;
    it4.id = 011;
    it5.id = 100;

    it1.name = "Mug";
    it2.name = "Monitor";
    it3.name = "Artificial Tree";
    it4.name = "Sparklers";
    it5.name = "Mandarins";

    it1.price = 9.99;
    it2.price = 139.99;
    it3.price = 10.99;
    it4.price = 3.99;
    it5.price = 5.99;

    it1.quantity = 0;
    it2.quantity = 1;
    it3.quantity = 1;
    it4.quantity = 5;
    it5.quantity = 20;

    vector<Product> list = {it1, it2, it3, it4, it5};

    //Task 1
    vector<Product> restock_list;
    copy_if(list.begin(), list.end(), back_inserter(restock_list),
        [](const Product& tmp) {
            return tmp.quantity == 0;
        }
    );

    //Task 2
    for_each(list.begin(), list.end(), 
        [](Product& tmp){
            if(tmp.price > 100){
                tmp.price *= 0.8;
            }
            return tmp.price;
        }
    );
    

    //Task 3
    sort(list.begin(), list.end(), [](const Product& a, const Product& b){
        return a.price < b.price;
    });

    //Task 4
    for_each(list.begin(), list.end(), [](const Product& tmp){
        cout<<"ID: "<<tmp.id<<" Name: "<<tmp.name<<" --- "<<"$"<<tmp.price<<" (Quantity: "<<tmp.quantity<<")"<<endl;
    });


    return 0;
}
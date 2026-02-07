#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int balance = 100;
    vector<int> transactions = {-50, -20, 30, -150};

    cout<<"Balance before transactions: "<<balance<<endl;
    for_each(transactions.begin(), transactions.end(), [&balance](int num) {if(balance+num > 0){return balance+=num;}else{return balance;}});
    cout<<"Balance after transactions: "<<balance<<endl;

    return 0;
}
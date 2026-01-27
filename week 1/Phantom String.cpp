#include <iostream>
#include <string>
#include <string_view>

using namespace std;

/* NOT SAFE!
string_view get(){
    string txt = "Hello World!";

    return string_view(txt);
}
*/

//First fix
string get(){
    string txt = "Hello World!";

    return txt;
}

//Second fix
string_view getS(){return "Hello World";}

int main(){
    cout<<get()<<endl;
    cout<<getS()<<endl;

    return 0;
}
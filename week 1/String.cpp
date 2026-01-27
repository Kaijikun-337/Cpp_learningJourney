#include <iostream>
#include <string>
#include <string_view>
#include <chrono> // For the timer

using namespace std;
using namespace std::chrono;

// 1. Write a function that takes std::string (Pass by Value = Copy)
void heavyFunction(std::string s) {
    // Just do something simple so the compiler doesn't delete the function
    volatile char c = s[0]; 
}

// 2. Write a function that takes std::string_view (No Copy)
void lightFunction(std::string_view s) {
    volatile char c = s[0];
}

int main() {
    string text = "This is a very long string that we are going to copy over and over again.";

    // --- BENCHMARK 1: String Copy ---
    auto start = high_resolution_clock::now();
    
    for(int i = 0; i < 10000000; i++) {
        // CALL heavyFunction HERE
        heavyFunction(text);
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "String (Copy) took: " << duration.count() << " ms" << endl;


    // --- BENCHMARK 2: String View ---
    start = high_resolution_clock::now();

    for(int i = 0; i < 10000000; i++) {
        // CALL lightFunction HERE
        lightFunction(text);
    }

    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout << "StringView (No Copy) took: " << duration.count() << " ms" << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int x = 5;
    for (int i = 1; i <= x; i++) {
        for (int j = x - i - 1; j >= 0; j--){
            cout << "-";
        };
        
        for (int k = 1; k < i * 2; k++){
            cout << "*";
        };

        // for (int k = x; k < i; k--){
        //     cout << "*";
        // };
        
        for (int j = x - i - 1; j >= 0; j--){
            cout << "-";
        };
        cout << endl;
    }
}
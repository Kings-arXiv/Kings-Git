#include <iostream>

// Programmers 코딩테스트 LV.1: 직사각형 별찍기

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 1; i <= a * b; i++){
        cout << "*";
        if (i % a == 0)
            cout << "\n";
    }
    
    return 0;
}

#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �ִ������� �ּҰ����

using namespace std;

int gcd(int X, int Y){
    while(Y != 0){
        int r = X % Y;
        X = Y;
        Y = r;
    }
    return X;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int Maxi = max(n, m);
    int Mini = min(n, m);
    
    int G = gcd(Maxi, Mini);
    answer.push_back(G);
    answer.push_back(int(n * m / G));
    
    return answer;
}
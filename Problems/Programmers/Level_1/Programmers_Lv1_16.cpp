#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ����� ��

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            if (n == i * i) answer += i;
            else answer += (i + n / i);
        }
    }
    return answer;
}
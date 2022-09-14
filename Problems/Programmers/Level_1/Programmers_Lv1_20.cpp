#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �Ҽ� ã��

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <bool> Prime(n + 1);
    int i;
    int j;
    Prime[0] = true;
    Prime[1] = true;
    for (i = 2; i * i <= n; i++){
        if (Prime[i]) continue;
        if (Prime[i] == false){
            for (j = 2 * i; j <= n; j += i) Prime[j] = true;
        }
    }
    for (i = 2; i <= n; i++){
        if (Prime[i] == false) answer++;
    }
    return answer;
}
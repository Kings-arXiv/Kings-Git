#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �� ���� ������ ��

using namespace std;

long long solution(int a, int b) {
    
    long long answer = 0;
    int m = min(a, b);
    int M = max(a, b);
    int i;
    
    if (m == M) return m;
    
    for (i = m; i <= M; i++) answer += i;
    
    return answer;
}
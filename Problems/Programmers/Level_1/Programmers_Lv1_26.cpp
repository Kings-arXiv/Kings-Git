#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 두 정수 사이의 합

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
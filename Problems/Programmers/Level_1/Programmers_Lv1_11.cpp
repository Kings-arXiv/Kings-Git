#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 정수 제곱근 판별

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long i;
    for (i = 1; i * i <= n; i++){
        if (i * i == n) return (i * i + 2 * i + 1);
    }
    return answer;
}
#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���� ������ �Ǻ�

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long i;
    for (i = 1; i * i <= n; i++){
        if (i * i == n) return (i * i + 2 * i + 1);
    }
    return answer;
}
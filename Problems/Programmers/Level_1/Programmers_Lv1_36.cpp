#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �������� 1�� �Ǵ� �� ã��

using namespace std;

int solution(int n) {
    int answer = 0;
    int i;
    for (i = 2; i < n; i++){
        if ((n-1) % i == 0){
            answer = i;
            break;
        }
    }
    return answer;
}
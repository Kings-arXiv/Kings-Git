#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �ݶ��� ����

using namespace std;

int solution(int num) {
    long key = num;
    int answer = 0;
    while(answer < 500){
        if (key == 1)
            return answer;
        if (key % 2 == 0)
            key /= 2;
        else
            key = key * 3 + 1;
        answer++;
    }
    answer = -1;
    return answer;
}
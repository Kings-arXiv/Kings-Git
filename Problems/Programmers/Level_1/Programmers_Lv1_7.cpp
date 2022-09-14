#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 콜라츠 추측

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
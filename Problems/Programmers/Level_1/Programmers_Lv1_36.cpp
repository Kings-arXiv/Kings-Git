#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 나머지가 1이 되는 수 찾기

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
#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 평균 구하기

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int siz = arr.size();
    for (int i = 0; i < siz; i++){
        answer += arr[i];
    }
    answer /= siz;
    return answer;
}
#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 수박수박수박수박수박수?

using namespace std;

string solution(int n) {
    string answer = "";
    int i;
    for (i = 0; i < n; i++){
        if (i % 2 == 0) answer += ("수");
        else answer += ("박");
    }
    return answer;
}
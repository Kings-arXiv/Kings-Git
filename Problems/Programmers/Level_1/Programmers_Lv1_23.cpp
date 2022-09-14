#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 문자열 내림차순으로 배치하기

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();
    int i, j, k;
    for (i = 1; i < len; i++){
        k = s[i];
        for (j = i - 1; j >= 0 && s[j] < k; j--) s[j + 1] = s[j];
        s[j + 1] = k;
    }
    answer = s;
    return answer;
}
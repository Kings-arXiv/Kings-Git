#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 시저 암호

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int i = 0;
    int len = s.size();
    for (i = 0; i < len; i++){
        if (int(s[i]) == 32) answer.push_back(s[i]);
        if (int(s[i]) >= 65 && int(s[i]) <= 90) answer.push_back(((int(s[i]) - 65 + n) % 26) + 65);
        if (int(s[i]) >= 97 && int(s[i]) <= 122) answer.push_back(((int(s[i]) - 97 + n) % 26) + 97);
    }
    return answer;
}
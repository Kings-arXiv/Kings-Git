#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 가운데 글자 가져오기

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();
    if (len % 2) answer.push_back(s[len / 2]);
    else {
        answer.push_back(s[len / 2 - 1]);
        answer.push_back(s[len / 2]);
    }
    return answer;
}
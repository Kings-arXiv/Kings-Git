#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ��� ���� ��������

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
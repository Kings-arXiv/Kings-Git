#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���ڿ� �ٷ�� �⺻

using namespace std;

bool solution(string s) {
    bool answer = true;
    int len = s.size();
    if (len != 4 && len != 6) return false;
    int i = 0;
    for (i = 0; i < len; i++){
        if (isdigit(s[i]) == false) return false;
    }
    return answer;
}
#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���ڿ��� ������ �ٲٱ�

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.size();
    int i;
    int j;
    int index;
    for (i = len - 1; i >= 1; i--){
        index = int(s[i]) - 48;
        for (j = 0; j < len - i - 1; j++) index *= 10;
        answer += index;
    }
    if (s[0] == '-') return 0 - answer;
    if (s[0] == '+') return answer;
    else{
        index = int(s[0]) - 48;
        for (j = 0; j < len-1; j++) index *= 10;
        answer += index;
    }
    return answer;
}
#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �̻��� ���� �����

using namespace std;

string solution(string s) {
    string answer = "";
    int i;
    int len = s.size();
    int total;
    
    for (total = 0; total < len; total++){
        if (s[total] == ' '){
            i = 0;
            answer.push_back(s[total]);
            continue;
        }
        
        if (i % 2 == 0) answer.push_back(toupper(s[total]));
        else answer.push_back(tolower(s[total]));
        i++;
    }
    
    return answer;
}
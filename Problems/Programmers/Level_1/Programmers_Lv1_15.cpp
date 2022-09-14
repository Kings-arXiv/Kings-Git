#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 이상한 문자 만들기

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
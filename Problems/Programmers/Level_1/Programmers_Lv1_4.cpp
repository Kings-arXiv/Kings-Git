#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 핸드폰 번호 가리기

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i;
    int len = phone_number.size();
    
    for (i = 0; i < len - 4; i++){
        answer.push_back('*');
    }
    answer.append(phone_number.substr(len - 4));
    return answer;
}

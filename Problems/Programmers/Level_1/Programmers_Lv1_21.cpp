#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 서울에서 김서방 찾기

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int len = seoul.size();
    int i;
    for (i = 0; i < len; i++){
        if (seoul[i] == "Kim"){
            answer = "김서방은 " + to_string(i) + "에 있다";
            return answer;
        }
    }
}
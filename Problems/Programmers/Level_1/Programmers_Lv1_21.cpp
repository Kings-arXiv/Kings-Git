#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���￡�� �輭�� ã��

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int len = seoul.size();
    int i;
    for (i = 0; i < len; i++){
        if (seoul[i] == "Kim"){
            answer = "�輭���� " + to_string(i) + "�� �ִ�";
            return answer;
        }
    }
}
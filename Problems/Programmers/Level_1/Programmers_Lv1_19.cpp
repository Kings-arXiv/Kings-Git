#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���ڼ��ڼ��ڼ��ڼ��ڼ�?

using namespace std;

string solution(int n) {
    string answer = "";
    int i;
    for (i = 0; i < n; i++){
        if (i % 2 == 0) answer += ("��");
        else answer += ("��");
    }
    return answer;
}
#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���ڿ� ������������ ��ġ�ϱ�

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();
    int i, j, k;
    for (i = 1; i < len; i++){
        k = s[i];
        for (j = i - 1; j >= 0 && s[j] < k; j--) s[j + 1] = s[j];
        s[j + 1] = k;
    }
    answer = s;
    return answer;
}
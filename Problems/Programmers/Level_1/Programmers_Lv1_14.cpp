#include <iostream>

// Programmers �ڵ��׽�Ʈ LV.1: �ڸ��� ���ϱ�

using namespace std;
int solution(int n)
{
    
    int answer = 0;
    string temp = to_string(n);
    int len = temp.size();
    
    for (int i = 0; i < len; i++){
        answer += (int(temp[i]) - 48);
        }
    
    return answer;
}
#include <iostream>

// Programmers 코딩테스트 LV.1: 자릿수 더하기

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
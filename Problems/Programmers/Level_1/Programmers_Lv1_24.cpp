#include <string>
#include <iostream>

// Programmers 코딩테스트 LV.1: 문자열 내 p와 y의 개수

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int len = s.size();
    int i;
    int pcount = 0;
    int ycount = 0;
    for (i = 0; i < len; i++){
        if (s[i] == 'p' || s[i] == 'P') pcount++;
        if (s[i] == 'y' || s[i] == 'Y') ycount++;
    }
    if (pcount != ycount) answer = false;
    return answer;
}
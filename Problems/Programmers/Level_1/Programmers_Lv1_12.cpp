#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 정수 내림차순으로 배치하기

using namespace std;

long long solution(long long n) {
    
    long long answer = 0;
    string anslist = to_string(n);
    
    int i;
    int j;
    int t;
    long long addnum;
    int len = anslist.size();
    
    for (i = 0; i < len; i++){
        for (j = 0; j < len - i - 1; j++){
            if (anslist[j] < anslist[j + 1]){
                t = anslist[j];
                anslist[j] = anslist[j + 1];
                anslist[j + 1] = t;
            }
        }
    }
    for (i = len - 1; i >= 0; i--){
        addnum = int(anslist[i]) - 48;
        for (j = i; j < len - 1; j++){
            addnum *= 10;
        }
        answer += addnum;
    }
    return answer;
}
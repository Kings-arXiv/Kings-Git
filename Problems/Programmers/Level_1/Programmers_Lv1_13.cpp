#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 자연수 뒤집어 배열로 만들기

using namespace std;

vector<int> solution(long long n) {
    
    vector<int> answer;
    string temp = to_string(n);
    int len = temp.size();
    for (int i = 0; i < len; i++){
        answer.push_back(int(temp[len - i - 1]) - 48);
    }
    
    return answer;
}
#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �ڿ��� ������ �迭�� �����

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
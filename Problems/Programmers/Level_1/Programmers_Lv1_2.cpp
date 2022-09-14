#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: x만큼 간격이 있는 n개의 숫자

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = 1; i <= n; i++){
        answer.push_back(i * x);
    }
    return answer;
}

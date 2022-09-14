#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: [1차] 비밀지도

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int i, j;
    vector<int> And;
    for (i = 0; i < n; i++) And.push_back(arr1[i] | arr2[i]);
    for (i = 0; i < n; i++){
        string row;
        for (j = n - 1; j >=0; j--) row.push_back(((And[i] >> j) & 1 ? '#' : ' '));
        answer.push_back(row);
    }
    return answer;
}
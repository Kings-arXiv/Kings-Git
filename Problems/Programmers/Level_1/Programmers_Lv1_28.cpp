#include <vector>
#include <iostream>

// Programmers 코딩테스트 LV.1: 같은 숫자는 싫어

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    int len = arr.size();
    int i;
    for (i = 1; i < len; i++){
        if (arr[i - 1] == arr[i]) continue;
        answer.push_back(arr[i]);
    }

    return answer;
}
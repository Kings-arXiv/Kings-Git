#include <vector>
#include <iostream>

// Programmers �ڵ��׽�Ʈ LV.1: ���� ���ڴ� �Ⱦ�

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
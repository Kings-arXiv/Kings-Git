#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ���� ���� �� �����ϱ�

using namespace std;

vector<int> solution(vector<int> arr) {
    
    vector<int> answer;
    int siz = arr.size();
    
    if (siz == 1){
        answer.push_back(-1);
        return answer;
    }
    
    int idx = 0;
    int mini = arr[idx];
    
    for (int i = 0; i < siz; i++){
        if (arr[i] < mini){
            idx = i;
            mini = arr[idx];
        }
    }
    arr.erase(arr.begin() + idx);
    return arr;
}
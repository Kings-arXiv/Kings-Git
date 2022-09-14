#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 제일 작은 수 제거하기

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
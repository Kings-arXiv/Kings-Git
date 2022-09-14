#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ������ �������� ���� �迭

using namespace std;

int split(vector<int>& V, int left, int right){
    
    int pivot = V[left];
    int start = left + 1;
    int end = right;
    
    while(start <= end){
        while(start <= end && pivot >= V[start]) start++;
        while(end >= (left + 1) && pivot <= V[end]) end--;
        if(start <= end){
            int temp = V[start];
            V[start] = V[end];
            V[end] = temp;
        }
    }
    
    int temp = V[left];
    V[left] = V[end];
    V[end] = temp;
    return end;
}

void QuickS(vector<int>& V, int left, int right){
    
    if (left < right){
        int q = split(V, left, right);
        QuickS(V, left, q - 1);
        QuickS(V, q + 1, right);
    }
}

vector<int> solution(vector<int> arr, int divisor) {
    
    vector<int> answer;
    int i;
    int len = arr.size();
    for (i = 0; i < len; i++)
        if (arr[i] % divisor == 0) answer.push_back(arr[i]);
    
    if (answer.size() == 0){
        answer.push_back(-1);
        return answer;
    }
    QuickS(answer, 0, answer.size() - 1);
    return answer;
}
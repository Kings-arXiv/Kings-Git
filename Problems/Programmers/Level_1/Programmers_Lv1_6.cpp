#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ��� ���ϱ�

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int siz = arr.size();
    for (int i = 0; i < siz; i++){
        answer += arr[i];
    }
    answer /= siz;
    return answer;
}
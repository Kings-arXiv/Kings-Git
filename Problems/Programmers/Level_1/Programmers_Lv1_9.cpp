#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: ¦���� Ȧ��

using namespace std;

string solution(int num) {
    string answer = "";
    answer = ((num % 2) == 0) ? "Even" : "Odd";
    return answer;
}
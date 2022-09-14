#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 짝수와 홀수

using namespace std;

string solution(int num) {
    string answer = "";
    answer = ((num % 2) == 0) ? "Even" : "Odd";
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> solution(vector<int> answers) {
    vector<int> answer;
    // 수포자 정답 패턴
    vector<int> student1 = { 1, 2, 3, 4, 5 };
    vector<int> student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<int> scores = { 0, 0, 0 };


    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == student1[i % student1.size()]) scores[0]++;
        if (answers[i] == student2[i % student2.size()]) scores[1]++;
        if (answers[i] == student3[i % student3.size()]) scores[2]++;
    }

    // 최댓값 저장
    int max_score = *max_element(scores.begin(), scores.end());

    // 최댓값과 같은 점수를 가진 학생 번호 저장
    for (int i = 0; i < 3; ++i)
    {
        if (scores[i] == max_score)
        {
            answer.push_back(i + 1);
        }
    }



    return answer;
}
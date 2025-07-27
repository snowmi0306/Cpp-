#include <iostream>
#include <string>
using namespace std;

int main(){
    string id; // 학번
    string subject[3] = { "국어", "영어", "수학" }; // 과목
	int scores[3] = { 0, 0, 0 }; // 점수

	// 사용자로부터 학번과 과목 점수 입력 받기
    cout << "학번을 입력하세요 >> ";
    cin >> id;

    for (int i = 0; i < 3; i++) {
        cout << subject[i] << ": ";
		cin >> scores[i];
    }


    // 평균 계산
	double average = (scores[0] + scores[1] + scores[2]) / 3.0; 

	// 결과 출력
    if (average < 60 || scores[0] < 40 || scores[1] < 40 || scores[2] < 40) {
        cout << "불합격입니다. 추가 학습이 필요합니다." << endl;
    }
    else if(average>=95 && scores[0]>= 90 && scores[1] >= 90 && scores[2] >= 90) {
        cout << "최우수 장학금 대상입니다!" << endl;
    }
    else if (average >= 85) {
        cout << "우수 장학금 대상입니다!" << endl;
    }
    else {
		cout << "합격입니다. 다음 시험에는 더 좋은 성적을 기대합니다!" << endl;
    }

    // 특별 규칙
    if (scores[2] > scores[0] && scores[2] > scores[1]) {
        cout << "수학에 특별한 재능이 있군요!" << endl;
    }

    return 0;
}
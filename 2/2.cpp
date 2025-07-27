// 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

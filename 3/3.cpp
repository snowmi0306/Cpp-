// 3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
	string password; // 비밀번호
	char forbidden_chars[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')' }; // 금지 문자 목록
	bool isValid = true; // 규칙 위반 여부

	cout << "비밀번호를 입력하세요: ";
	cin >> password;

	// 비밀번호 길이 검사
	if (password.length() != 8) {
		cout << "길이가 8이 아니면 \"8자리로 입력해야 합니다!\"" << endl;
		return 0;
	}

	// 1.첫 문자는 대문자 검사
	if(!(password[0] >= 'A' && password[0] <= 'Z')) {
		cout << "첫 문자가 대문자가 아닙니다!" << endl;
		isValid = false;
	}

	// 2.마지막 문자는 숫자 검사
	if(!(password[7]>='0' && password[7] <= '9')) {
		cout << "마지막 문자가 숫자가 아닙니다!" << endl;
		isValid = false;
	}

	// 3.특수 문자 포함 검사
	for (int i = 0; i < password.length(); i++) {
		for (int j = 0; j < sizeof(forbidden_chars); j++) {
			if(password[i] == forbidden_chars[j]) {
				cout << "특수 문자가 포함되어 있습니다!" << endl;
				isValid = false;
			}
		}
	}

	// 4.4번째와 5번째 문자 동일 검사
	if(password[3] == password[4]) {
		cout << "4번째와 5번째 문자가 동일합니다!" << endl;
		isValid = false;
	}

	// 모든 규칙을 통과한 경우
	if (isValid == true) cout << "사용 가능한 비밀번호입니다." << endl;

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

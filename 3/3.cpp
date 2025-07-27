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
				break;
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
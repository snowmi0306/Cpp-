#include <iostream>
#include <string>
using namespace std;

int main(){
	string name; // 이름
	int str, dex, intg; // 능력치
	const int MAX_POINT = 40; // 능력치 총합의 최대값

	cout << "캐릭터 능력치 생성기\n\n";

	cout << "캐릭터 이름: ";
	cin >> name;

	cout << "\n3개의 능력치를 입력하세요 (정수 범위: 1~20)\n";

	cout << "힘 : ";
	cin >> str;

	cout << "민첩성: ";
	cin >> dex;
	
	cout << "지능: ";
	cin >> intg;

	if (str < 1 || str > 20 || dex < 1 || dex > 20 || intg < 1 || intg > 20) {
		cout << "능력치는 1~20 사이의 정수여야 합니다." << endl;
		return 0;
	}

	// 3개의 능력치의 합이 MaxPoint를 초과하면 프로그램 종료
	if ((str + dex + intg) > MAX_POINT) {
		cout << "\n능력치 총합이 " << MAX_POINT << "을 초과했습니다! 프로그램을 다시 시작해주세요." << endl;
		return 0;
	}


	// 파생 능력치 계산
	int hp = str * 8 + 50; // 체력
	int magic = intg * 12 + 20; // 마력
	cout << "\n체력: " << hp << " 마력: " << magic << endl;


	// 캐릭터 최종 타입 결정
	if (str > 15 && intg < 10) {
		cout << "강력한 힘을 바탕으로 한 전사 타입입니다." << endl;
	}
	else if (intg > 15 && str < 10) {
		cout << "높은 지능을 바탕으로 한 마법사 타입입니다." << endl;
	}
	else {
		cout << "균형 잡힌 능력치를 가진 만능형 타입입니다." << endl;
	}

    return 0;
}
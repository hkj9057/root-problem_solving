#include <iostream>
using namespace std;

int main() {
    unsigned short num;
    cin >> num; // 입력 받음

    if (num > 65535) {
        cout << "입력한 숫자가 너무 큽니다." << endl;
        return 0;
    }

    unsigned short reverse_num = 0;
    while (num != 0) {
        reverse_num = reverse_num * 10 + num % 10;
        num /= 10;
    }

    if (reverse_num > 65535) {
        cout << "뒤집은 숫자가 너무 큽니다." << endl;
        return 0;
    }

    cout << reverse_num << endl; // 뒤집은 숫자 출력
    return 0;
}

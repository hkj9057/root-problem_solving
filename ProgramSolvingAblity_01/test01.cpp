#include <iostream>
using namespace std;

int main() {
    unsigned short num;
    cin >> num; // �Է� ����

    if (num > 65535) {
        cout << "�Է��� ���ڰ� �ʹ� Ů�ϴ�." << endl;
        return 0;
    }

    unsigned short reverse_num = 0;
    while (num != 0) {
        reverse_num = reverse_num * 10 + num % 10;
        num /= 10;
    }

    if (reverse_num > 65535) {
        cout << "������ ���ڰ� �ʹ� Ů�ϴ�." << endl;
        return 0;
    }

    cout << reverse_num << endl; // ������ ���� ���
    return 0;
}

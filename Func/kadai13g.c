#include<stdio.h>

int main(int argc, char* argv[]) {
    char data = argv[1][0]; // �R�}���h���C����������char�^�̃f�[�^���󂯎��
    int i, moji;

    if (data == 'H' || data == 'h') {
        for (i = 0, moji = 'A'; i < 5; i++, moji++) {
            printf("%c = 0x%x\n", moji, moji);
        }
    }
    else {
        for (i = 0, moji = 'A'; i < 5; i++, moji++) {
            printf("%c = %d\n", moji, moji);
        }
    }

    return 0;
}
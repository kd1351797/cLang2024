#include <stdio.h>
main()
{
	int h, m, s;

	printf("�b������� : ");
	scanf("%d", &s);

	if (s >= 0)
	{
		if (s <= 5000)
		{
			h = s / 3600;
			m = s % 3600 / 60;
			s = s % 3600 % 60;
			printf("%d����%d��%d�b", h, m, s);
		}
		else
		{
			printf("���̓G���[�B5000�ȉ��̐����ŋL�����Ă��������B");
		}
	}
	else
	{
		printf("�}�C�i�X�̓G���[�ł��B");
	}
}
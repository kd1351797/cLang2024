#include<stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[] = { { 1,"�k�C��",NULL},
								{ 2,"�X��",NULL},
								{ 3,"��茧",NULL},
								{ 4,"�{�錧",NULL},
								{ 5,"�H�c��",NULL},
								{ 6,"�R�`��",NULL},
								{ 7,"������",NULL},
								{ DATA_END,"",NULL }, };
	struct ken* p, * wp;

	//�����N�̐ݒ�
	p = wp = ken_data;
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//�X����next�����o�l���{�錧�̃A�h���X�ɕύX
	p = ken_data;			//�|�C���^p��ken_data�̐擪�A�h���X����
	p++;				//�|�C���^p���g���ĐX���̃A�h���X�����߂�
	p->next = p + 2;		//�X����p->next�ɋ{�錧�̃A�h���X����

	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
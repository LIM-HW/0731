#include <stdio.h>
#define ACC_ID1 "test"
#define ACC_ID2 "user"
#define ACC_PW {1144,1234}

int INPUT_ID() {

	char* input_id[20];
	printf("ID�� �Է��Ͻÿ�: ");
	scanf(" %s", input_id);
}
int INPUT_PW() {

	int input_pw;
	printf("PW�� �Է��Ͻÿ�: ");
	scanf("%d", &input_pw);
}


int LOGIN_CHECK() {

	int count = 0;
	char* cmd_id = INPUT_ID();
	int cmd_pw = INPUT_PW();
	char* acc_id[2] = { 0, };
	acc_id[0] = ACC_ID1;
	acc_id[1] = ACC_ID2;
	int acc_pw[2] = ACC_PW;
	do {
		if (acc_id[0] = cmd_id) {

			if (acc_pw[0] != cmd_pw) {
				printf("���̵� �߸��Է��ϼ̽��ϴ�.\n");
				count++;
			}
			else if (acc_pw[0] == cmd_pw) {
				printf("�α��� �Ǿ����ϴ�.\n");
				break;
			}
		}
		else if (acc_id[1] = cmd_id) {
			if (acc_pw[1] != cmd_pw) {
				printf("���̵� �߸��Է��ϼ̽��ϴ�.\n");
				count++;
			}
			else if (acc_pw[1] == cmd_pw) {
				printf("�α��� �Ǿ����ϴ�.\n");
				break;
			}
		}
		else
		printf("���̵� �߸��Է��ϼ̽��ϴ�.\n");
		count++;
	} while (count < 6);
}

int INPUT(void)
{
	int num1;
	printf("1~50���� ������ �Է����ּ���: ");
	scanf("%d", &num1);
	if (num1 <= 50 && num1>=1)
		return num1;
	else 
		printf("���ڸ� �߸��Է��ϼ̽��ϴ�.\n");
	
}

void MULTIPLY(int inp_num)
{
	int result = 0;
	int i;

	for (i = 1; i <= 128; i++)
	{
		result = inp_num * i;
		printf("%d * %d = %d \n", inp_num, i, result);
	}
	return;
}
int main(void)
{
	LOGIN_CHECK();
	
	int ret_num1 = 0;
	int ret_num2 = 0;

	ret_num1 = INPUT();
	ret_num2 = INPUT();

	MULTIPLY(ret_num1);
	MULTIPLY(ret_num2);

	return 0;
}
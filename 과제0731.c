#include <stdio.h>
#define ACC_ID1 "test"
#define ACC_ID2 "user"
#define ACC_PW {1144,1234}

int INPUT_ID() {

	char* input_id[20];
	printf("ID를 입력하시오: ");
	scanf(" %s", input_id);
}
int INPUT_PW() {

	int input_pw;
	printf("PW를 입력하시오: ");
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
				printf("아이디를 잘못입력하셨습니다.\n");
				count++;
			}
			else if (acc_pw[0] == cmd_pw) {
				printf("로그인 되었습니다.\n");
				break;
			}
		}
		else if (acc_id[1] = cmd_id) {
			if (acc_pw[1] != cmd_pw) {
				printf("아이디를 잘못입력하셨습니다.\n");
				count++;
			}
			else if (acc_pw[1] == cmd_pw) {
				printf("로그인 되었습니다.\n");
				break;
			}
		}
		else
		printf("아이디를 잘못입력하셨습니다.\n");
		count++;
	} while (count < 6);
}

int INPUT(void)
{
	int num1;
	printf("1~50까지 정수를 입력해주세요: ");
	scanf("%d", &num1);
	if (num1 <= 50 && num1>=1)
		return num1;
	else 
		printf("숫자를 잘못입력하셨습니다.\n");
	
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
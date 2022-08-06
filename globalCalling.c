/*globalCalling.c*/
#include<stdio.h>
#include<string.h>

extern int counter(char* a);

int main() {
	char array[30];
	int flag = 1;
	int result;
	while (flag) {
		printf("请输入任意区分大小写的字符串(至少15个字符)：\n");
		scanf("%s", array);
		if (strlen(array) > 15) {
			flag = 0;
		}
		else printf("输入字符不足！请重新输入！\n");
	}
    result=counter(array);
   	printf("一共有%d个小写字母！", result);
	return 0;
}


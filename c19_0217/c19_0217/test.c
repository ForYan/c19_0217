#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ʵ�ֲ�������Ϸ:������Զ�����һ���Զ����֣����û�����һ������
//���������ֺͼ����׼���õ����ֲ���ͬ�����м������ʾ���˻��ǵ��ˡ�
int Menu(){
	printf("############################\n");
	printf("         1.��ʼ��Ϸ         \n");
	printf("         0.������Ϸ         \n");
	printf("############################\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}
//void��ʾ�ú����޷���ֵ������ĸ�庯�����治�ܶ����int choice=Game�������͡�
void Game(){
	//���ü��������һ�������������1-100��
	int result = rand() % 100 + 1;
	//��ʾ�û�����һ���²�����
	//�����û�������ͼ���������������������ʾ�û��Ǹ��ˣ����ˣ����Ƕ��ˡ�
	while (1){
		printf("������һ���²����֣�");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("����\n");
		}
		else if (num > result){
			printf("����\n");
		}
		else{
			printf("��ϲ�������\n");
			break;
		}

	}
	//����´��ˣ���ȻҪ��ʾ�û�����²�����֡�
}
int main(){
	//1.����һ��ѭ��
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("��Ϸ�˳�\n");
			break;
		}
		else{
			printf("������������\n");
		}
	}
	//2.��ӡһ���˵������û�ѡ���ǿ�ʼ��Ϸ�������˳���Ϸ��
	//3.����û�ѡ���˳�����ô��Ϸ����
	//4.����û�ѡ��ʼ��Ϸ���ͽ���������Ϸ����
	//5.��ʾ�û��������룬�û�����һ������
	system("pause");
	return 0;
}
//����һ�����ַ�����
//int main(){
//	int str[] = { 1, 2, 3, 4, 5 };
//	int findnum = 4;
//	int left = 0;
//	int right = sizeof(str) / sizeof(str[0]) - 1;
//	int mid = 0;
//	while (left <= right){
//		 mid = (left + right) / 2;
//		if (findnum < str[mid]){
//			right = mid - 1;//-1��Ϊ���ٳ���str��mid�����Ԫ��
//		}
//		else if(findnum>str[mid]){
//			left = mid + 1;
//		}
//		else{
//			break;
//		}
//	}
//	if (left <= right){
//		printf("��Ԥ��Ԫ�ص��±�Ϊ��%d\n",mid);
//	}
//	else{
//		printf("û�ҵ���Ԥ��Ԫ��\n");
//	}
//	system("pause");
//	return 0;
//}
//��������ʵ�����ֲ��ҹ��ܣ�����һ����������飨���򣩡�
//�ٸ���һ�����֣�����������Ƿ���ڣ�������ڣ����������±ꡣ
//int main(){
//	int str[] = { 1, 2, 3, 4, 5 };
//	int findnum = 4;
//	int i = 0;
//	for (i = 0; i < sizeof(str)/sizeof(str[0]); ++i){
//		if (findnum == str[i]){
//			break;
//		}
//	}
//	if (i == 5){
//		printf("û�ҵ�Ԥ������");
//	}
//	else{
//		printf("�ҵ��ˣ������±꣺%d", i);
//	}
//	system("pause");
//	return 0;
//}
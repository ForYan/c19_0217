#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//实现参数字游戏:计算机自动生成一个自动数字，由用户输入一个数字
//如果这个数字和计算机准备好的数字不相同，就有计算机提示高了还是低了。
int Menu(){
	printf("############################\n");
	printf("         1.开始游戏         \n");
	printf("         0.结束游戏         \n");
	printf("############################\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}
//void表示该函数无返回值，所以母体函数里面不能定义成int choice=Game这种类型。
void Game(){
	//先让计算机产生一个随机的整数（1-100）
	int result = rand() % 100 + 1;
	//提示用户输入一个猜测数字
	//根据用户的输入和计算机产生的随机整数，提示用户是高了，低了，还是对了。
	while (1){
		printf("请输入一个猜测数字：");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("低了\n");
		}
		else if (num > result){
			printf("高了\n");
		}
		else{
			printf("恭喜您答对了\n");
			break;
		}

	}
	//如果猜错了，仍然要提示用户输入猜测的数字。
}
int main(){
	//1.创建一个循环
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("游戏退出\n");
			break;
		}
		else{
			printf("您的输入有误\n");
		}
	}
	//2.打印一个菜单，让用户选择是开始游戏，还是退出游戏。
	//3.如果用户选择退出，那么游戏结束
	//4.如果用户选择开始游戏，就进入具体的游戏环节
	//5.提示用户进行输入，用户输入一个数字
	system("pause");
	return 0;
}
//方法一：二分法查找
//int main(){
//	int str[] = { 1, 2, 3, 4, 5 };
//	int findnum = 4;
//	int left = 0;
//	int right = sizeof(str) / sizeof(str[0]) - 1;
//	int mid = 0;
//	while (left <= right){
//		 mid = (left + right) / 2;
//		if (findnum < str[mid]){
//			right = mid - 1;//-1是为了刨除掉str【mid】这个元素
//		}
//		else if(findnum>str[mid]){
//			left = mid + 1;
//		}
//		else{
//			break;
//		}
//	}
//	if (left <= right){
//		printf("该预期元素的下标为：%d\n",mid);
//	}
//	else{
//		printf("没找到该预期元素\n");
//	}
//	system("pause");
//	return 0;
//}
//方法二：实现数字查找功能，给定一个有序的数组（升序）。
//再给定一个数字，看这个数字是否存在，如果存在，返回数组下标。
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
//		printf("没找到预期数字");
//	}
//	else{
//		printf("找到了！数字下标：%d", i);
//	}
//	system("pause");
//	return 0;
//}
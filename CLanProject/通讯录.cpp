#include <iostream>

#include <string>
using namespace std;
#define MAX 1000

//菜单界面
void showMenu()
{
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
	cout << "**********************" << endl;
}


//联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};


//通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组 创建结构体数组
	struct Person presonArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
//传入结构体指针
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否到达上限,满了就不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->presonArray[abs->m_Size].m_Name = name;
		//性别
		int sex;
		cout << "请输入性别:（男输入1，女输入0）" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				abs->presonArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "重新输入！！（男输入1，女输入0）" << endl;
		}
		abs->presonArray[abs->m_Size].m_Sex = sex;
		//年龄
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->presonArray[abs->m_Size].m_Age = age;
		//电话
		string phone;
		cout << "请输入电话号码" << endl;
		cin >> phone;
		abs->presonArray[abs->m_Size].m_Phone = phone;
		//住址
		string addr;
		cout << "请输入地址" << endl;
		cin >> addr;
		abs->presonArray[abs->m_Size].m_Addr = addr;
		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");//按任意键继续
		system("cls");//清屏操作
	}
};

//2.显示所有联系人
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空，请尝试添加联系人" << endl;
	}
	else
	{
		for (int i = 0; i < (abs->m_Size); i++)
		{

			cout << "姓名：" << abs->presonArray[i].m_Name << "\t";
			cout << "性别：" << (abs->presonArray[i].m_Sex == 1 ? "男"; "女") << "\t";
			cout << "年龄：" << abs->presonArray[i].m_Age << "\t";
			cout << "电话：" << abs->presonArray[i].m_Phone << "\t";
			cout << "地址：" << abs->presonArray[i].m_Addr << endl;
			system("pause");
			system("cls");
		}
	}
};

//3.删除联系人
int main()
{
	//创建一个通讯录的结构体变量
	Addressbooks abs;

	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0; //创建用户输入变量

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//利用地址传递,在形参中修饰实参
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			break;
		case 4://查找联系人
			break;
		case 5://修改联系人
			break;
		case 6://清空联系人
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;
		}
	}
	system("pause");
	return 0;
}
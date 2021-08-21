#include <iostream>

#include <string>
using namespace std;
#define MAX 1000

//�˵�����
void showMenu()
{
	cout << "**********************" << endl;
	cout << "*****1.�����ϵ��*****" << endl;
	cout << "*****2.��ʾ��ϵ��*****" << endl;
	cout << "*****3.ɾ����ϵ��*****" << endl;
	cout << "*****4.������ϵ��*****" << endl;
	cout << "*****5.�޸���ϵ��*****" << endl;
	cout << "*****6.�����ϵ��*****" << endl;
	cout << "*****0.�˳�ͨѶ¼*****" << endl;
	cout << "**********************" << endl;
}


//��ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};


//ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������ �����ṹ������
	struct Person presonArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
//����ṹ��ָ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ񵽴�����,���˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->presonArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex;
		cout << "�������Ա�:��������1��Ů����0��" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				abs->presonArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�������룡����������1��Ů����0��" << endl;
		}
		abs->presonArray[abs->m_Size].m_Sex = sex;
		//����
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->presonArray[abs->m_Size].m_Age = age;
		//�绰
		string phone;
		cout << "������绰����" << endl;
		cin >> phone;
		abs->presonArray[abs->m_Size].m_Phone = phone;
		//סַ
		string addr;
		cout << "�������ַ" << endl;
		cin >> addr;
		abs->presonArray[abs->m_Size].m_Addr = addr;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");//�����������
		system("cls");//��������
	}
};

//2.��ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ��볢�������ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < (abs->m_Size); i++)
		{

			cout << "������" << abs->presonArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->presonArray[i].m_Sex == 1 ? "��"; "Ů") << "\t";
			cout << "���䣺" << abs->presonArray[i].m_Age << "\t";
			cout << "�绰��" << abs->presonArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->presonArray[i].m_Addr << endl;
			system("pause");
			system("cls");
		}
	}
};

//3.ɾ����ϵ��
int main()
{
	//����һ��ͨѶ¼�Ľṹ�����
	Addressbooks abs;

	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0; //�����û��������

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ����,���β�������ʵ��
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			break;
		case 4://������ϵ��
			break;
		case 5://�޸���ϵ��
			break;
		case 6://�����ϵ��
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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
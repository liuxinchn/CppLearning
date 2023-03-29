#include <iostream>
#include <string>

using namespace std;
#define MAX 1000

// Person Struct
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

// Addressbooks Struct
struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};

// �˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1. �����ϵ�� *****" << endl;
	cout << "***** 2. ��ʾ��ϵ�� *****" << endl;
	cout << "***** 3. ɾ����ϵ�� *****" << endl;
	cout << "***** 4. ������ϵ�� *****" << endl;
	cout << "***** 5. �޸���ϵ�� *****" << endl;
	cout << "***** 6. �����ϵ�� *****" << endl;
	cout << "***** 0. �˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "��ϵ���������޷����" << endl;
	}
	else {
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		int sex;
		cout << "�������Ա�" << endl;
		cin >> sex;
		abs->personArray[abs->m_Size].m_Sex = sex;
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		string phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		string addr;
		cout << "�������ַ" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

void printPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����\t" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�\t" << abs->personArray[i].m_Sex << "\t";
			cout << "����\t" << abs->personArray[i].m_Age << "\t";
			cout << "�绰\t" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ\t" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int main()
{
	struct Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;

	while (true)
	{
		// �˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 1. �����ϵ��
			addPerson(&abs);
			break;
		case 2: // 2. ��ʾ��ϵ��
			printPerson(&abs);
			break;
		case 3: // 3. ɾ����ϵ��
			break;
		case 4: // 4. ������ϵ��
			break;
		case 5: // 5. �޸���ϵ��
			break;
		case 6: // 6. �����ϵ��
			break;
		case 0: // 0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;
		}
	}

	system("pause"); // �밴���������...
	return 0;
}
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

// 菜单界面
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1. 添加联系人 *****" << endl;
	cout << "***** 2. 显示联系人 *****" << endl;
	cout << "***** 3. 删除联系人 *****" << endl;
	cout << "***** 4. 查找联系人 *****" << endl;
	cout << "***** 5. 修改联系人 *****" << endl;
	cout << "***** 6. 清空联系人 *****" << endl;
	cout << "***** 0. 退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "联系人已满，无法添加" << endl;
	}
	else {
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		int sex;
		cout << "请输入性别" << endl;
		cin >> sex;
		abs->personArray[abs->m_Size].m_Sex = sex;
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		string phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		string addr;
		cout << "请输入地址" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "添加成功" << endl;
	}
	system("pause");
	system("cls");
}

void printPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名\t" << abs->personArray[i].m_Name << "\t";
			cout << "性别\t" << abs->personArray[i].m_Sex << "\t";
			cout << "年龄\t" << abs->personArray[i].m_Age << "\t";
			cout << "电话\t" << abs->personArray[i].m_Phone << "\t";
			cout << "地址\t" << abs->personArray[i].m_Addr << endl;
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
		// 菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 1. 添加联系人
			addPerson(&abs);
			break;
		case 2: // 2. 显示联系人
			printPerson(&abs);
			break;
		case 3: // 3. 删除联系人
			break;
		case 4: // 4. 查找联系人
			break;
		case 5: // 5. 修改联系人
			break;
		case 6: // 6. 清空联系人
			break;
		case 0: // 0. 退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;
		}
	}

	system("pause"); // 请按任意键继续...
	return 0;
}
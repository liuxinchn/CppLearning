#include <iostream>
using namespace std;
#include <string>

//��ģ��
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};
void test01()
{
	// ָ��NameType Ϊstring���ͣ�AgeType Ϊ int����
	Person<string> P1("�����", 999);
	P1.showPerson();
}
int main() {
	test01();
	system("pause");
	return 0;
}

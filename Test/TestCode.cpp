#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void MyPrint(int val)
{
	cout << val << endl;
}
void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	vector<int>::iterator pBegin = v.begin();//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
	vector<int>::iterator pEnd = v.end();//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	//第一种遍历方式：
	while (pBegin != pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}
	//第二种遍历方式：
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;
	//第三种遍历方式：
	//使用STL提供标准遍历算法 头文件 algorithm
	for_each(v.begin(), v.end(), MyPrint);
}
int main() {
	test01();
	system("pause");
	return 0;
}
#include <iostream> 
#include <vector> 
#include <array> 
using namespace std;
int main()
{
	std::vector<int> demo{1,2};
	//��һ�ָ�ʽ�÷�
	demo.insert(demo.begin() + 1, 3);//{1,3,2}
	
	//�ڶ��ָ�ʽ�÷�
	demo.insert(demo.end(), 2, 5);//{1,3,2,5,5}
	
	//�����ָ�ʽ�÷�
	std::array<int,3>test{ 7,8,9 };
	demo.insert(demo.end(), test.begin(), test.end());//{1,3,2,5,5,7,8,9}
	
	//�����ָ�ʽ�÷�
	demo.insert(demo.end(), { 10,11 });//{1,3,2,5,5,7,8,9,10,11}
	
	for (int i = 0; i < demo.size(); i++) {
		cout << demo[i] << " ";
	}
	return 0;
}

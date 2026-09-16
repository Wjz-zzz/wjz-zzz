#include <iostream>
using namespace std;
int main() 
{
	double r, area;
	cout << "请输入圆的半径: ";
	cin >> r;
	area = 3.14159 * r * r;
	cout << "圆的面积：" << area << endl;
	return 0; 
}

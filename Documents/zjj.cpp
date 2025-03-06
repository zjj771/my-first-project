#include<iostream>
using namespace std;
int main(){
int a= 5;
int b =3;
//int result = a&b;
//a + b == 2 * (a & b) + (a ^ b);
//cout<<result<<endl;
//cout<<a+b<<endl;
int bit=(a^b)<=(a+b);
cout<<bit<<endl;

	system("pause");
	return 0;
		
}

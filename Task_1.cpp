#include<iostream>
using namespace std;
class operations{
	public:
		int x, y;
		void add(int x,int y)
		{
			cout<<" Addition "<<":- "<< x + y <<endl;
		}
		void sub(int x,int y)
		{
			cout<<" Substraction "<<":- "<< x - y <<endl;
		}
		void multiply(int x,int y)
		{
			cout<<" Multiplication "<<":- "<< x * y <<endl;
		}
		void divide(int x,int y)
		{
			cout<<" Division "<<":- "<< x / y <<endl;
		}
		void modulus(int x,int y)
		{
			cout<<" Modulus "<<":- "<< x % y <<endl;
		}	
};
int main()
{
	operations set1;
	int x, y;
	cin>>x;
	cin>>y;
	set1.add(x, y);
	set1.sub(x, y);
	set1.multiply(x, y);
	set1.divide(x, y);
	set1.modulus(x, y);
	return 0;
}

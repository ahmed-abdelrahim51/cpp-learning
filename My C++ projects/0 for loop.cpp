#include <iostream>
   using namespace std;
int main()
{
	int grades[4]={50,60,70,80};
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum=sum+grades[i];
		cout<<"total sum"<<sum<<endl;
	}
	return 0;
}
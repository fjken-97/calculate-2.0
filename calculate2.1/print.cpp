#include"calculate.h"
#include <iostream>
using namespace std;

fstream file1;

void print(int count)
{
		
	cout<<"******************************************************************************"<<endl<<endl;	
	
	file1<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[4] - 您正确回答的题数为 : "<<count<<endl<<endl;
	
	file1<<"[4] - 您正确回答的题数为 : "<<count<<endl<<endl;

	cout<<"    - 再接再励，期待你下次更好的表现！"<<endl<<endl; 
	
	file1<<"    - 再接再励，期待你下次更好的表现！"<<endl<<endl;
}

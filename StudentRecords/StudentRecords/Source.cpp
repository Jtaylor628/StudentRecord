#include <iostream>
using namespace std;
#include <string>
#include <fstream>
struct records
{
	string student_name;
	int quiz1;
	int quiz2;
	int exam1;
	int exam2;


};
int main(){

	records student1;

	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("studentrecords.txt");
	if (in_stream.fail())
	{

		cout << "Input file opening failed.\n"; 
	}

	in_stream.close();
	out_stream.close();

	return 0;
	
}

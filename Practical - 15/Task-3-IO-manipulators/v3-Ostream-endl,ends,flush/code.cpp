#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
int main()
{
	ofstream write;
	write.open("file.txt");
    for(int n=0;n<10;n++)
    {
        write<<n<<ends;
        write<<n+1<<endl;
        write.flush();
    }
    write.close();
	return 0;
}

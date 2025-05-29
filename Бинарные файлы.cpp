#include <iostream>
#include <fstream>

using namespace std;
int main() {

	//int x = 54434325;
	//ofstream fout("txt.bin",ios_base::binary);
	//fout.write((char*)&x, sizeof(int));
	//fout.close();
	int tmp;
	ifstream fout("txt.bin", ios_base::binary);
	fout.read((char*)&tmp, sizeof(int));
	fout.close();
	cout << tmp << endl;
	

	return 0;
}
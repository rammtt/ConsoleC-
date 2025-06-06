#include <iostream>
#include <fstream>
#include <cctype> 
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string filename;
    cout << "Введите имя файла: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string content;
    char ch;
    int replaceCount = 0;

    
    while (inputFile.get(ch)) {
        if (islower(ch)) {
            ch = toupper(ch);
            replaceCount++;
        }
        content += ch;
    }
    inputFile.close();

    
    ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        cerr << "Ошибка записи в файл!" << endl;
        return 1;
    }
    outputFile << content;
    outputFile.close();

    cout << "Файл успешно обработан." << endl;
    cout << "Количество замен: " << replaceCount << endl;

    
  

    return 0;
}










//int main() {
	//std::ofstream outFile("myFile.txt");

	//if (!outFile.is_open()) {
		//std::cerr << "Oshibka" << std::endl;
		//return 1;

	//}
	//outFile << "привет мир!" << std::endl;
	//outFile.close();

	//std::cout << "Zapisany" << std::endl;
	//return 0;
//}
	

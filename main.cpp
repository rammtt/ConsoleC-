#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>

const size_t BUFFER_SIZE = 1024;

int main() {

    std::string filename;
    std::cout << "filename: ";
    std::cin >> filename;

    std::ifstream inputFile(filename, std::ios::binary);
    if (!inputFile.is_open()) {
        std::cerr << "ne otkr " << filename << std::endl;
        return 1;
    }

    std::vector<char> buffer(BUFFER_SIZE);
    std::string outputContent;
    int count = 0;


    while (inputFile.read(buffer.data(), BUFFER_SIZE) || inputFile.gcount() > 0) {
        size_t bytesRead = inputFile.gcount();


        for (size_t i = 0; i < bytesRead; ++i) {
            if (islower(buffer[i])) {
                buffer[i] = toupper(buffer[i]);
                count++;
            }
        }


        outputContent.append(buffer.data(), bytesRead);
    }

    inputFile.close();


    std::cout << "izmene:\n" << outputContent << std::endl;
    std::cout << "kol-vo zamen: " << count << std::endl;

    return 0;
}

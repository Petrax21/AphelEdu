#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";
    std::string filePath = folderPath + "/mustafa.txt";


    std::ifstream inputFile(filePath);
    if (inputFile.is_open()) {

        std::stringstream fileContentStream;
        fileContentStream << inputFile.rdbuf();
        std::string fileContent = fileContentStream.str();


        std::istringstream contentLines(fileContent);
        std::string line;
        std::cout << "Dosya İçeriği:" << std::endl;
        while (std::getline(contentLines, line)) {

            size_t delimiterPos = line.find(':');
            if (delimiterPos != std::string::npos) {

                std::string value = line.substr(delimiterPos + 1);
                std::cout << value << std::endl;
            }
        }
    } else

    return 0;
}
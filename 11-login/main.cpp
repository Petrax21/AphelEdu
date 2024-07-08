#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>

int main() {
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";
    std::string filePath = folderPath + "/mustafa.txt";

    std::ifstream inputFile(filePath);
    if (inputFile.is_open()) {
        std::stringstream fileContentStream;
        fileContentStream << inputFile.rdbuf();
        auto fileContent = fileContentStream.str();
        std::cout << "Dosya İçeriği: " << std::endl << fileContent << std::endl;
    }
    return 0;
}

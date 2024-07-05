#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
    // Klasör
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";

    auto isFolderExists = std::filesystem::exists(folderPath);

    if (isFolderExists == 0) {
        std::filesystem::create_directory(folderPath);
    } else {
        std::filesystem::remove(folderPath);
    }


    // Dosya
    std::string filePath = "/home/mustafa/Downloads/abc/test-file";

    auto isFileExists = std::filesystem::exists(filePath);

    if (isFileExists == 0) {
        std::ofstream file(filePath);

        file << "deneme";

        file.close();
    } else {
        std::ifstream file(filePath);

        std::stringstream fileContentStream;

        fileContentStream << file.rdbuf();

        auto fileContent = fileContentStream.str();

        std::cout << "Dosya İçeriği: " << fileContent << std::endl;

        std::filesystem::remove(filePath);
    }


    return 0;
}

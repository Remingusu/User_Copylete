#include "src/headers/users_lister.h"
#include "src/headers/copy_paste.h"
#include <iostream>


int main()
{
    int i = 0;
    std::vector<std::string> foldersList = getList();
    for (const auto& folderName : foldersList)
    {
        ++i;
        std::cout << i << " " << folderName << std::endl;
    }

    std::vector<std::string> foldersToTreat = {"C:/Users/Leween"};

    std::string toPath;
    std::cout << "Path to paste: ";
    std::cin >> toPath;

    bool deleteAfter = false;
    std::cout << "Delete folder after copy ?" << std::endl;
    std::cin >> deleteAfter;

    copyPaste(foldersToTreat, toPath, deleteAfter);

    return 0;
}

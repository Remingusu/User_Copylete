#include "../headers/copy_paste.h"
#include <filesystem>
#include <string>
#include <vector>
#include <iostream>

void copyPaste(std::vector<std::string> &foldersRoot, std::string &toPath, bool deleteFolder)
{
    for (std::string &folderRoot : foldersRoot)
    {
        std::filesystem::copy();
        std::cout << "Copy !" << std::endl;
        bool confirm;
        std::cout << "Confirm delete ?" << std::endl;
        std::cin >> confirm;
        /*if (deleteFolder && confirm)
        {
            std::filesystem::remove(folderRoot);
            std::cout << "Delete !" << std::endl;
        }*/
    }
}

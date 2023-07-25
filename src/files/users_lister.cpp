#include "../headers/users_lister.h"
#include <filesystem>
#include <vector>
#include <string>

std::vector<std::string> getList()
{
    std::vector<std::string> foldersList;
    for (const auto& folderName :  std::filesystem::directory_iterator("C:\\Users"))
    {
        if (std::filesystem::is_directory(folderName))
        {
            foldersList.push_back(folderName.path().generic_string());
        }
    }
    std::remove(foldersList.begin(), foldersList.end(), "C:/Users/Default");
    std::remove(foldersList.begin(), foldersList.end(), "C:/Users/Default User");
    std::remove(foldersList.begin(), foldersList.end(), "C:/Users/All Users");
    std::remove(foldersList.begin(), foldersList.end(), "C:/Users/Public");
    std::remove(foldersList.begin(), foldersList.end(), "C:/Users/defaultuser100000");


    for (int i = 0; i < 5; i++)
    {
        foldersList.pop_back();
    }

    return foldersList;
}

#include <iostream>
#include <filesystem>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> folder_list;
    for (const auto& foldername :  std::filesystem::directory_iterator("C:\\Users"))
    {
        if (std::filesystem::is_directory(foldername))
        {
            folder_list.push_back(foldername.path().generic_string());
        }
    }
    std::remove(folder_list.begin(), folder_list.end(), "C:/Users/Public");
    std::remove(folder_list.begin(), folder_list.end(), "C:/Users/Default");
    std::remove(folder_list.begin(), folder_list.end(), "C:/Users/Default User");
    std::remove(folder_list.begin(), folder_list.end(), "C:/Users/All Users");

    for (const auto& foldername : folder_list)
    {
        std::cout << foldername << std::endl;
    }

    return 0;
}

#include "src/headers/users_lister.h"
#include <iostream>


int main()
{
    std::vector<std::string> foldersList = getList();
    for (const auto& folderName : foldersList)
    {
        std::cout << folderName << std::endl;
    }

    return 0;
}

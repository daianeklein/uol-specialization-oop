#include <iostream>
#include <map>
#include <string>
#include <vector>

// int main()
//     {
//    std::vector<std::string> strings{"one", "two", "three"};

//    for (std::string s : strings)
//    {
//        std::cout << s << std::endl;
//    }

//     }

int main()
{
    std::vector<std::string> strings{"one", "two", "three"};

   for (unsigned int i = 0; i<strings.size(); i++)
   {
       std::cout << strings.at(i) << std::endl;
   }
}

// int main()
// {
//     std::vector<std::string> strings{"one", "two", "three"};

//    for (unsigned int i = 0; i<strings.length(); i++)
//    {
//        std::cout << strings[i] << std::endl;
//    }
// }

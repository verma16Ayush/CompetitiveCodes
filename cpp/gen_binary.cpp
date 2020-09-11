#include <iostream>
#include <fstream>
#include <bitset>

int main()
{
    std::ofstream of("100_binaries");
    if(of.is_open())
    {
        for (int i = 0; i < 101; i++)
        {
            std::string bin = std::bitset<7>(i).to_string();
            of << i << " -> " <<bin << std::endl;
        }
        of.close();
    }
    return 0;
}
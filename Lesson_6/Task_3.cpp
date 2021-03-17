#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>



int main(int argc, char** argv)
{
    if(argc!=3)
    {
        std::cout<<"Error!";
        return -1;
    }

    std::string line;
    std::ifstream ifile (argv[1]);
    std::string word = argv[2];
    transform(word.begin(), word.end(), word.begin(), toupper);
    int n;

    while(!ifile.eof())
    {
        std::getline(ifile,line);
        transform(line.begin(), line.end(), line.begin(), toupper);
        n = line.find(word);
        if(n!=-1)
        {
            std::cout << "yes word!";
            break;
        }

    }

    if(n==-1)
    {
        std::cout << "noo word!";
    }

    return 0;
}
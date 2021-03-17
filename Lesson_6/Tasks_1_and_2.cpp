#include <iostream>
#include <fstream>
#include <string>

void union_file(std::string file_name_1, std::string file_name_2);

int main(int argc, char** argv)
{
    /////1
    std::ofstream out_file_1 ("1.txt");
    out_file_1 << "I like to read very much. Reading is my hobby. I have got a lot of books at home. I like to read books for children. I like to read short stories about animals and fairy tales. My favourite fairy tale is Cinderella.";
    out_file_1.close();

    std::ofstream out_file_2 ("2.txt");
    out_file_2 << "Children can have different hobbies. Some children collect toys or postcards, some children like to read or play. My hobby is reading. I like to read books for children. I also like to go for walks in the park. I usually make pictures when I walk. Making photos is my hobby, too."; 
    out_file_2.close();

    ///2
    union_file("1.txt","2.txt");

    return 0;
}
void union_file(std::string file_name_1, std::string file_name_2)
{
    std::ifstream ifile_1(file_name_1,std::ios_base::binary);
    std::ifstream ifile_2(file_name_2,std::ios_base::binary);

    ifile_1.seekg(0, std::ios_base::end);
    unsigned int razmer_file_1 =  ifile_1.tellg();
    ifile_1.seekg(0,std::ios_base::beg);
    unsigned char * file_1 = new unsigned char[razmer_file_1];
    ifile_1.read((char*) file_1, razmer_file_1);
    ifile_1.close();

    ifile_2.seekg(0,std::ios_base::end);
    unsigned int razmer_file_2 = ifile_2.tellg();
    ifile_2.seekg(0,std::ios_base::beg);
    unsigned char * file_2 = new unsigned char[razmer_file_2];
    ifile_2.read((char*)file_2,razmer_file_2);
    ifile_2.close(); 

    std::ofstream ofile (file_name_1 + "_+_" + file_name_2);
    ofile.write((char*)file_1,razmer_file_1);
    ofile.write((char*)file_2,razmer_file_2);
    ofile.close();



    delete [] file_2;
    delete [] file_1;
    

}
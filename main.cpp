#include <iostream>
#include <fstream>
#include <cstring>

void writeToFile(char* filename, std::string text, bool append=true){
    std::ofstream  ofs;
    ofs.open(filename, std::ios_base::app);
    if (ofs.is_open()){
        ofs<<text;
    } else{
        std::cout << "nelze zapsat" << std::endl;
    }
    ofs.close();
}
std::string readFromFile(char* filename) {
    std::ifstream ifs;
    ifs.open(filename);
    std::string line, vystup;
    if (ifs.is_open()) {
        while (!ifs.eof()) {
            std::getline(ifs, line);
            vystup+=line;
            vystup+='\n';
        }
    }
    else{
        std::cout << "nelze cist" << std::endl;
        return "error";
    }
    ifs.close();


    return vystup;
}

int main() {
    std::string ahoj;
    std::cin    >>  ahoj;

    /*std::ofstream  ofs;
    ofs.open("file.txt", std::ios_base::app);
    if (ofs.is_open()){
        ofs<<"Hello dude";
    } else{
        std::cout << "nelze zapsat" << std::endl;
    }
    std::cout << "Hello, World!" << std::endl;

    std::ifstream ifs;
    ifs.open("file.txt");
    if (ifs.is_open()){
        std::string line;
        std::getline(ifs, line);

        while (!ifs.eof()){
            ifs >>  line;
            std::cout   <<  line    <<  std::endl;
        }


    }
*/
    readFromFile("file.txt");
    writeToFile("file1.txt", ahoj);



    return 0;
}
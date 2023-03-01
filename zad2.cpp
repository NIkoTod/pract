#include <iostream>
#include <fstream>


int lengthOfFile(const char* fileName){

    std::ifstream file(fileName,std::ios::in);

    if(!file.is_open())return -1;

    file.seekg(0,std::ios::end);

    return file.tellg();

}
int main(){
    
    char name[] = "result.txt";
    
    std::cout<<lengthOfFile(name);

}
#include <iostream>
#include <fstream>


bool printInFileDigit(std::ofstream& file, int digit){

    if(file.is_open()){

        file<<digit;
        file.flush();
        return true;
    }
    else return false;
}

int readDigitFromFile(std::ifstream& file){

    if(file.is_open()){
        int digit;
        file>>digit;
        return digit;
    }
}

int main(){
    
    int a,b,c;
    std::cin>>a>>b>>c;

    std::ofstream fileToPrint("result.txt");
  
    
    printInFileDigit(fileToPrint,a+b+c);
    fileToPrint<<std::endl;
    printInFileDigit(fileToPrint,a*b*c);

    fileToPrint.close();

    std::ifstream fileToRead("result.txt");

    std::cout<<std::abs(readDigitFromFile(fileToRead) - readDigitFromFile(fileToRead));
    

   

}
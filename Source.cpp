#include <iostream> 
#include <Windows.h>

#include <fstream>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*std::string filename;
    std::string name, surname;


    std::cout << "������� ��� �����: ";
    std::cin >> filename;

    std::ofstream fout;

    fout.open(filename, std::ofstream::app);

    if (!fout.is_open())
    {
        std::cerr << "Error";
    }
    else
    {
        std::cout << "������� ��� � ������� (��� ���������� ������� 'q'):" << std::endl;
        while (true) {
            std::cin >> name;
            if (name == "q") {
                break;
            }
            std::cin >> surname;
            fout << name << " " << surname << std::endl;
        }
    }
    
    fout.close();
    std::cout << "������ ���������. ������ ��������� � ����� " << filename << std::endl;*/

    std::ifstream fin;
    fin.open("myFile.txt");
    if (!fin.is_open())
    {
        std::cout << "Error";
    }
    else
    {
        std::cout << "���� ������\n"; 
        char sym;
        std::string name;
        while (!fin.eof())
        {
            name = " ";
            fin >> sym;
            std::cout << name<<"\n";
        }



    }

    fin.close();

    return 0;
}






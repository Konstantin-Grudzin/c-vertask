#include<iostream>
#include<string>
#include <malloc.h>
#include<fstream>;

class Zhilec
{
private:
    int kvartira;
    float m3;
    std::string familiya;
public:
    void initzhilec();
    void printzhilec();
};

class Dom
{

private:
    std::string adres;
    std::string date;
    int kolvozhilcov;
    Zhilec* spisok;
public:
    void initialization();
    void print_dom();
    std::string get_adres(){return adres;}
    int get_kolvozhilcov(){return kolvozhilcov;}
    Dom(){this->kolvozhilcov=-1;}
    ~Dom(){delete[] this->spisok;}
};
inline Dom* Mas;
inline int s;
std::ifstream in("in.txt");
std::ofstream out("out.txt");

void search_dom();
void print3of();



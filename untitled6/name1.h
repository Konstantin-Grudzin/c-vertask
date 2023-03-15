#include<iostream>
#include<string>
#include <malloc.h>

struct Zhilec
{
    int kvartira;
    float m3;
    std::string familiya;
};
struct Dom
{
    std::string adres;
    std::string date;
    int kolvozhilcov;
    Zhilec* spisok;
};
inline Dom* Mas;
inline int s;

void initialization(Dom &Zdanie);
void print_dom(Dom Zdanie);
void search_dom();
void print3of();



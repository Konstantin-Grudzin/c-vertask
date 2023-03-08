#ifndef UNTITLED6_NAME1_H
#define UNTITLED6_NAME1_H

#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
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
Dom* Mas;
int s;

void initialization(Dom* Zdanie);
void print_dom(Dom Zdanie);
void search_dom();

#endif UNTITLED6_NAME1_H

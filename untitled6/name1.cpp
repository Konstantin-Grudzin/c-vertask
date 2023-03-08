#include "name1.h"


void initialization(Dom* Zdanie)
{
    std::cout<<"Input home adress:";
    std::cin>>Zdanie->adres;
    printf("\n");

    //Input of date
    while(true) {
        std::cout<<"Input date in format: DD.MM.YY:";
        std::cin>>Zdanie->date;
        bool flag=true;
        for(int i=0;i<Zdanie->date.size() && flag;++i)
        {
            if((i+1)%3)
            {
                if(!('0'<=Zdanie->date[i] && Zdanie->date[i]<='9'))
                {
                    flag=false;
                }
            }
            else
            {
                if(Zdanie->date[i]!='.')
                {
                    flag=false;
                }
            }
        }
        if(flag)
            break;
    }
    printf("\n");
    //


    do{
        std::cout<<"Input number of tenants:";
        std::cin>>Zdanie->kolvozhilcov;
    }while(0>Zdanie->kolvozhilcov);

    Zdanie->spisok=new Zhilec[Zdanie->kolvozhilcov];

    for(int i=0;i<Zdanie->kolvozhilcov;++i)
    {
        std::cout<<"Input surname of tenant:";
        std::cin>>Zdanie->spisok[i].familiya;
        std::cout<<"\n";

        do {
            std::cout<<"Input number of flat:";
            std::cin>>Zdanie->spisok[i].kvartira;
        }
        while(0>=Zdanie->spisok[i].kvartira);
        std::cout<<"\n";

        do {
            std::cout<<"Input number of area:";
            std::cin>>Zdanie->spisok[i].m3;

        }
        while(0>=Zdanie->spisok[i].m3);
        std::cout<<"\n";

    }
}

void print_dom(Dom Zdanie)
{
    std::cout<<"Adress:%s\n",Zdanie.adres;
    std::cout<<"Date of building:%s\n",Zdanie.date;

    std::cout<<"List of tenants:\n";
    for(int i=0;i<Zdanie.kolvozhilcov;++i)
    {
        std::cout<<"Surname:%s\n",Zdanie.spisok[i].familiya;
        std::cout<<"Number of flat:%i\n",Zdanie.spisok[i].kvartira;
        std::cout<<"Area:%f\n",Zdanie.spisok[i].m3;
    }
}

void search_dom()
{
    std::string adr;
    std::cout<<"Input searching adress:";
    std::cin>>adr;

    for(int i=0;i<s;++i)
    {
        if(Mas[i].adres==adr)
        {
            std::cout<<"Position in list is:%i\n",i;
            print_dom(Mas[i]);
        }
    }
}

void print3of()
{
    Dom sp[3];
    for(int i=0;i<3;++i)
        sp[i].kolvozhilcov=-1;
    for(int i=0;i<s;++i)
    {
        Dom maxim=Mas[i];
        for(int j=0;j<3;++j)
        {
            if(maxim.kolvozhilcov>=sp[j].kolvozhilcov)
            {
                Dom tmp=sp[j];
                sp[j]=maxim;
                maxim=tmp;
            }
        }
    }

    for(int i=0;i<3;++i)
    {
        std::cout<<i+1<<") "<<sp[i].adres<<" "<<sp[i].kolvozhilcov<<"\n";
    }
}
#include "name1.h"

void Zhilec::initzhilec()
{
    out<<"Input surname of tenant:";
    std::cin>>this->familiya;
    out<<"\n";

    do {
        out<<"Input number of flat:";
        std::cin>>this->kvartira;
    }
    while(0>=this->kvartira);
    out<<"\n";

    do {
        out<<"Input number of area:";
        std::cin>>this->m3;

    }
    while(0>=this->m3);
    out<<"\n";
}

void Zhilec::printzhilec()
{
        out<<"Surname:"<<this->familiya<<"\n";
        out<<"Number of flat:"<<this->kvartira<<"\n";
        out<<"Area:"<<this->m3<<"\n";
}

void Dom::initialization()
{
    out<<"Input home adress:";
    std::cin>>this->adres;
    printf("\n");

    //Input of date
    while(true) {
        out<<"Input date in format: DD.MM.YY:";
        std::cin>>this->date;
        bool flag=true;
        for(int i=0;i<this->date.size() && flag;++i)
        {
            if((i+1)%3)
            {
                if(!('0'<=this->date[i] && this->date[i]<='9'))
                {
                    flag=false;
                }
            }
            else
            {
                if(this->date[i]!='.')
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
        out<<"Input number of tenants:";
        std::cin>>this->kolvozhilcov;
    }while(0>this->kolvozhilcov);

    this->spisok=new Zhilec[this->kolvozhilcov];
    Zhilec one;
    for(int i=0;i<this->kolvozhilcov;++i)
    {
        spisok[i].initzhilec();

    }
}

void Dom::print_dom()
{
    out<<"Adress:"<<this->adres<<"\n";
    out<<"Date of building:"<<this->date<<"\n";

    out<<"List of tenants:\n";
    for(int i=0;i<this->kolvozhilcov;++i)
    {
        this->spisok->printzhilec();
    }

}

void search_dom()
{
    std::string adr;
    out<<"Input searching adress:";
    std::cin>>adr;

    for(int i=0;i<s;++i)
    {
        if(Mas[i].get_adres()==adr)
        {
            out<<"Position in list is:"<<i<<"\n";
            Mas[i].print_dom();
        }
    }
}

void print3of()
{
    Dom sp[3];
    for(int i=0;i<s;++i)
    {
        Dom maxim=Mas[i];
        for(int j=0;j<3;++j)
        {
            if(maxim.get_kolvozhilcov()>=sp[j].get_kolvozhilcov())
            {
                Dom tmp=sp[j];
                sp[j]=maxim;
                maxim=tmp;
            }
        }
    }

    for(int i=0;i<3;++i)
    {
        out<<i+1<<") "<<sp[i].get_adres()<<" "<<sp[i].get_kolvozhilcov()<<"\n";
    }
}
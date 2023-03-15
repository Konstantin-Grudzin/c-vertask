#include "name1.h"

void Zhilec::initzhilec()
{
    std::cout<<"Input surname of tenant:";
    std::cin>>this->familiya;
    std::cout<<"\n";

    do {
        std::cout<<"Input number of flat:";
        std::cin>>this->kvartira;
    }
    while(0>=this->kvartira);
    std::cout<<"\n";

    do {
        std::cout<<"Input number of area:";
        std::cin>>this->m3;

    }
    while(0>=this->m3);
    std::cout<<"\n";
}

void Zhilec::printzhilec()
{
        std::cout<<"Surname:"<<this->familiya<<"\n";
        std::cout<<"Number of flat:"<<this->kvartira<<"\n";
        std::cout<<"Area:"<<this->m3<<"\n";
}

void Dom::initialization()
{
    std::cout<<"Input home adress:";
    std::cin>>this->adres;
    printf("\n");

    //Input of date
    while(true) {
        std::cout<<"Input date in format: DD.MM.YY:";
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
        std::cout<<"Input number of tenants:";
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
    std::cout<<"Adress:"<<this->adres<<"\n";
    std::cout<<"Date of building:"<<this->date<<"\n";

    std::cout<<"List of tenants:\n";
    for(int i=0;i<this->kolvozhilcov;++i)
    {
        this->spisok->printzhilec();
    }

}

void search_dom()
{
    std::string adr;
    std::cout<<"Input searching adress:";
    std::cin>>adr;

    for(int i=0;i<s;++i)
    {
        if(Mas[i].get_adres()==adr)
        {
            std::cout<<"Position in list is:"<<i<<"\n";
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
        std::cout<<i+1<<") "<<sp[i].get_adres()<<" "<<sp[i].get_kolvozhilcov()<<"\n";
    }
}
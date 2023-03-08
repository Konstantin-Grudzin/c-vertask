#include "name1.cpp"
int main() {

    std::cout<<"Input size of list:";
    do {
        std::cin>>s;
    }while(s<=0);
    Mas=new Dom[s];
    bool* Zan=new bool[s];


    bool work=true;
    while(work)
    {
        std::cout<<"Choose option:\n1.Add house\n2.Search house\n3.Delete\n4.Print 3 of the most populated homes\n5.Exit";
        int choose;
        do {
            std::cin>>choose;
        }while(!(1<=choose && choose<=5));

        switch(choose)
        {
            case 1:
                {
                    bool estmesto=false;
                    for(int i=0;i<s;++i)
                    {
                        if(!Zan[i])
                        {
                            initialization(&Mas[i]);
                            Zan[i]=1;
                            estmesto=true;
                        }
                    }
                    if(!estmesto) {
                        ++s;
                        Mas=(Dom*)realloc(Mas,s*sizeof(Dom));
                        initialization(&Mas[s-1]);
                        Zan=(bool*)realloc(Zan,s*sizeof(bool));
                    }
                }
                break;
            case 2:
                search_dom();
                break;
            case 3:
                int pos;
                do {
                    std::cout<<"Enter correct pos in list:";
                    std::cin>>pos;
                }while(!(0<=pos && pos<s));
                Mas[pos].adres="NULL";
                Zan[pos]=0;
                break;
            case 4:
                print3of();
            case 5:
                work=false;
                break;
        }
    }
    return 0;
}

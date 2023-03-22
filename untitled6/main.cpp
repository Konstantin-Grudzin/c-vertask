#include "name1.h"

int main() {
    
    out<<"Input size of list:";
    do {
        in>>s;
    }while(s<=0);
    Mas=new Dom[s];
    int cur_pos=0;


    bool work=true;
    while(work)
    {
        out<<"Choose option:\n1.Add house\n2.Search house\n3.Delete\n4.Print 3 of the most populated homes\n5.Exit";
        int choose;
        do {
            in>>choose;
        }while(!(1<=choose && choose<=5));

        switch(choose)
        {
            case 1:
                {
                    if(cur_pos<s)
                    {
                        Mas[cur_pos++].initialization();
                    }
                    else
                    {
                        s*=2;
                        Dom* temp=new Dom[s];
                        for(int i=0;i<=cur_pos;++i)
                        {
                            temp[i]=Mas[i];
                        }
                        delete[] Mas;
                        Mas=temp;
                        Mas[cur_pos++].initialization();
                    }
                }
                break;
            case 2:
                search_dom();
                break;
            case 3:
            {
                int pos;
                do {
                    out<<"Enter correct pos in list:";
                    in>>pos;
                }while(!(0<=pos && pos<s));
                Dom tmp=Mas[--cur_pos];
                Mas[cur_pos]=Mas[pos];
                Mas[pos]=tmp;
                break;
            }
            case 4:
                print3of();
                break;
            case 5:
                work=false;
                break;
        }
    }
    delete[] Mas;
    return 0;
}

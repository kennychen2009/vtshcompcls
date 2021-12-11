#include <iostream>

using namespace std;

int main()
{
    int ppl,ttl;
    cout<<"Hpw many ppl?"<<endl;
    cin>>ppl;
    ttl = ppl/12*50 + ppl%12*5;
    cout<<"班級學生人數 n = "<<ppl<<endl;
    cout<<"所需的費用為"<<ttl<<"元"<<endl;

    return 0;
}

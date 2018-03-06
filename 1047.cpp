#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
    int st, sm, et, em, rm, rt;

    cin>>st>>sm>>et>>em;
    rt = et - st;
    if (rt < 0)
    {
        rt = 24 + (et - st);
    }
    rm = em - sm;
    if (rm < 0)
    {
        rm = 60 + (em - sm);
        rt--;
    }
    if (et == st && em == sm)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }

    else 
	{
		cout<<"O JOGO DUROU "<<rt<<" HORA(S) E "<<rm<<" MINUTO(S)"<<endl;
	}
    return 0;
}


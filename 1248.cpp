#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    while(N >= 1)
    {
        string cardapio, cafe, almoco;
        getline(cin,cardapio);
        getline(cin,cafe);
        getline(cin,almoco);
        string uniao=cafe + almoco;

        bool chet = false;
        for(int i=0;i<uniao.length();i++)
        {
            bool x=false;
            for(int j = 0; j < cardapio.length(); j++)
            {
                if(cardapio[j] == uniao[i])
                    x = true;
            }
            if(!x){
                chet = true;
                break;
            }
        }
        if(chet)
        {
            cout<<"CHEATER\n";
        }
        else
        {
            string janta;
            for(int i=0;i<cardapio.length();i++)
        {
            bool x = false;
            for(int j=0;j<uniao.length();j++)
            {
                if(cardapio[i]==uniao[j])
                {
                    x=true;
                }
            }
            if(!x){
                janta=janta+cardapio[i];
            }
        }
        sort(janta.begin(),janta.end());
        cout<<janta;
        cout<<endl;
        }
	N--;
    }
    return 0;
}


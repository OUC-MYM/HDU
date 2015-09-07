#include <iostream>
#include <cstring>
using namespace std;

bool link[30][30];

int main()
{
    memset(link,0,sizeof(link));
    string str;
    while(cin >> str)
    {
        if(str[0]!='0')
        {
            int len=str.length();
            link[str[0]-'a'][str[len-1]-'a']=1;
        }
        else
        {
            for(int k=0; k<=26; k++)
                for(int i=0; i<=26; i++)
                    for(int j=0; j<=26; j++)
                        if(link[i][k] && link[k][j])
                            link[i][j]=1;
            if(link['b'-'a']['m'-'a'])
                cout << "Yes." << endl;
            else
                cout << "No." << endl;
            memset(link,0,sizeof(link));
        }
    }
}

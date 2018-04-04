#include <iostream>
#include <cstring>

using namespace std;
void reverse(const char *duma, char *amud)
{
    int n=strlen(duma);
    for(int i=0;i<n;i++)
    {
        amud[i]=duma[n-i-1];
    }
    amud[n]='\n';
}

int main()
{
    char word[30], drow[30];
    int w_length, i;
    for(;;)
    {
        cout << "\nEnter a word \n";
        cin >> word;
        w_length = strlen(word);
        if(w_length !=1)
        {
            reverse(word,drow);
            cout << drow;
        }
        else
        {
            cout << endl;
            break;
        }
    }
    return 0;
}



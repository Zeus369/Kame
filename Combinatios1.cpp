#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    void comb(char [], int, int);
    char str[10];
    int len;
    cout<<"Enter the string"<<endl;
    cin>>str;
    len = strlen(str);
    comb(str, 0, len-1);
}

void comb(char s[], int FI, int LI)
{
    void swap(char *, char *);
    static int count = 0;
    if(FI==LI)
    {
        cout<<count+1<<" - "<<s<<endl;
        count++;
    }
    else
    {
        for(int i=FI; i<=LI; i++)
        {
            swap(s+FI, s+i);
            comb(s, FI+1, LI);
            swap(s+FI, s+i);
        }
    }
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
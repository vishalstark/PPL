#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int m;
    string s1;
    char nstr[1000];
   int count=0;
    cout<<"Enter the word";
    cin>>s1;
    
    for(int i=0;i<str.length();i++)
    {
            if(str[i]==s1[0])
            {
                             if(i==0 || str[i-1]==' ')
                             {
                                     int k=0,flg=0,l=i;
                                     while(s1[k]!='\0')
                                     {
                                                       if(s1[k]!=str[l])
                                                       {
                                                                      flg=1;
                                                                      break;
                                                       }
                                                       k++;
                                                       l++;
                                     }     
                                         
                                     if(flg==0)
                                     {
                                               i+=s1.length()-1;
                                               count++;      
                                     }
                             }
            }
    }
    cout<<"Occurence of "<<s1<<" is : "<<count;
    cin>>m;
    return 0;
}

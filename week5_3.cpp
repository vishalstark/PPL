#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    
    string s1,s2;
    char nstr[1000];
    int m=0;
    cout<<"Enter the string to be replaced and new string ";
    cin>>s1>>s2;
    
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
                                              int l=0;
                                     while(s2[l]!='\0')
                                     {
                                                       nstr[m]=s2[l];
                                                       l++;
                                                       m++;
                                     }            
                                     }
                             }
            }
            else
            {
            nstr[m++]=str[i];
            }
    }
    nstr[m]='\0';
    cout<<nstr;
    cin>>m;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
     int tests;
     cin >> tests;
     while( tests-- )
     {
        string str;
        cin>> str;
          int snake_count=0;
         int m_count=0;
         if( str.length()==1 && str[0]== 'm')
             cout<< "mongooses"<<endl;
         else if( str.length()==1 && str[0]== 's')
             cout<<"snakes"<<endl;
         else {
             for ( int i =0; i< str.length();i++)
             {
                 if( str[i]=='m')
                 {
                     if(i+1<str.length() && str[i+1]=='s') {
                         i++;
                     }
                     m_count++;
                     //i++;
                 }
                 else if (  str[i]=='s')
                 {  //cout<<"control here"<<endl;
                     if(i+1<str.length() && str[i+1]=='m')
                     {
                         m_count++;
                         i++;
                         //continue;
                         //cout<<"control here1"<<endl;
                     }

                     else
                         snake_count++;
                 }
             }
             //cout<<snake_count<<"here"<<endl;
             //cout<<m_count<<"here2"<<endl;
             if(snake_count>m_count)
                 cout<<"snakes"<<endl;
             else if(m_count >snake_count)
                 cout<< "mongooses"<<endl;
             else
                 cout<<"tie"<<endl;
         }
     }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
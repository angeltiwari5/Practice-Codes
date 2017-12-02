#include<iostream>
#include<string>
#include<vector>
using namespace std;
void process( string& str){
	int j =0;
for( int i =0;i<str.size();i++){
	if( isalnum(str[i]))
	{
		//cout<<" its h "<< i<<" "<< str[i]<<endl;
		str[j]= str[i];
		j++;
		continue;
	}
	else {
		//cout<<" here " <<str[i]<<" "<<j<<endl;
		while(j<str.size() && i<str.size() && !isalnum(str[i])){
			i++;
		}
		cout<<str[i]<<endl;
		str[j]= str[i];
		j++;
	}

}
str.resize(j);
//cout<<str;
}
int countoccur(string data, string diatribe)
{int i=0,j=0;
    int n = diatribe.size();
    int dataSize = data.size();
    int count = 0;
    while(j<n)
    {
        if(diatribe[j]==data[i])
        {
            i++;
            j++;
            if(i==dataSize)
            {
                count++;
                i=0;
            }
        }
        else if(diatribe[j]<65 || diatribe[j]>90 || diatribe[j]<97 || diatribe[j]>122)
        {
            j++;
        }
        else
        {
            i=0;
        }

    }
    return count;
}
void occurences ( string data, string diatribe){
	int diatribelen = diatribe.length();
        int datalen = data.length();
        int count=0;
        for( int i =0;i<diatribelen - datalen +1 ; i++)
        {
            int j =0;
            for( ; j< nlen;j++)
             {	if(!isalnum(str[i+j]))
          	i++;
                if( str[i+j] != data[j])
                    break;
            }
            if( j == datalen)
               count++;
        }
        cout<<count;
}
void occur(string data, string diatribe){
	int stringlen = diatribe.length();
	int length2 = data.length();
	//int count =0;
	int result = 0;
	// int j =0;
	// int match = 0;
	for (int i = 0; i < stringlen;)
    {
        int j = 0;
        //int match = 0;
        while ((tolower(diatribe[i]) == tolower(data[j]))||!isalnum(diatribe[i]))
        {
            if(!isalnum(diatribe[i])){
            	i++;
            }
            else{
            	//match++;
            i++;
            j++;
            }
            
        }
        if (j == length2)
        {
            result++;                                   
            j= 0;
        }
        else
            i++;
    }
    return result;
    //cout<< count1;
}
int main(){
	string data = "hello";
	string str = "hello$&@$h$&  ell**o";
	
	// process(str);
	// occurences(data,str);
	occur(data,str);
	return 0;
}
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include <map>
using namespace std;
//Out result
//template<typename Out>
void partition(const string &s, char delim, vector<string> &vec ) {
    std::stringstream ss(s);
    std::string item;
    //vector<string> vec;
    while (std::getline(ss, item, delim)) {
        //*(result++) = item;
        vec.push_back(item);
    }
    return ;

    //return vec;
}

// std::vector<std::string> split(const std::string &s, char delim) {
//     std::vector<std::string> elems;
//     split(s, delim, std::back_inserter(elems));
//     return elems;
// }

string removeCharsFromString( string &str, char charsToRemove ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove), str.end() );

   return str;
}

int main(){
	ifstream inFile;
	inFile.open("sample.txt");
	if(!inFile)
	{
	cout<<"unable to open"<<endl;
	exit(1);
	}
	//cout << inFile;
	int sum = 0;
	int x;
	// while(inFile>>x){
	// sum+= x;
	// }
	map <string, int> m;
	map <string, int> :: iterator it;
	string str;
	while(getline(inFile,str,'\n')){
		// stringstream s(str);
		// int x =0;
		// str>>x;
		//sum+=x;
		 //stoistr;
		//x= stoi(str);
		vector< string> x ;
		partition(str, ':',x);
		// for( int i =0;i<x.size();i++){
  //   	cout<< x[i]<<endl;
  //   }
		if (x.size() == 2){
			vector< string> y;
			 partition(removeCharsFromString( x[1], '"' ), ' ',y);
			for(int i = 0; i< y.size(); i++){
				string mapi = removeCharsFromString( y[i], ' ' );
				mapi = removeCharsFromString( mapi, ',' );
				if (!m[mapi])
					m[mapi] = 1;
				else
					m[mapi]++;

			}

		}
		//sum+= x;
	}
	inFile.close();

	for (it=m.begin(); it!=m.end(); ++it)
    		std::cout << it->first << " => " << it->second << '\n';
	// cout<<sum;
	return 0;
	/*
	ifstream ifs("sample.txt");
    string s( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );

    int t = 8;
    while(t--){


		unsigned first = s.find('{');
		unsigned last = s.find('}');
		string x1;

		while(first < last){
		   x1 = s.substr (first+1,last-first);
		  unsigned new_first = x1.find('{');
		  if(new_first < first)
		  	first = new_first;
		  else
		  	break;
		}

		//vector<string> x( (istream_iterator<string>(strNew) ),
		//                  (istream_iterator<string>() ));
		//cout << s ;

		vector< string> x = split(x1, ':');

		cout << endl << " ------------------------------------------ " << endl; 

		for (int i = 0; i< x.size(); i++){
			cout << x[i] << endl;
		}

		s = s.erase(first+1, last-first);

		cout << endl << " =================================== " << endl; 

		cout << s;

	}
	*/

  return 0;
}
#include <set>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	/*
	set <string> lista;
	lista.insert("booz");
	lista.insert("jael");
	lista.insert("grillo");
	lista.insert("booz");
	for(int i=0;i<lista.size();i++){
		cout << "el miembro "<< i+1 <<" es : "<<lista.at
		(i)<<endl;
	}*/
		set<string> myset;
 		set<string>::iterator it;
  // set some initial values:
 		myset.insert("booz");
		myset.insert("jael");
		myset.insert("grillo");
		myset.insert("booz");
  

  it=myset.find("booz");
  myset.erase (it);
  myset.erase (myset.find("jael"));

  std::cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
	return 0;
}
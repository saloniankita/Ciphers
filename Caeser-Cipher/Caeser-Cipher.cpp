    #include <iostream>
    #include <string>

    using namespace std;

    int main() 
   {
	string cipher{};
	cout<<" ENTER  THE  PLAIN  TEXT : "<<endl;
	getline(cin, cipher);


        cout<<" DECRYPTED  TEXT : ";
	 for (auto c: cipher)
		if(c != ' ' && c != 'z') 
		{
			char d = c + 1;
		 	cout<<d;
		  }
		
		else if(c == 'z')
		{
			c = 'A';
			cout<<c;
		  }
		
		 else
			cout<<c;

	return 0;
     }

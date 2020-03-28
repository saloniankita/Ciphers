    #include<iostream>
    #include<string.h>

    using namespace std;

   int main()
  {
       string p, text, dtext;
       int k, l;

       //Taking Input
       cout<<" ENTER  PLAIN  TEXT : ";
       getline(cin,p);
       cout<<" ENTER  KEY : ";
       cin>>k;
       cout<<endl;

       //Encrypting The Text
       l=p.length();
       while(l%k !=0)
     {    
          p+="*";
          l++;
      }


     for(int i=0;i<k;i++)
   {    
        for (int j=i;j<p.length();j+=k)
       {
           text+=p[j];
         }
      }

     
     //Text After Encrytion
     cout<<" ENCRYPTED  TEXT : "<<text;
     cout<<endl;


    //Decrypting The Text
    for(int a=0;a<(text.length()/k);a++)
   {
        for(int b=a;b<text.length();b+=(text.length()/k))
            if(text[b]!='*')
            dtext+=text[b];
     }


    //Text After Decryption
    cout<<endl<<" DECRYPTED  TEXT : "<<dtext<<endl;

  return 0;

}

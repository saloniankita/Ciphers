    #include<iostream>
    #include<string.h>
    using namespace std;
   
    int main()
   {
        string text;
        int key;
        cout<<" ENTER  TEXT : "<<endl;
        getline(cin,text);

        cout<<"Enter key"<<endl;
        cin>>key;


        char matrix[key][text.length()];
        for(int i=0;i<key;i++)
      {
         for(int j=0;j<text.length();j++)
         matrix[i][j]='\n';
        }
        
       int row=0;
       int col=0;
       int direction=1;
       for(int k=0;k<text.length();k++)
     {
       if((row==0)||(row==(key-1)))
       direction=!direction;
       matrix[row][col]=text[k];
       col++;

       if(direction==0)
         row++;
       else 
         row--;
       }

       string cipher;
       for(int n=0;n<key;n++)
     {
       for(int m=0;m<text.length();m++)
      {
         if(matrix[n][m]!='\n')
         cipher+=matrix[n][m];
        }
      }

      cout<<" ENCRYPTED TEXT : "<<cipher<<endl;

      cout<<" DECRYPTED TEXT : ";
      char matrix1[key][cipher.length()];
      int row1=0;
      int col1=0;
      int direction1=1;
      for(int a=0;a<cipher.length();a++)
     {
        if((row1==0)||(row1==(key-1)))
        direction1=!direction1;
        matrix1[row1][col1]='*';
        col1++;

            if(direction1==0)
            row1++;
            else 
            row1--;
        }

      int w=0;
      for(int c=0;c<key;c++)
     {
        for(int d=0;d<text.length();d++)
       {
         if(matrix1[c][d]=='*')
         matrix1[c][d]=cipher[w++];
         }
        }

      string plaintext;
      int row2=0;
      int col2=0;
      int direction2=1;
      for(int b=0;b<cipher.length();b++)
     {
       if((row2==0)||(row2==(key-1)))
       direction2=!direction2;
       plaintext+=matrix1[row2][col2];
       col2++;
       if(direction2==0)
       row2++;
       else 
       row2--;
       }

      cout<<plaintext<<endl;
}







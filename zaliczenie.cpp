#include <iostream>
#include <string>
using namespace std;

void displaymenu()
{ 
    cout<<"______________________________________________________ \n";
    cout<<" \t\t Hello, select code: \t \n ";
    cout<<"______________________________________________________ \n";
    cout<<" 1.Select code GA-DE-RY-PO-LU-KI \n";
    cout<<" 2.Select code PO-LI-TY-KA-RE-NU \n";
    cout<<" 3.Select code KA-CE-MI-NU-TO-WY \n";
}

void GenerateCodeGaDeRyPoLuKi()
{
cout << "You have selected code GA-DE-RY-PO-LU-KI  \n";
    
    string st;       
    cout << "Insert text: ";
    getline (cin, st);  

    for(int i=0;i<st.length();i++)        
      if(st[i]=='A')st[i]='G';       
     else if(st[i]=='G')st[i]='A';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='D')st[i]='E';       
     else if(st[i]=='E')st[i]='D';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='R')st[i]='Y';       
     else if(st[i]=='Y')st[i]='R';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='P')st[i]='O';       
     else if(st[i]=='O')st[i]='P';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='L')st[i]='U';       
     else if(st[i]=='U')st[i]='L';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='K')st[i]='I';       
     else if(st[i]=='I')st[i]='K';

     cout << "Encoded text: " << st << endl;

}


void GenerateCodePoLiTyKaReNu()
{
cout<< "You have selected code PO-LI-TY-KA-RE-NU \n";

    string st;        
    cout << "Insert text: ";
    getline (cin, st); 

    for(int i=0;i<st.length();i++)        
      if(st[i]=='P')st[i]='O';       
     else if(st[i]=='O')st[i]='P';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='L')st[i]='I';       
     else if(st[i]=='I')st[i]='L';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='T')st[i]='Y';       
     else if(st[i]=='Y')st[i]='T';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='K')st[i]='A';       
     else if(st[i]=='A')st[i]='K';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='R')st[i]='E';       
     else if(st[i]=='E')st[i]='R';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='N')st[i]='U';       
     else if(st[i]=='U')st[i]='N';
     
      cout << "Encoded text: " << st << endl;
}
 

void GenerateCodeKaCeMiNuToWy()
{
cout<< "You have selected code KA-CE-MI-NU-TO-WY \n";
    
    string st;        
    cout << "Insert text: ";
    getline (cin, st); 

    for(int i=0;i<st.length();i++)        
      if(st[i]=='K')st[i]='A';       
     else if(st[i]=='A')st[i]='K';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='C')st[i]='E';       
     else if(st[i]=='E')st[i]='C';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='M')st[i]='I';       
     else if(st[i]=='I')st[i]='M';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='N')st[i]='U';       
     else if(st[i]=='U')st[i]='N';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='T')st[i]='O';       
     else if(st[i]=='O')st[i]='T';
     for(int i=0;i<st.length();i++)        
      if(st[i]=='W')st[i]='Y';       
     else if(st[i]=='Y')st[i]='W';   
     
     cout << "Encoded text: " << st << endl;
}
 
int main()
{ 
 
int itemcount = 0;
 
displaymenu(); 
int yourchoice;
string confirm;

do
{ 
    cout << "Enter your choice(1-3):";
    cin >> yourchoice;
    getchar();
switch (yourchoice)
{
    case 1: 
        GenerateCodeGaDeRyPoLuKi(); 
        break;
    case 2: 
        GenerateCodePoLiTyKaReNu(); 
        break;
    case 3: 
        GenerateCodeKaCeMiNuToWy(); 
        break;
    default: 
        cout << "invalid"; 
        break;
}


} while (confirm == "y" || confirm == "Y");

return 0;
}
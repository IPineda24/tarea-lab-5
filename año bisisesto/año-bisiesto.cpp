#include<iostream>


using namespace std;
bisiesto(){
     int a=0;
    cin>>a;
if (a%400==0)
{
      cout<<"es bisisesto"<<endl;
}
else
{
    if (a%4 == 0)
    {
       if (a%200 == 0)
       {
            cout<<"no es bisisesto"<<endl;
       }
       else
       {
              cout<<"es bisisesto"<<endl;
       }

    }
    else
    {
            cout<<"no es bisisesto"<<endl;
    }

}

}



int main(){
    cout<<"ingresar year" << endl;

 bisiesto();

  }
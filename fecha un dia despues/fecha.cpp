#include<iostream>


using namespace std;




int day28(int a,int b,int c){
if (a==28)
{
    a=01;
    b+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;

    
}
else
{
   cout<<"el mes"<<b<<"no tiene 29 dias"<<endl;
}

}

int day29(int a,int b,int c){
if (a==29)
{
    a=01;
    b+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;

    
}
else
{
   a+=1;
   cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
}

}

bisiesto(int a,int b, int c){
 
  
if (c%400==0)
{
 
      day29(a,b,c);
}
else
{
    if (c%4 == 0)
    {
       if (c%200 == 0)
       {
         
            day28(a,b,c);
       }
       else
       {
        
           day29(a,b,c);
       }

    }
    else
    {
      
            day28(a,b,c);
    }

}

}


int day1_9(int a,int b, int c){
if (a>0 && a<9)
{
  a+=1;
  cout<<"la fecha es 0"<<a<<"/"<<b<<"/"<<c<<endl;
}
else
{
  if (a>8 && a<28)
  {
    a+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
  }
  else
  {
    if (b==2)
    {
      
     bisiesto(a,b,c);
    }
    else
    {
      a+=1;
      cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
    }
    
    
  }
  
}

}


int meses30o31 (int a,int b, int c){
if (a == 31)
{
  if (b == 1||3||5||7||8||10||12)
{
  if ( b == 12)
  {
    a=01;
    b=01;
    c+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
    
  }
  else
  {
    a=1;
    b+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
    
  }
  
}
else
{
    cout<<"el mes "<<b<<" no tiene 31 dias"<<endl;
    
}


}
else
{
if (a == 30)
{
    if (b == 4||6||9||11)
{
    a+=1;
    b+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
  
}else{
  if (b == 2)
  {
    cout<<"el mes"<<b<<"no tiene 30 dias"<<endl;
  }
  else
  {
    a+=1;
    cout<<"la fecha es "<<a<<"/"<<b<<"/"<<c<<endl;
  }
     }
}else
{
  
  day1_9(a,b,c);
}


}


}

int valido(){
    int a=0;
  int b=0;
  int c=0;
    cout<<"ingresar numero de dia " << endl;
    cin>>a;
    cout<<"ingresar numero de mes " << endl;
    cin>>b;
    cout<<"ingresar numero de año " << endl;
    cin>>c;
if (a>31)
{
   cout<<"no existe el dia "<<a<<endl;
}
else
{
  if (b>12)
{
   cout<<"el mes "<<b<<" no existe"<<endl;
    
}
else
{
  
  meses30o31(a,b,c);
}
}

}






int main(){


  valido();

  }









#include<iostream>


using namespace std;

int pasar(int a, int b ,int c){
  if (c == 59)
  {
    if (b == 59)
    {
      if (a == 23)
      {
        c=0;
        b=0;
        a=0;
        cout<<"son las "<<a<<" horas y "<<b<<" minutos con "<<c<<" segundos"<<endl;
      }
      else
      {
        c=0;
        b=0;
        a+=1;
        cout<<"son las "<<a<<" horas y "<<b<<" minutos con "<<c<<" segundos"<<endl;
      }
      
    }
    else
    {
    c=0;
        b+=1;
       
        cout<<"son las "<<a<<" horas y "<<b<<" minutos con "<<c<<" segundos"<<endl;
    }
    
  }
  else
  {
  c+=1;
      
        cout<<"son las "<<a<<" horas y "<<b<<" minutos con "<<c<<" segundos"<<endl;
  }
  
 
}


int validar(int a, int b ,int c){
   if (a>=0 && a<24){
     if (b>=0 && b<60)
   {
     if (c>=0 && c<60)
   {
    pasar(a,b,c);
   }
   else
   {
     cout<<"la segundo es invilado"<<endl;
   }
  
   }
   else
   {
     cout<<"la minuto es invilado"<<endl;
   }

}
 else
   {
     cout<<"la hora es invilada"<<endl;
   }
   
  }

 


int main(){
cout<<"programa que muestra la hora un segundo despues formato 24 horas"<<endl;
int a=0;
int b=0;
int c=0;

cout<<"ingresar horas"<<endl;
cin>>a;
cout<<"ingresar minutos"<<endl;
cin>>b;
cout<<"ingresar segundos"<<endl;
cin>>c;
  validar(a,b,c);

   }









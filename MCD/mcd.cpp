#include <iostream>
#include <string.h>
using namespace std;

int Mcd(int x , int y){
int Rmcd= 1 ;
for ( int  i = 1; i <= x; i++){
  if ((x%i==0)&&(y%i==0)){
   Rmcd = i ;
  }
}
return Rmcd ;

}

 
int main() {  

  int x,y;
  cout <<"introduce el primer numero" <<endl;
  cin>>x;

   cout<<"introduce el segundo numero "<<endl;
  cin>>y;
   int total=Mcd (x , y);
   cout<<"el MCD de "<<x<<" y "<<y<<" es: "<<total<<endl;

return 0;
 }

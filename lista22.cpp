#include <iostream>  

using namespace std;  

int main() {
	setlocale(LC_ALL,"Portuguese");
  
int n,sum=0,m; 
   
cout<<"Insira um n�mero:";    
cin>>n; 
   
while(n>0) {    
m=n%10;    
sum=sum+m;    
n=n/10;    
}  
cout<<"A soma �:  "<<sum<<endl;    
return 0;  


}

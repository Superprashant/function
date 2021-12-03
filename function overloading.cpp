#include <iostream>
using namespace std;
void my(){
    double x,y,z,n,i;
int opr=4;
cout<<"enter value of x:"<<endl;
cin>>x;
cout<<"enter value of y:"<<endl;
cin>>y;
/*z=x+y;
z=x*y;
z=x-y;
z=x/y;*/
switch (opr){
    case 1:
cout<<"addition is:"<<x+y<<endl;
//break;
case 2:
cout<<"multiplication is:"<<x*y<<endl;
//break;
case 3:
cout<<"subtraction is:"<<x-y<<endl;
//break;
case 4:
cout<<"devision is:"<<x/y<<endl;
//break;
}
}
int main(){int opr, n,i;
    for(int opr=0;opr<=n;opr++)
my();
return 0;
}

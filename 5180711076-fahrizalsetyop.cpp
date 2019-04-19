#include <iostream> //menghitung modulus
using namespace::std;
int Modulus(int nilai,int p){
    if(p==0){
        return (nilai%p);
    }
    else if(p==nilai){
        return (0);
    }
    else{
        return (nilai%p);
    }
}
main(){
    int bil,m;
cout<<" Bilangan  : ";cin>>bil;
cout<<" Modulus   : ";cin>>m;
cout<<" Hasil "<<bil<<" % "<<m<<" = "<<Modulus(bil,m);
}



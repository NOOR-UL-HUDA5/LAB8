#include<iostream>
using namespace std;
template<class T> 
void swap(T a,T b)
{
   cout<<"values before swap"<<a<<"-"<<b<<endl;
   T temp=a;
   a=b;
   b=temp;	
    cout<<"values after swap"<<a<<"-"<<b<<endl;

}
main()
{	
    	swap<int>(5,9);
        swap<float>(5.5f,2.3f);
        swap<char>('c','d');

system("pause>0");
}




#include"std_lib_facilities.h"


using namespace std;
int main()
{

double a=0,b=0,kicsi,nagy ;
    const double m_cm = 100,in_cm = 2.54,ft_in = 12;
    bool tarolo=true;
    double Sum=0;
    int db=0;
    string mertekegyseg;
    vector<double>v ;
    char c;
while(cin>>a>>mertekegyseg)
{

    if (mertekegyseg == "m"){
    a = a;
  }else if (mertekegyseg == "cm"){
    a = a/m_cm;
  }else if (mertekegyseg == "in"){
    a = in_cm*a/m_cm;
  }else if (mertekegyseg == "ft"){
    a = ft_in*in_cm*a/m_cm;
  }
  else
  {
    cout<<"Illegal unit!"<<endl;
  }
  v.push_back(a);
  Sum=Sum+a;

if(tarolo)
{
    kicsi=a;
    nagy=a;
    tarolo=false;
}

if(a<kicsi)
{
    cout<<"the smallest so far"<<endl;
    kicsi =a;

}
else if(a>nagy)
{
    cout<<"the largest so far"<<endl;
    nagy=a;
}
db++;
}
cout<<"db= "<<db<<endl;
cout<<"The smaller value is: "<<kicsi<<"m"<<endl;
cout<<"the larger value is:  "<<nagy<<"m"<<endl;
cout<<"Sum of values: "<<Sum<<endl;
sort(v);

 cout<<"Values: ";
for(int i=0;i<v.size();i++)

    cout<<v[i]<<",";


}

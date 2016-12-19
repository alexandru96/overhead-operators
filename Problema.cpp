#include<iostream>
#include<string.h>
using namespace std;

class Object{
public:
    void print(){
        cout<<this<<endl;
    }
    int equals(Object& obj){
        if(this==&obj)   return 1;
            else return 0;
    }
};

    int operator ==(Object& ob1,Object& ob2){
        return ob1.equals(ob2);
    }

class String : public Object{
    public:
        char *sir;
        int d;

    public:
        String(){
            sir=new char[100];

        }

        String(char* sir){
            int i;
            this->sir=new char[100];
            this->sir=sir;
            for(i=0;sir[i];i++)
                { }
            d=i;
        }

    char* operator+(String param){
        int l,i;
        String rezultat;
        for(i=0;i<d;i++)
            rezultat.sir[i]=sir[i];
        l=i;
        for(i=0;i<param.d;i++)
            rezultat.sir[l++]=param.sir[i];

        return rezultat.sir;
    }

  int equals (Object &obj)
    {
        if(this==&obj)  return 1;
            else return 0;
    }


    void print(){
        cout<<this->sir<<endl;
    }
};

int main(){
    Object ob1;
    Object *ob2;
    if(ob1==*ob2)    cout<<"Pentru ob1 si ob2 ,adresele sunt egale"<<endl;
        else cout<<"Pentru ob1 si ob2 ,adresele nu sunt egale"<<endl;

    if(ob1==ob1)    cout<<"Pentru ob1 si ob1 ,adresele sunt egale"<<endl;
        else cout<<"Pentru ob1 si ob1 ,adresele nu sunt egale"<<endl;

    String s1("Astazi este ");
    String s2("laboratorul de POO");
    String s3=s1+s2;
    String s4=s1+s2;
    s3.print();
    if(s3.d==s4.d)
        {for(int i=0;i<s3.d;i++)
            if(s3.sir[i]!=s4.sir[i])    cout<<"Sirurile nu sunt aceleasi"<<endl;
        cout<<"Sirurile sunt aceleasi"<<endl;
        }
        else cout<<"Sirurile nu au aceeasi lunigme"<<endl;

return 0;
}

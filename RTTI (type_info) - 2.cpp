#include <bits/stdc++.h>
using namespace std;

class Book{
public:
    void func1(){
        cout<<"This is book"<<endl;
    }
};

class Movie{
public:
    void func2(){
        cout<<"This is movie"<<endl;
    }
};

class Song{
public:
    void func3(){
        cout<<"This is song"<<endl;
    }
};


template <typename T>
void showType(const T & x)
{
    const type_info& bt=typeid(Book);
    const type_info& mt=typeid(Movie);
    const type_info& st=typeid(Song);
    if(typeid(x)==bt)
    {
        cout<<"It's a Book."<<endl;
    }
    else if(typeid(x)==mt)
    {
        cout<<"It's a Movie."<<endl;
    }
    else if(typeid(x)==st)
    {
        cout<<"It's a Song."<<endl;
    }
    else
    {
        cout<<"It's not a media."<<endl;
    }
}


int main() {
    Book bk;
    showType(bk);
    
    Movie mv;
    showType(mv);
    
    Song sg;
    showType(sg);

    return 0;
}

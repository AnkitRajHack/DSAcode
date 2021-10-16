
#include <iostream>
using namespace std;
class publication
{
    string title;
    float price;
    public:void getdata()
    {
        cout<<"Enter title and price"<<endl;
        cin>>title>>price;
        try
        {
            if (title=="C++")
            {
                throw title;
            }
        }
        catch(string ti)
        {
            title="0";
            cout<<"Exception For Title is caught"<<endl;
        }
        try
        {
            if (price>800)
            {
                throw price;
            }
        }
        catch(float pr)
        {
            price=0;
            cout<<"Exception For price is caught"<<endl;
        }
    }
    public:void display()
    {
        cout<<endl<<"The Title of the book is:"<<title<<endl<<"The price of the book is:"<<price<<endl;
    }
};
class book : public publication
{
    int pcount;
    public:
    void getcount();
    
    void show();
   
};
void book:: getcount()
{
    cout<<"Enter the no of pages"<<endl;
    cin>>pcount;
    try
        {
            if (pcount>800)
            {
                throw pcount;
            }
        }
        catch(int p)
        {
            pcount=0;
            cout<<"Exception For  no of pages is caught"<<endl;
        }
}
void book::show()
{
    cout<<"No of pages of the book:"<<pcount<<endl;
}
class tape:public publication
{
    float min;
    public:
    void getmin()
    {
        cout<<"Enter the time in minutes"<<endl;
        cin>>min;
        try
        {
            if (min>60)
            {
                throw min;
            }
        }
        catch(float m)
        {
            min=0;
            cout<<"Exception For minutes is caught"<<endl;
        }
    }
    void showmin()
    {
        cout<<"The time in minutes of tape is:"<<min<<endl;
    }
};
int main()
{
    book b;
    tape t;
    b.getdata();
    b.getcount();
    t.getmin();
    b.display();
    b.show();
    t.showmin();


    return 0;
}
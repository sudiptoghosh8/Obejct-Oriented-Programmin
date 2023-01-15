#include<iostream>
Using namespace std;
Class Library_Memo
{
    String number,description;
    Int quantity;
    Double price;
Public:
    Library_Memo(string n,string d,double p,int q)
    {
        Number=n;
        Description=d;
        If(p<0)price=0;
        Else
        {
            Price=p;
        }
        If(q<0)quantity=0;
        Else
        {
            Quantity=q;
        }
    }
    Void setn(string n)
    {
        Number=n;
    }
    Void setd(string d)
    {
        Description=d;
    }
    Void setp(double p)
    {
        If(p<0)price=0;
        Else
        {
            Price=p;
        }

    }
    Void setq(int q)
    {
        If(q<0)quantity=0;
        Else
        {
            Quantity=q;
        }
    }
    String getn()
    {
        Return number;
    }
    String getd()
    {
        Return description;
    }
    Double getp(){return price;}
    Int getq(){return quantity;}
    Double getTotalAmount()
    {
        Return price*quantity;
    }
};
Int main()
{
    Library_Memo ob(“000111”,”Hello Kitty”,100.50,50);
    Cout<<”Tag: “<<ob.getn()<<endl;
    Cout<<”Descrition: “<<ob.getd()<<endl;
    Cout<<”Price: “<<ob.getp()<<” taka/piece”<<endl;
    Cout<<”Quantity: “<<ob.getq()<<” Piece”<<endl;
    Cout<<”Total Amount: “<<ob.getTotalAmount()<<” Taka”<<endl;
    Return 0;
}

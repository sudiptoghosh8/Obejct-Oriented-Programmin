#include<iostream>
#include<string>
using namespace std;
class fdr;
class deposit
{
    private:
    string user_name;
    string address;
    int amount;
    public:
    void set_data(string x, string y, int z)
    {
        user_name = x;
        address = y;
        amount = z;
cout << "Deposit class: "<< user_name << " " << address << " " << amount << endl;
    }
    friend void sum(deposit,fdr);
};
class fdr
{
    private:
    int amount;
    int time;
    public:
    void set_data(int x, int y)
    {
        amount = x;
        time = y;
cout << "FDR Class: "<< amount << " " << time << endl;
    }
    friend void sum(deposit,fdr);
};
void sum(deposit dp,fdr fd)
{
    int sum = dp.amount + fd.amount;

}
   int main()
{
    deposit dp;
    fdr fd;
   dp.set_data("Sudipto", "Satkhira", 1000);
   fd.set_data(4,30);
   sum(dp,fd);
    return 0;
 }

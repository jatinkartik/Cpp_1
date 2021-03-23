#include <iostream>
#include <stdlib.h>
using namespace std;
class shop
{
private:
    int* itemprice;
    int itemid[100];
    int counter;
public:
    void counterinit(void)
    {
        counter = 0;
    }
    void getprice(void);
    void showprice(void);
    void listitem(void);
};

void shop::getprice(void)
{
 itemprice = (int *)calloc(100,sizeof(int));
    cout << "Enter the item id : - ";
    cin >> itemid[counter];
    cout << "Entet the price of the item : - ";
    cin >> itemprice[counter];
    counter++;
}
void shop::showprice(void)
{
    int number, k;
    cout << "Enter the id of the item : --";
    cin >> number;
    for (k = 0; k < 100; k++)
    {
        if (number == itemid[k])
        {
            break;
        }
    }

    cout << endl
         << "the price of the item '" << itemid[k] << "' and price is " << itemprice[k];
}

void shop::listitem(void){
    for (int h = 0; h < 100; h++)
    {
        cout<<endl<<"The price of item "<<h+1<<" is "<<itemprice[h];
    }
    
}
int main()
{
    shop t1;
    t1.counterinit();
    t1.getprice();
    t1.showprice();
    t1.listitem();
    cout << endl;
    return 0;
}
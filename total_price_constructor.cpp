#include<iostream>
using namespace std;
class product
{
private:
int id;
string name;
float price;
int quantity;
public:
product()
{
id=251883;
name="Rice";
price=60.0;
quantity=2;
}

product(int i,string n,float p,int q)
{
id=i;
name=n;
price=p;
quantity=q;
}

product(const product &p)
{
id=p.id;
name=p.name;
price=p.price;
quantity=p.quantity;
}
void display()
{
cout<<"Product ID: "<<id<<endl;
cout<<"Product Name: "<<name<<endl;
cout<<"Product Price: "<<price<<endl;
cout<<"Product Quantity: "<<quantity<<endl;
cout<<"Total Price: "<<price*quantity<<endl;
cout<<endl;
}
};
int main()
{
product p1;
cout<<"Product 1(Default Constructor): "<<endl;
p1.display();

product p2(180077,"Sugar",75.0,10);
cout<<"Product 2(Parameterized Constructor): "<<endl;
p2.display();

product p3(p2);
cout<<"Product 3(Copy Constructor): "<<endl;
p3.display();

return 0;
}

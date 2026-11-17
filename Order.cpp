

#include <iostream>
using namespace std;
void orderfunction(){
    int category,itemchoice,quantity,total=0;
    char again;
    do{ 
    cout<<"welcome to order"<<endl;
    cout<<"1. Main Dishes"<<endl;
cout<<"2. Appetizers"<<endl;
cout<<"3. Sandwiches"<<endl;
cout<<"4. Salads"<<endl;
cout<<"5. Drinks  "<<endl;
    cout<<"choose category ";
    cin>>category;
    switch(category)
        {  
        case 1:
        {
            cout << "    Main Dishes    " << endl;
    cout << " 1-Kebab - 20 SR" << endl;
    cout << "2-Shish Tawook - 19 SR" << endl;
    cout << "3-Lamb Awصال - 22 SR" << endl;
    cout << "4-Beef Steak - 24 SR" << endl;
    cout << "5-Chicken with Cream and Mushroom - 26 SR" << endl;
    cout << "6-Pasta - 32 SR" << endl; 
            cout<<"choose food item";
            cin>>itemchoice;
            switch(itemchoice){
                case 1:
                    {  
                cout<<"Kebab - 20 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                        
                       while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (20 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 2:
                    {  
                cout<<"Shish Tawook - 19 SR"<<endl;
                       cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (19 * quantity);
    cout << "Total: " << total << endl;
                         
                    }
                break;
                case 3:
                    {  
                cout<<"Lamb Awصال - 22 SR"<<endl;
                      cout<<"enter quantity";
                        cin>>quantity;
 while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (22 * quantity);
    cout << "Total: " << total << endl;
                    }
                 break;
                case 4:
                    { 
                cout<<"Beef Steak - 24 SR"<<endl;
                         cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (24 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 5:
                    { 
                cout<<"Chicken with Cream and Mushroom - 26 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                       while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (26 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 6:
                    { 
                    cout<<"Pasta - 32 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
                   while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (32 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                default:
                cout<<"wrong please enter again ";
            }
        }
    break;
    case 2:
        {
            cout << "    Appetizers    " << endl;
    cout << "1-Kibbeh - 16 SR" << endl;
    cout << "2-Hummus - 12 SR" << endl;
    cout << "3-Sambosa - 14 SR" << endl;
    cout << "4-Grape Leaves - 16 SR" << endl;
    cout << "5-French Fries - 10 SR" << endl;
    cout << "6-Mozzarella Sticks - 18 SR" << endl;
             cout<<"choose food item";
            cin>>itemchoice;
            switch(itemchoice){
                case 1:
                    {  
                cout<<"Kibbeh - 16 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (16 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 2:
                    {  
                cout<<"Hummus - 12 SR"<<endl;
                       cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (12 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 3:
                    {  
                cout<<"Sambosa - 14 SR"<<endl;
                      cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (14 * quantity);
    cout << "Total: " << total << endl;
                    }
                 break;
                case 4:
                    { 
                cout<<"Grape Leaves - 16 SR"<<endl;
                         cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (16 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 5:
                    { 
                cout<<"French Fries - 10 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (10 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 6:
                    { 
                    cout<<"Mozzarella Sticks - 18 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
 while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (18 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                default:
                cout<<"wrong enter !";
            }
        }
    break;
    case 3:
        {
              cout << "    Burgers and Sandwiches    " << endl;
    cout << "1-Classic Beef Burger - 15 SR" << endl;
    cout << "2-Chicken Burger - 10 SR" << endl;
    cout << "3-Meat Shawarma - 12 SR" << endl;
    cout << "4-Chicken Shawarma - 12 SR" << endl;
    cout << "5-Beef Burger - 10 SR" << endl;
             cout<<"choose food item";
            cin>>itemchoice;
            switch(itemchoice){
                case 1:
                    {  
                cout<<"Classic Beef Burger - 15 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (15 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 2:
                    {  
                cout<<"Chicken Burger - 10 SR"<<endl;
                       cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (10* quantity);
    cout << "Total: " << total << endl; 
                    }
                break;
                case 3:
                    {  
                cout<<"Meat Shawarma - 12 SR"<<endl;
                      cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (12 * quantity);
    cout << "Total: " << total << endl;
                    }
                 break;
                case 4:
                    { 
                cout<<"Chicken Shawarma - 12 SR"<<endl;
                         cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (12* quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 5:
                    { 
                cout<<"Beef Burger - 10 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (10 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                default:
                cout<<"wrong enter !";
            }
        }
     break;
    case 4:
    {
         cout << "    Salads    " << endl;
    cout << "1-Cucumber Salad - 14 SR" << endl;
    cout << "2-Yogurt Salad - 10 SR" << endl;
    cout << "3-Tabbouleh - 14 SR" << endl;
    cout << "4-Pasta Salad - 16 SR" << endl;
    cout << "5-Fruit Salad - 18 SR" << endl;
    cout << "6-Fattoush - 14 SR" << endl;
    cout << "7-Green Salad - 9 SR" << endl;
         cout<<"choose food item";
            cin>>itemchoice;
            switch(itemchoice){
                case 1:
                    {  
                cout<<"Cucumber Salad - 14 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (14 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 2:
                    {  
                cout<<"Yogurt Salad - 10 SR"<<endl;
                       cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (10 * quantity);
    cout << "Total: " << total << endl; 
                    }
                break;
                case 3:
                    {  
                cout<<"Tabbouleh - 14 SR"<<endl;
                      cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (14 * quantity);
    cout << "Total: " << total << endl;
                    }
                 break;
                case 4:
                    { 
                cout<<"Pasta Salad - 16 SR"<<endl;
                         cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (16 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 5:
                    { 
                cout<<"Fruit Salad - 18 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (18 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 6:
                    { 
                    cout<<"Fattoush - 14 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
 while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (14 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 7:
                    {
                 cout<<"Green Salad - 9 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (9 * quantity);
    cout << "Total: " << total << endl;    
                    }
                break;
                default:
                cout<<"wrong enter !";
            }
    }
     break;
    case 5:
        {
              cout << "    Drinks    " << endl;
    cout << "1-Fresh Orange Juice - 7 SR" << endl;
    cout << "2-Fresh Mango Juice - 7 SR" << endl;
    cout << "3-Fresh Strawberry Juice - 7 SR" << endl;
    cout << "4-Fresh Lemon Juice - 7 SR" << endl;
    cout << "5-Pepsi - 4 SR" << endl;
    cout << "6-7UP - 4 SR" << endl;
    cout << "7-Sparkling Water - 3 SR" << endl;
    cout << "8-Mineral Water - 1 SR" << endl;  
             cout<<"choose food item";
            cin>>itemchoice;
            switch(itemchoice){
                case 1:
                    {  
                cout<<"Fresh Orange Juice - 7 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                       while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (7 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 2:
                    {  
                cout<<"Fresh Mango Juice - 7 SR"<<endl;
                       cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (7* quantity);
    cout << "Total: " << total << endl; 
                    }
                break;
                case 3:
                    {  
                cout<<"Fresh Strawberry Juice - 7 SR"<<endl;
                      cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (7 * quantity);
    cout << "Total: " << total << endl;
                    }
                 break;
                case 4:
                    { 
                cout<<"Fresh Lemon Juice - 7 SR"<<endl;
                         cout<<"enter quantity";
                        cin>>quantity;
                         while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (7 * quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 5:
                    { 
                cout<<"Pepsi - 4 SR"<<endl;
                        cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (4* quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 6:
                    { 
                    cout<<"7UP - 4 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (4* quantity);
    cout << "Total: " << total << endl;
                    }
                break;
                case 7:
                    {
                 cout<<"Sparkling Water - 3 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
                       while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (3 * quantity);
    cout << "Total: " << total << endl;   
                    }
                break;
                case 8:{
                     cout<<"Mineral Water - 1 SR"<<endl;
                     cout<<"enter quantity";
                        cin>>quantity;
                        while (quantity <= 0)
    {
        cout << "Wrong! Please enter quantity again: ";
        cin >> quantity;
    }

    total = total + (1 * quantity);
    cout << "Total: " << total << endl;
                }
                break;
                default:
                cout<<"wrong enter point";
            }
        }
     break;
    default:
    cout<<"wrong enter !";
        }
    cout << "Do you want to order another item? (Y/N)";
cin >> again;
        } while (again == 'Y' || again == 'y');
    cout << "Your order has been completed!" << endl;
cout << "Final Total: " << total << " SR" << endl;
}
int main() {
    orderfunction();
    return 0;
}

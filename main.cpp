#include<iostream>
using namespace std ;

class Shop
{
    
 int n, q, num ;
 double costs ;
 char ch;
 
public:
    
 void formalities()
 {
     
     cout <<endl<< "Welcome to our online based shopping mall system." << endl ;
     cout <<endl<< "You can buy your necessary products of any brand from our shop." << endl ;
     cout <<endl<< "You can order these products in online only and accept them hand to hand." << endl ;
     cout <<endl<< "You can order only one type of products at a time." << endl ;
     cout <<endl<< "If you want to order multiple types of product, then you need to complete the first order of same type and then the furthers. " << endl ;
     cout <<endl<< "You can order/cancel maximum 5 times and after 24 hours, you can order further. \n\n" << endl ;
     
 }
    
 void take_input()
 {
     cout << "\t\tEnter your choice: " << endl ;
     cout <<endl<< "\t\t1. Footwear " << endl ;
     cout << "\t\t2. Costume " << endl ;
     cout << "\t\t3. Food" << endl ;
     cout << "\t\t4. Medicine " << endl ;
     cout << "\t\t5. Educational Products " << endl ;
     cin >> n ;

 if(n==1)
 {
     cout << "\t\tWhich brand do you want? " << endl ;
     cout << "\t\t1. Converse " << endl ;
     cout << "\t\t2. New balance " << endl ;
     cin >> num ;

 if(num==1)
 {
     cout << "\t\tWhat kind of footwear do you want? " << endl ;
     cout << "\t\ta. Sneakers " << endl ;
     cout << "\t\tb. Sandals " << endl ;
     cout << "\t\tc. Casuals " << endl ;
     cout << "\t\td. Ladies flats " << endl ;
     cout << "\t\te. Formals " << endl ;
     cin >> ch ;
     
     if(ch=='a')
     {
          cout << "\t\tHow many pairs do you want? " << endl ;
          cin >> q ;
          cout << "\t\tYou selected " << q << " pairs. " << endl ;
          costs = q*600 ;
              
     }

     else if(ch=='b')
     {
          cout << "\t\tHow many pairs do you want? " << endl ;
          cin >> q ;
          cout << "\t\tYou selected " << q << " pairs. " << endl ;
          costs = q*250 ;

      }
          
      else if(ch=='c')
      {
          cout << "\t\tHow many pairs do you want? " << endl ;
          cin >> q ;
          cout << "\t\tYou selected " << q << " pairs. " << endl ;
          costs = q*500 ;

      }
          
      else if(ch=='d')
      {
          cout << "\t\tHow many pairs do you want? " << endl ;
          cin >> q ;
          cout << "\t\tYou selected " << q << " pairs. " << endl ;
          costs = q*450 ;

      }
          
      else if(ch=='e')
      {
          cout << "\t\tHow many paris do you want? " << endl ;
          cin >> q ;
          cout << "\t\tYou selected " << q << " pairs. " << endl ;
          costs = q*350 ;

      }
     
      else
      {
          cout << "\t\tYou pressed the wrong key!!! " << endl ;
      }
     

 }
     
 else if(num==2)
 {
     cout << "\t\tWhat kind of footwear do you want? " << endl ;
     cout << "\t\ta. Sneakers " << endl ;
     cout << "\t\tb. Sandals " << endl ;
     cout << "\t\tc. Casuals " << endl ;
     cout << "\t\td. Ladies flats " << endl ;
     cout << "\t\te. Formals " << endl ;
     cin >> ch ;

     
 if(ch=='a')
 {
     cout << "\t\tHow many pairs do you want? " << endl ;
     cin >> q ;
     cout << "\t\tYou selected " << q << " pairs. " << endl ;
     costs = q*600 ;

 }
     
 else if(ch=='b')
 {
     cout << "\t\tHow many pairs do you want? " << endl ;
     cin >> q ;
     cout << "\t\tYou selected " << q << " pairs. " << endl ;
     costs = q*250 ;

 }
     
 else if(ch=='c')
 {
     cout << "\t\tHow many pairs do you want? " << endl ;
     cin >> q ;
     cout << "\t\tYou selected " << q << " pairs. " << endl ;
     costs = q*500 ;

 }
     
 else if(ch=='d')
 {
     cout << "\t\tHow many pairs do you want? " << endl ;
     cin >> q ;
     cout << "\t\tYou selected " << q << " pairs. " << endl ;
     costs = q*450 ;

 }
     
 else if(ch=='e')
 {
     cout << "\t\tHow many paris do you want? " << endl ;
     cin >> q ;
     cout << "\t\tYou selected " << q << " pairs. " << endl ;
     costs = q*350 ;

 }
     
 else
 {
     cout << "\t\tYou pressed the wrong key!!! " << endl ;
 }
     
 }
     
 else
 {
     cout << "\t\tYou pressed the wrong key!!! " << endl ;
 }
     
 }
     
     
 else if(n==2)
 {
     cout << "\t\tWhat kind of costume do you want? " << endl ;
     cout << "\t\ta. Women costumes " << endl ;
     cout << "\t\tb. Adult costumes " << endl ;
     cout << "\t\tc. Men costumes " << endl ;
     cout << "\t\td. Kids costumes " << endl ;
     cout << "\t\te. Boys costumes " << endl ;
     cout << "\t\tf. Baby & Toddler Costumes " << endl ;
     cin >> ch ;
     
     if(ch=='a')
     {
         cout << "\t\tHow many women costumes do you want? " <<endl ;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*1000 ;

     }
         
     else if(ch=='b')
     {
         cout << "\t\tHow many adult costumes do you want? " << endl;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*250 ;
     }
         
     else if(ch=='c')
     {
         cout << "\t\tHow many men costumes do you want? " << endl;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*450 ;
     }
         
     else if(ch=='d')
     {
         cout << "\t\tHow many kids costumes do you want? " << endl ;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*150 ;
     }
         
     else if(ch=='e')
     {
         cout << "\t\tHow many boys costumes do you want? " << endl;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*900 ;

     }
         
     else if(ch=='f')
     {
         cout << "\t\tHow many baby & toddler costumes do you want? " << endl ;
         cin >> q ;
         cout << "\t\tYou selected " << q << " costumes.\n" << endl ;
         costs = q*200 ;

     }
         
     else
     {
         cout << "\t\tYou pressed the wrong key!!! \n" << endl ;
     }

     
 }
     
 else if(n==3)
 {
     cout << "\t\tWhat kind of food do you want? " << endl ;
     cout << "\t\ta. Dairy " << endl ;
     cout << "\t\tb. Baby foods " << endl ;
     cout << "\t\tc. Beverages " << endl ;
     cout << "\t\td. Breakfast Cereals " << endl ;
     cin >> ch ;
     
     if(ch=='a')
     {
         cout << "\t\tSelect your dairy foods. " << endl ;
         cout << "\t\t1. Milk " << endl ;
         cout << "\t\t2. Cheese " << endl ;
         cin >> num ;
         
         if(num==1)
         {
             cout << "\t\tHow many packet of milk do you want? " <<endl ;
             cin >> q ;
             costs = q*70 ;
         }
         
         else if(num==2)
         {
             cout << "\t\tHow many packet of cheese do you want? " <<endl ;
             cin >> q ;
             costs = q*90 ;

         }

     }
         
     else if(ch=='b')
     {
         cout << "\t\tSelect your baby foods. " << endl ;
         cout << "\t\t1. Yogurt " << endl ;
         cout << "\t\t2. Oatmeal " << endl ;
         cin >> num ;
         
         if(num==1)
         {
             cout << "\t\tHow many packet of yogurt do you want? " <<endl ;
             cin >> q ;
             costs = q*150 ;

         }
         
         else if(num==2)
         {
             cout << "\t\tHow many packet of oatmeal do you want? " <<endl ;
             cin >> q ;
             costs = q*200 ;

         }

     }
         
     else if(ch=='c')
     {
         cout << "\t\tSelect your beverage. " << endl ;
         cout << "\t\t1. Juice and plant drinks " << endl ;
         cout << "\t\t2. Water " << endl ;
         cin >> num ;
         
         if(num==1)
         {
             cout << "\t\tHow many bottles of juice and plant drinks do you want? " << endl ;
             cin >> q ;
             costs = q*35 ;

         }
         
         else if(num==2)
         {
             cout << "\t\tHow many bottles of one liter water do you want? " << endl ;
             cin >> q ;
             costs = q*20 ;

         }

     }
     else if(ch=='d')
     {
         cout << "\t\tSelect your breakfast cereals. " << endl ;
         cout << "\t\t1. Porridge " << endl ;
         cout << "\t\t2. Cornflakes " << endl ;
         cin >> num ;
         
         if(num==1)
         {
             cout << "\t\tHow many packet of porridge do you want? " <<endl ;
             cin >> q ;
             costs = q*50 ;

         }
         
         else if(num==2)
         {
             cout << "\t\tHow many packet of cornflakes do you want? "<< endl ;
             cin >> q ;
             costs = q*70 ;

         }
     }
         
     else
     {
         cout << "\t\tYou pressed the wrong key!!! " << endl ;
     }


 }
     
 else if(n==4)
 {
     cout << "\t\tWhat kind of medicine do you want? " << endl ;
     cout << "\t\ta. Paracetamol " << endl ;
     cout << "\t\tb. Saline " << endl ;
     cin >> ch ;
     
     if(ch=='a')
     {
         cout << "\t\tHow many strips of paracetamol do you want? "<< endl ;
         cin >> q ;
         costs = q*10 ;

     }
     
     else if(ch=='b')
     {
         cout << "\t\tHow many packets of saline do you want? " <<endl ;
         cin >> q ;
         costs = q*6 ;

     }
     
     else
     {
        cout << "\t\tYou pressed the wrong key!!! " << endl ;
     }

 }
 else if(n==5)
 {
     cout << "\t\tWhat kind of educational products do you want? "<< endl ;
     cout << "\t\ta. Pens " << endl ;
     cout << "\t\tb. Pencils " << endl ;
     cout << "\t\tc. Notebooks " << endl ;
     cout << "\t\td. Highlighters " << endl ;
     cin >> ch ;
     
     if(ch=='a')
     {
         cout << "\t\tHow many amount of pens do you want? " <<endl ;
         cin >> q ;
         costs = q*6 ;

     }
     
     else if(ch=='b')
     {
         cout << "\t\tHow many amount of pencils do you want? " <<endl ;
         cin >> q ;
         costs = q*10 ;
 
     }
     
     else if(ch=='c')
     {
         cout << "\t\tHow many amount of notebooks do you want? "<< endl ;
         cin >> q ;
         costs = q*25 ;

     }
     
     else if(ch=='d')
     {
         cout << "\t\tHow many amount of highlighters do you want? "<< endl ;
         cin >> q ;
         costs = q*20 ;

     }
 }
     
 else
 {
     cout << "\t\tYou pressed the wrong key!!! " << endl ;
 }
     
 }
    
 friend void cost(Shop s) ; ///Friend Function
    ///
};

void cost(Shop s)
{
   cout << "\t\tTotal cost is: " << s.costs << endl << endl << endl ;
}

class Purchase : public Shop
{
    
public:
 ~Purchase(){
     
 };
    
 int key ;
    

 void order()
 {
     cout << "\t\tTo confirm the order press 1 " << endl ;
     cout << "\t\tTo cancel the order press 2 " << endl ;
     cin >> key ;
     
     if(key==1)
     {
         cout << "\t\tYour order has been granted. " << endl ;
         cout << "\t\tYou will be notified in 24 hours. \n\n" << endl ;

     }
     
     else if(key==2)
     {
         cout << "\t\tYour order has been canceled. \n\n" << endl ;

     }
     
     else
     {
         cout << "\t\tYou pressed the wrong key. \n\n" << endl ;
     }

 }
    
};


int main()
{
    
 int i ;
    
 for(i=1; i<=5; i++)
 {
     Shop one ;
     one.formalities() ;
     one.take_input() ;
     cost(one) ;
     Purchase one2 ;
     one2.order() ;

 }
    
 if(i>5)
 {
     cout << "You ordered/canceled 5 times" << endl ;
     cout << "Try again after 24 hours. " << endl ;

 }
    
 return 0;
    
}

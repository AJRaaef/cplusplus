 #include<iostream>
#include<string>
#include<fstream>
using namespace std;

void display1();
void login();
void firstpage();
void Aboutcompany();
void signup();
void help();
int exit();
void after_login();
void add_prd();
void view_prd();
void second_page();
void customer();
string prd[80],prc[80];
int no;
void signupback_page();
void manging_teamback();
void customer_back();
void search_product();
void employee_back();
void custom_back();
string username,password;
void help_login();
void sales_details();
void order();

int main()
{
display1();
}

void login()
{   
	string n,usrname,pasword;
   m:
cout<<"\n\n                 1. Enter User name :  ";
  cin>>usrname;
  cout<<" \n                 2. Enter Password :   ";
  cin>>pasword;
  
  if(usrname==username && pasword==password )
  {
  
  cout<<"\n                         Login succesfull... \n";
  cout<< "                         =================== \n";
  
                 cout<<"         |-|  ";   system("pause");
                     system("cls");
  
  c:
   cout<<"\n             [0] => Back \n             [1] => continue \n";
   cout<<"                    Select option : ";
  cin>>n;
  if(n=="0")
  {
  	system("pause");
  	system("cls");
  	signupback_page();
  }
  else if(n=="1")
   {
   system("pause");
  	system("cls");
   after_login();
   }
   else
   {
   	 cout<<"Invalid option Re-select";
   	 system("pause");
   	 system("cls");
   	 goto m;
   }
}

else
{ 
    int g;
	cout<<"          \n             login failed   \n";
	h:
	cout<<"                   [0] => FORGOT PASSWORD \n                    Enter the option : ";
	cin>>g;
	switch(g)
	{
		case 0:
		{
			 help_login();
			 break;
		}
		default :
		{
		cout<<"Invlaid option ";
		goto h;
	}
	}	
	
}
}


void display1()
{    cout<< "______________________________________________________________________________\n";
  cout<< "  _________________________________________________________________________   |\n"; 
     cout<<"||                                                                         || |\n||                                                                         || | \n||------------------------- WELCOME TO AMBER BAKERY -----------------------|| | \n||                                                                         || |\n||";
cout<<"_________________________________________________________________________|| |\n";
	cout<<"______________________________________________________________________________|\n\n";
	firstpage();
	
}

void firstpage()
{   
     
      r:
	string opt;
    cout<<"\n                [1] => Signup \n""                [2] => Help \n""                [3] => About company \n""                [4] => Exit \n\n";
    cout<<"                Pls choose your option : ";
    cin>>opt;
   if(opt=="1")
   {
   	signup();
   }
    
    else if(opt=="2")
   {
   	help();
   }
    else if(opt=="3")
   {
   Aboutcompany();
   }
    else if(opt=="4")
   {
   	exit();
   }
   else
   {
   	cout<<"\n                     [ Invalid option ] \n";
   	goto r;
   }
      
}

void signup()
{ 
    string x;
 
  cout<<"\n\n                 1. Enter User name :  ";
  cin>>username;
  cout<<" \n                 2. Enter Password :   ";
  cin>>password;
  cout<<"\n                         Signup succesfull... \n";
  cout<< "                         =================== \n";
  
                 cout<<"         |-|  ";   system("pause");
                     system("cls");
  
  b:
   cout<<"\n                 [0] => Back \n                 [1] => continue \n";
   cout<<"                 Select option : ";
  cin>>x;
  if(x=="0")
  {
  	cout<<"         |-|  ";   system("pause");
  	system("cls");
  	signupback_page();
  }
  else if(x=="1")
   {
   cout<<"         |-|  ";   system("pause");
  	system("cls");
   after_login();
   }
   
   else
   {
   	cout<<"\n                     [ Invalid option ] \n";
   	goto b;
   }

}

void Aboutcompany()
{   cout<<"\nAbout Bakey : \n";
	cout<<"Amber bakery is one of the very famous pastry shops in UK\n";
	cout<<"They offer different kinds of cakes, desserts, breads, cookies  bakery products and other wonderful items\n";
	cout<<"Range of beverages and coffee is also available for their customers\n";
	cout<<"Recently they have been involved in many celebrations like holiday, parties. And weddings\n\n"; 
    cout<<"Bakery Address : \n";
	cout<<" 123 Baker Street, London, UK \n Postcode: SW1A 1AA.\n\n";
	cout<<"Bakery Contact number :\n";
    cout<<" +44 (0)20 1234 5678 \n";
    g:
	 cout<<"\n[0] => Back : ";
	string z;
  cin>>z;
  if(z=="0")
  {
  	system("pause");
  	system("cls");
  	firstpage();
  }
  else
   {
   cout<<"Invalid option re-select : ";
   	goto g;
   } 
    
}

void help()
{  
      string help_opt;
    
   cout<<"\n\n               If you doesnt have account in this app \n";
   cout<<"                   Go to signup \n";
   cout<<"                   We Separate 2 phases \n                    [1] - STAFF\n                    [2]- CUSTOMERS \n ";
   cout<<"                   After signup you will do with login option \n";
   d:
   cout<<"\n                      [0] => Back  \n";
   cout<<"                      Enter the number : ";
   cin>>help_opt;
  if(help_opt=="0")
  { 
     system("pause");
     system("cls");
  	firstpage();
  }
  
  else
	{
	cout<<"Invalid option re-select : ";
	goto d;
	 } 

   
}

int exit()
{    
       char ex_opt,logout_opt;
	cout<<"\n\t\tAre you sure,want to exit ? \n";
	a:
	cout<<"\t\t [y/Y] => yes \n \t\t [N/n] => No \n \t\tEnter your option : ";
	cin>>ex_opt;
	if(ex_opt=='Y'||ex_opt=='y')
  { 
     j:
  	cout<<"\n\t\tif you want to logout ? ";
     cout<<" \n\t\t[y/Y] => yes \n\t\t[N/n] => No \n\t\tEnter your option : ";
     cin>>logout_opt;
     if(logout_opt=='y'|| logout_opt=='Y')
     {
	cout<<"\n\t\t-------------Logout succesfull---------------\n";
  	cout<<"\t\t*************thanks for using our app********************\n ______________________________________________________";
  	return 0;
  }
   else if(logout_opt=='N'||logout_opt=='n')
  {  
    
    cout<<"*******************thanks for using our app********************\n ______________________________________________________";
  	return 0;
  }
  else
	{
		cout<<"Your option is wrong pls reselect \n";
	goto j;// back to n
	     } 
     
  }
  
  
  else if(ex_opt=='N'||ex_opt=='n')
  { 
    system("pause");
    system("cls");
  	firstpage();
  }
  else
	{
		cout<<"Your option is wrong pls reselect \n";
	goto a;// back to n
	     } 
 
}

void after_login()
{      
      int no;
      x:
	cout<<"\n\n               [1]=> customer \n               [2]=> Product managing team \n                   select your option : ";
	cin>>no;
	switch(no)
{
	case 1:
		{
			customer();
			break;
		}
	case 2:
		{
		     second_page();
		     break;
		}
	default:
		{
			cout<<" -------------------Invalid option pls reseletct---------------------";
			goto x;
		}
	    
}
}
void add_prd()
{
	string prd[80],prc[80],t;
	int no;
	cout<<"\n                     How many product do you want to add ? : ";
	cin>>no;
	for(int i=1;i<=no;i++)
	{ 
	     
		cout<<"                         Enter "<<i<<" product : ";
		cin>>prd[i];
		cout<<"                         Enter the price : ";
		cin>>prc[i];
		cout<<endl;
	}
	
   ofstream product("productlist.txt",ios::app);
   for(int h=1;h<=no;h++)
   {
   
    product<<prd[h]<<" => "<<prc[h]<<"$"<<endl;
    }
     product.close();
     
    cout<<"                 !!!!!!! Product succesfully added !!!!!!\n";
     k:
       cout<<"\n                 [0] => Back  \n                 [1] => main menu \n ";
       cout<<"                    Choose your option : ";
   cin>>t;
  if(t=="0")
  { 
     system("pause");
     system("cls");
    second_page();
     
  }
  else if(t=="1")
  {
  	system("pause");
     system("cls");
     signupback_page();
     
  }
  
  else
	{
	cout<<"                      Invalid option re-select : ";
	goto k;
	 } 

     
		
}

void view_prd()
{

	cout<<"\n                        Product and per prices\n\n";
	string productlist1;
	ifstream o("productlist.txt");
	
	while(getline(o,productlist1))
	{
		cout<<"                        "<<productlist1<<endl;
	}
	
	system("pause");
    system("cls");  
}

void second_page()
{
		string emp_opt;
		    cout<<"\n\n____________________Only For PROJECT MANAGIN TEAM________________";
		    u:
			cout<<"\n\n                  [1]=>Add product \n                  [2]=>View product\n  \t\t  [3]=>View sales details \n               \t  [4] => main menu \n";              
			cout<<"                   choose option : ";
			cin>>emp_opt;
			if(emp_opt=="1")
			{
				add_prd();
		    }
			
			else if(emp_opt=="2")
			{
				view_prd();
				employee_back();
			}
			
			else if(emp_opt=="4")
			{
			   system("pause");
               system("cls");
               signupback_page();
			}
			
			else if(emp_opt=="3")
			{     string h;
				ifstream y("sales.txt");
				while(getline(y,h))
				{
					cout<<"\n\t\t\t"<<h;
				}
				employee_back();
			}
			
			else
			{
				cout<<"            Invalid option Re-select : \n";
				goto u;
				
			}
}

void customer()
{        
      n:
	string g,p;
	cout<<"\n\n\t\t____________________ For Customers________________\n";
    cout<<"\n\t\t[1] => view product\n\t\t[2] => Search product\n\t\t[3] => Order Product\n\t\t[4] => main menu \n";
	cout<<"                   Select option : ";	
	cin>>g;
	if(g=="1")
	{
		
		view_prd();
		custom_back();
   }
	
	else if (g=="2")
    {   
       search_product();
    }
    
    else if(g=="4")
    {
    	 signupback_page();
	}
	 else if(g=="3")
    {
    	 order();
    	 
	}
	
	
	else 
	{
		cout<<"\n\t\tInvalid answer : ";
		goto n;
	}
}


void signupback_page()
{



   
      r:
	string opt;
    cout<<"\n                [2] => Login \n""                [3] => Help \n""                [4] => About company \n""                [5] => Exit \n\n";
    cout<<"           <<<<<<<<< If you want to view/search/add product got login >>>>>>>>>>>>>> \n\n";
    cout<<"                   Pls choose your option : ";
    cin>>opt;
   if(opt=="2")
   {
   	login();
   }
    else if(opt=="3")
   {
   	help();
   }
    else if(opt=="4")
   {
   Aboutcompany();
   }
    else if(opt=="5")
   {
   	exit();
   }
   else
   {
   	cout<<"\n                     [ Invalid option ] \n";
   	goto r;
   }	
}


void manging_teamback()
{
	  r:
	string opt;
    cout<<"\n                [2] => Login \n""                [3] => Help \n""                [4] => About company \n""                [5] => Exit \n\n";
    cout<<"                Pls choose your option : ";
    cin>>opt;
  
   if(opt=="2")
   {
   	login();
   }
    else if(opt=="3")
   {
   	help();
   }
    else if(opt=="4")
   {
   Aboutcompany();
   }
    else if(opt=="5")
   {
   	exit();
   }
   else
   {
   	cout<<"\n                     [ Invalid option ] \n";
   	goto r;
   }
}

void customer_back()
{

{    
   string opt;
   t:
   	 
    
   	 cout<<"\n\t\t[1]=> view product \n\t\t[2]=> Search product\n""\t\t[3]=>Order Product\n    \t\t[4]=>Main menu\n";
	cout<<"                        Select option : ";	
	cin>>opt;
	if(opt=="1")
	{
         view_prd();
	}
	else if(opt=="2")
	{
		search_product();
	}
	else if(opt=="4")
	{
		signupback_page();
	}
	else if(opt=="3")
	{
		order();
	
	}
	
	else
	cout<<"            Invalid option ";
	 goto t;
}
}



 void search_product() {
    string search;
    bool found = false; // Initialize a flag to track if the product is found

    cout <<"\t\tEnter the product name for search: ";
    cin >> search;

    ifstream g;
    g.open("productlist.txt");
    string line;

    if (g.is_open()) {
        while (!g.eof()) {
            getline(g, line);
            if (line.find(search) != string::npos) {
                cout <<"\t\t\tSearch product: " << line << endl;
                found = true; // Set the flag to true when the product is found
            }
        }
        g.close();
    }

    if (!found) {
        cout << "\t\t\tOops, product not found." << endl; // Print error message if the product is not found
        
    }

    system("pause");
    system("cls");
    customer_back();
}
      

      




void back_mainmenu()
{
	 y:
  int opt;
 cout<<"              \n                         [0] => back\n                         [1] => main menu\n";
 cout<<"                            select your option : ";
 cin>>opt;
 switch(opt)
 {
 	case 0:
 		{
 			system("pause");
 			system("cls");
 			customer();
 			break;
	    }
	case 1:
		{
				system("pause");
 			system("cls");
 			manging_teamback();
 				break;
		}
		
	default:
	{
			cout<<"invalid option Re-select : ";
			goto y;
 	}
 }
}


void employee_back()
{     
      string p;
	 v:
       cout<<"\n                        [0] => Back  \n                        [1] => main menu \n";
       cout<<"                        Enter The option : ";
	 cin>>p;
  if(p=="0")
  { 
     system("pause");
     system("cls");
     second_page();
     
  
  }
  else if(p=="1")
  {
  	system("pause");
     system("cls");
  	signupback_page();
  }
  
}

void custom_back()
{           

    
	  string p;
	 v:
       cout<<"\n                        [0] => Back  \n                        [1] => main menu \n";
       cout<<"                        Enter The option : ";
	 cin>>p;
  if(p=="0")
  { 
     system("pause");
     system("cls");
     customer_back();
     
  
  }
  else if(p=="1")
  {
  	system("pause");
     system("cls");
  	signupback_page();
  }
  
}

void help_login()
{
	cout<<"                  your username: "<<username<<endl;
	cout<<"                  your password: "<<password<<endl;
	
	system("pause");
     system("cls");

	signupback_page();
	
}


void order() {
    ofstream h("sales.txt", ios::app);

    string ord_name;
    int quantity = 0, amount1 = 0, total = 0, amount = 0, price = 0;
    
    int t;
    cout << "\t\tHow many products do you want to purchase: ";
    cin >> t;
    h << "order product: " << t << endl;
    for (int i = 0; i < t; i++) {
    m:
        cout << "\n\t\tEnter Product " << i + 1 << ": ";
        cin >> ord_name;

        int offset;
        string line;

        ifstream g;
        g.open("productlist.txt");

        bool found = false; // Track whether the product was found
        if (g.is_open()) {
            while (!g.eof()) {
                getline(g, line);
                if ((offset = line.find(ord_name, 0)) != string::npos) {
                    found = true; // Product found
                    cout << "\n\t\tSearch product: " << line;
                }
            }
            g.close();
        }

        if (!found) {
            cout << "\t\tProduct not found. Please re-select.\n";
            goto m;
        }

        

        cout << "\n\t\tEnter Price: ";
        cin >> price;
        h << "product: " << ord_name;
        h << "\nprice: " << price << "$\n";

        cout << "\n\t\tEnter Quantity: ";
        cin >> quantity;
        h << "Quantity: " << quantity << endl;

        amount1 = quantity * price;
        total = amount1 + total;
    }

    cout << "\t\tTotal payment: " << total << "$\n";
    h << "total amount: " << total << "$\n";
    h << "_____________________________________________\n";
    h.close();
    customer();
    
}




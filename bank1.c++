#include<iostream>

double showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    int choice = 0;
    double balance = 0;

    do{
        std::cout<<"===================================="<<std::endl;
        std::cout<<"Enter your choice: "<<std::endl;
        std::cout<<"1. show balance"<<std::endl;
        std::cout<<"2. Deposit money"<<std::endl;
        std::cout<<"3. withdraw money"<<std::endl;
        std::cout<<"4. exit"<<std::endl;
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance+= deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout<<"thank you exiting"<<std::endl;
        
        default:
            std::cout<<"Invalid input"<<std::endl;
            break;
        }
    }while (choice !=4);
    
    return 0;
}

double showBalance(double balance){
    std::cout<<"your balance is $ "<<balance<<std::endl;
}

double deposit(){
    double amount = 0;
    std::cout<<"enter amount to be deposited: ";
    std::cin>>amount;
    return amount
    // return 0;
}

double withdraw(double balance){
    return 0;
}



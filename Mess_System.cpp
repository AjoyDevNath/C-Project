
//mess memberder bazar_khoroch,meal_khoroch,

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class Arman
{
public:
    void input()
    {
        string name1;
jump:

        cout<<"Enter the name : ";
        cin>>name1;

        if(strcmp( name1, "Arman") == 0)
        {
            cout<<"Name : "<<name1<<"\n";
            cout<<"Occupation : Student"<<"\n";
            cout<<"Institution : CIET"<<"\n";
            cout<<"Contact Number : 017xxxxxxxx"<<"\n";
            cout<<"Home District : Chattogram"<<"\n";
        }
        else
        {
            cout<<"Warning!Please type correctly!"<<"\n";
            goto jump;
        }
    }

};

class MealBazar
{
public:

    int meal,cost,count;
    int meal1,cost1;
    int total_meal,total_cost;

    MealBazar()
    {
        int count = 0;
        cout<<"Enter today's meal : ";
        cin>>meal;
        cout<<"Enter today's cost : ";
        cin>>cost;

        //ofstream file;
        ofstream file_out("Meal.txt", ios::out || ios::app);
        file_out<<meal<<" "<<cost<<endl;

        file_out.close();
        //cin.ignore();
        count++;
        cout<<"You entered Meal and Cost "<<count<<" times"<<endl;
    }

    void display()
    {
        total_meal = 0;
        total _cost = 0;
        ifstream file_out("Meal.txt",ios::app);

        while( !file_out.eof() )
        {
            file_out>>meal1;
            file_out>>cost1;

            total_meal = total_meal + meal1;
            total _cost = total_cost + cost1;
            meal1 = 0;
            cost1 = 0;
        }

        cout<<"Total Meal = "<<total_meal<<endl;
        cout<<"Total Cost = "<<total_cost<<endl;
        cout<<"Per Meal Cost = "<<(double)total_meal/total_cost;
    }

};



int main()
{
    int x;
    cout<<"Welcome to Mess Management System\n\n";
    cout<<"\n\n\n";
    do
    {
        cout<<"\n\n Enter your choice : ";
        cout<<"\n\n 1. Arman";
        cout<<"\n\n 2 .Kabir";
        cout<<"\n\n Enter your choice : ";
        cin>>x;
        switch(x)
        {
        case 1 :
            Arman arman;
            arman.input();

            MealBazar ob1;
            ob1.display();
            break;
        }
    }
    while(1);
}

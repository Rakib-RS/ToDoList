#include<bits/stdc++.h>
#include "add.cpp"
#include "delete.cpp"
#include "show.cpp"
int choice,tasknumber;
std::string description,duedate,taskname;
class input{
public:
    void input_choice();
    void input_menu();
    void input_tasknumber();
};

int main(){
    display display;
    delete_anything delete_anything;
    add_item add_item;
    input input;
    int add_choice=1,delete_choice=2,show_choice=3,terminate_choice=-1;
    while(true){
        display.out_choice();
        input.input_choice();
        if(choice==terminate_choice){
            break;
        }
        if(choice==add_choice){
            getchar();
            display.out_menu();
            input.input_menu();
            add_item.add(taskname,description,duedate);
        }
        else if(choice==delete_choice){
            display.out_tasknumber();
            input.input_tasknumber();
            delete_anything.deletetodo(tasknumber);
        }
        else if(choice==show_choice){
            display.show();
        }
    }
    return 0;
}
void input::input_choice(){
    std::cin>>choice;
}
void input::input_menu(){
    getline(std::cin,taskname);
    getline(std::cin,description);
    std::cin>>duedate;
}
void input::input_tasknumber(){
    std::cin>>tasknumber;
}

class display{
public:
    void show();
    void out_choice();
    void out_menu();
    void out_tasknumber();
};
void display::show(){
    for(int index=1;index<size;index++){
        std::cout<<index<<":"<<mytodolist[index].taskname<<"  "<<mytodolist[index].duedate<<std::endl;
        std::cout<<mytodolist[index].description<<std::endl;
    }
}
void display::out_choice(){
        std::cout<<"Enter -1 to terminate the program"<<std::endl;
        std::cout<<"Enter 1 to add a new item in the list"<<std::endl;
        std::cout<<"Enter 2 to delete a item from the list"<<std::endl;
        std::cout<<"Enter 3 to see the Remaining item in the list"<<std::endl;
}
void display::out_menu(){
    std::cout<<"Enter taskname , description and Date\n";
    std::cout<<"After input anything you have to press 'Enter'button to take next input\n";
}

void display::out_tasknumber(){
    std::cout<<"Enter tasknumber that you want to delete\n";
}
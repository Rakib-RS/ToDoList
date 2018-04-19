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
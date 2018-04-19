#define MAX_size 100
int size=1;
class mytodo{
public:
    std::string description;
    std::string duedate;
    std::string taskname;
};
class mytodo mytodolist[100];
class add_item{
public:
    bool add(std::string taskname,std::string description,std::string duedate);
};
bool add_item::add(std::string taskname,std::string description,std::string duedate){
    if(size<MAX_size){
        mytodolist[size].description=description;
        mytodolist[size].duedate=duedate;
        mytodolist[size].taskname=taskname;
        size++;
        return true;
    }
    else{
        return false;
    }
}
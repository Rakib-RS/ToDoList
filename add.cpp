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
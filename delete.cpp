class delete_anything{
public:
    void deletetodo(int tasknumber);

};
void delete_anything::deletetodo(int tasknumber){
    int index=1;
    while(tasknumber<size){
        mytodolist[tasknumber]=mytodolist[index+1];
        tasknumber++;
    }
    size--;
}
void delete_anything::deletetodo(int tasknumber){
    int index=1;
    while(tasknumber<size){
        mytodolist[tasknumber]=mytodolist[index+1];
        tasknumber++;
    }
    size--;
}
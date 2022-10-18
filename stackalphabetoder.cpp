#include<iostream>
#define MAX 5
using namespace std;

char STACK[MAX],TOP;

//stack initialization
void initStack(){
    TOP=-1;
}
//check it is empty or not
int isEmpty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}

//check stack is full or not
int isFull(){
    if(TOP==MAX-1)
        return 1;
    else
        return 0;
}

void push(char ch1){
    if(isFull()){
        cout<<"STACK is FULL."<<endl;
        return;
    }
    ++TOP;
    STACK[TOP]=ch1;
}

void display(){
    int i;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    for(i=TOP;i>=0;i--){
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}

//pop - to remove item
void pop(){
    char temp;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }

    temp=STACK[TOP];
    TOP--;
}

int main(){
    char ch1;
    initStack();
    char ch2;
    do{
        int choiceNum;
        cout<<"Chosse any number \n1.push\n"<<"2.pop\n"<<"3.display\n";
        cout<<"Chosse number is: ";
        cin>>choiceNum;
        switch(choiceNum)
        {
            case 1:
                cout<<"Enter character: ";
                cin>>ch1;
                push(ch1);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            default :
                cout<<"An Invalid Choice!!!\nPlease Select the valid choice: \n";
        }
        cout<<"Do you want to continue ? Y/y or N/n: ";
        cin>>ch2;
    }while(ch2=='Y'||ch2=='y');

    return 0;
}
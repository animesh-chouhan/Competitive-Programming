#include <iostream>
#include <array>

using namespace std;

#define SIZE 10

class stack
{   private:
        array<int,SIZE> lifo;
        int top;
    public:
        stack(){
            top=-1;
            lifo.fill(-1);
        }

        bool isEmpty(){
            return (top==-1);
        }

        bool isFull(){
            return (top==SIZE-1);
        }
        
        int push(int val){
            if(isFull())
                return -1;
            lifo[top+1]=val;
            top++;
        }
        int pop(){
            if(isEmpty())
                return -1;
            int temp = lifo[top];
            lifo[top]=-1;
            top--;
            return temp;
        }
        void disp(){
            for(auto x:lifo) cout<<x<<" ";
            cout<<"\n";
        }


};

int main()
{   
    stack s1;
    // s1.push(2);
    // s1.push(5);
    // s1.disp();
    cout<<s1.pop()<<"\n";
    s1.disp();


    return 0;
}
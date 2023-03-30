#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAX_INPUT_SIZE = 15;

inline void error(const char* message) {
    printf("%s\n", message);
    exit(1);
}

class Print {
private:
    char user[10];
    int imp; // 중요도는 1 to 5 까지만 가능
    int pages; //페이지수는 1 to 20 까지만 가능

public:
    Print() {} // 기본 생성자
    Print(const char* u, int i, int p) { // 매개 변수가 있는 생성자
        strcpy(user, u);
        imp = i;
        pages = p;
    }
    ~Print() {} // 소멸자

    char* getUser() { // user를 반환
        return user;
    }

    int getImp() { // imp(중요도)를 반환
        return imp;
    }

    int getPages() { // pages(페이지 수)를 반환
        return pages;
    }

    void setImp(int i) { // imp(중요도)를 설정
        imp = i;
    }

    void setPages(int p) { // pages(페이지 수)를 설정
        pages = p;
    }
};

class InputPrintStack {
private:
    int top;
    Print data[MAX_INPUT_SIZE];
public:
    InputPrintStack() { //기본 생성자. top을 -1로 초기화
        this -> top = -1;
    }
    ~InputPrintStack() {} //기본 소멸자
    bool isEmpty() { //top이 -1인 경우 true를 반환한다.
        return (top == -1);
    }
    bool isFull() { //top이 MAX_INPUT_SIZE와 같은 경우 true를 반환한다.
        return (top == MAX_INPUT_SIZE - 1);
    }

    void push(Print x) { //스택이 포화 상태인지 확인하고, 포화 상태가 아니라면 스택에 Print형 객체 x를 넣는다.
        if (this->isFull())
            error("스택이 포화 상태입니다.\n");
        else
            data[++top] = x;
    }

    Print pop() { //스택이 비어 있는지 확인하고, 비어있지 않다면 top의 Print형 객체를 반환하고 top을 1 내린다.
        if (this->isEmpty())
            error("스택이 비어 있습니다.\n");
        else
            return data[top--];
    }

    Print peek() { //스택이 비어 있는지 확인하고, 비어있지 않다면 top의 Print형 객체를 반환한다.
        if (this->isEmpty())
            error("스택이 비어 있습니다.\n");
        else
            return data[top];
    }

    void display() { //스택이 비어있는지 확인 후 스택이 비어있지 않다면 스택 안의 모든 Print형 변수의 user을 반환한다.
        if (this->isEmpty())
            error("스택이 비어 있습니다.\n");
        else {
            cout << "Stack: ";
            for (int i = 0; i <= top; i++) {
                cout << data[i].getUser() << "  " ;
            }
            cout << endl;
        }
    }
};

class OutputPrintQueue {
public:
    int front;
    int rear;
    Print data[MAX_INPUT_SIZE];
public:
    OutputPrintQueue() { //기본 생성자. Queue에서 front와 rear을 같은 곳을 가리키게 놓는다. 0에서 시작하도록 구현하였다.
        this -> front = 0;
        this -> rear = 0;
    }
    ~OutputPrintQueue() {} //기본 소멸자.
    bool isEmpty() { //front값과 rear값이 같은 경우 true를 return한다.
        return (front == rear);
    }
    bool isFull() { //front가 rear보다 한 칸 앞에 있으면 true를 return한다.
        return ((rear + 1) % MAX_INPUT_SIZE == front);
    }

    void enqueue(Print x) { //큐가 포화 상태인지 확인하고, 포화 상태가 아니라면 객체를 넣는다.
        if (this->isFull())
            error("큐가 포화 상태입니다.\n");
        else{
            rear = (rear+1) % MAX_INPUT_SIZE;
            data[rear] = x;
        }

    }

    Print dequeue() { //큐가 비어 있는지 확인하고, 비어있지 않다면 front값을 1 올리고 객체를 반환한다.
        if (this->isEmpty())
            error("큐가 비어 있습니다. \n");
        else{
            front = (front + 1) % MAX_INPUT_SIZE;
            return this->data[front];
        }
    }

    Print peek() { //큐가 비어 있는지 확인하고, 비어있지 않다면 객체를 반환한다.
        if (this->isEmpty())
            error("큐가 비어 있습니다. \n");
        else{
            front++;
            return this->data[front--];
        }
    }

    void display() { //큐가 비어 있는지 확인하고, 비어있지 않다면 Print형 요소의 user변수들을 프린트한다.
        if (this->isEmpty())
            error("큐가 비어 있습니다. \n");
        else{
            cout << "Queue: ";
            int maxi = (front < rear) ? rear : rear+MAX_INPUT_SIZE;
            for (int i = front + 1; i <= maxi ; i++){
                cout << this->data[i % MAX_INPUT_SIZE].getUser() <<"  ";
            }
            cout << endl;
        }
    }
};

class PrinterSim {
private:
    InputPrintStack input;
    OutputPrintQueue output;

public:
    void insertInputPrints(Print x) { //input이 포화상태가 아니라면 x를 input에 push한다.
        if (!(input.isFull()))
            input.push(x);
    }

    void removePrintJob() { //input이 비어 있지 않다면 pop한다.
        if (!(input.isEmpty()))
            input.pop();
    }

    int compareImportance(Print a, Print b) { //인수로 받는 print형의 a와 b의 중요도를 비교한다.
        if (a.getImp() < b.getImp())
            return -1;
        else if (a.getImp() == b.getImp())
            return 1;
        else
            return 0;
    }

    int comparePages(Print a, Print b) { //인수로 받는 Print형의 a와 b의 페이지 수를 비교한다.
        if (a.getPages() < b.getPages())
            return -1;
        else if (a.getPages() > b.getPages())
            return 1;
    }

    void movePrintsToOutputQueue() { //input에 있는 Print형의 요소들을 모두 output에 옮긴다.
        while(!(input.isEmpty())){
            output.enqueue(input.pop());
        }
    }

    void outputPrintsByImportance() {
        cout << "Result: ";
        Print tempPrint, tempPrint2; //해당 함수에서 사용할 Print형 임시 객체 2개를 생성합니다.
        while (!(output.isEmpty())){
            tempPrint = output.dequeue(); //output 큐의 객체 하나를 tempPrint에 넣습니다.
        for (int i = 0; i < MAX_INPUT_SIZE; i++) {
            if (output.isEmpty()) //queue가 비어있을 경우 오류를 발생시키니 비어있을 경우 해당 반복에서 벗어나도록 합니다.
                break;
            tempPrint2 = output.dequeue(); //tempPrint 객체와 비교할 tempPrint2객체를 output 큐에서 하나 넣습니다.
            /*tempPrint2 객체의 우선도가 높을 경우 기존 tempPrint 객체는 다시 enqueue해주고 tempPrint에 tempPrint2를 넣어줍니다.
             * 그 반대의 경우에는 tempPrint2객체를 다시 enqueue해줍니다.*/
            if (tempPrint.getImp() > tempPrint2.getImp())
                output.enqueue(tempPrint2);
            else if (tempPrint.getImp() < tempPrint2.getImp()) {
                output.enqueue(tempPrint);
                tempPrint = tempPrint2;
            }
            else if (tempPrint.getPages() > tempPrint2.getPages()) {
                output.enqueue(tempPrint2);
            }
            else if (tempPrint.getPages() < tempPrint2.getPages()) {
                output.enqueue(tempPrint);
                tempPrint = tempPrint2;
            }
        } //해당 반복을 벗어낫을 때의 tempPrint객체는 output 큐에서 가장 우선도가 높은 객체입니다.
            cout << tempPrint.getUser() << "  ";
        }
    }//큐가 비어있지 않을 동안 이를 반복합니다.


    void displayInput() { //input 스택의 요소들을 전부 출력한다.
    input.display();
}

    void displayOutput() { //output 큐의 요소들을 전부 출력한다.
        output.display();
    }
};


int main() {
    PrinterSim sim;

    sim.insertInputPrints(Print("A", 1, 5));
    sim.insertInputPrints(Print("B", 2, 13));
    sim.insertInputPrints(Print("C", 3, 3));
    sim.insertInputPrints(Print("D", 4, 15));
    sim.insertInputPrints(Print("E", 5, 10));
    sim.removePrintJob();
    sim.insertInputPrints(Print("F", 2, 10));
    sim.removePrintJob();
    sim.insertInputPrints(Print("G", 3, 10));
    sim.removePrintJob();
    sim.insertInputPrints(Print("H", 4, 20));
    sim.insertInputPrints(Print("I", 5, 20));
    sim.insertInputPrints(Print("J", 4, 18));
    sim.insertInputPrints(Print("K", 1, 20));
    sim.removePrintJob();
    sim.insertInputPrints(Print("L", 4, 10));
    sim.insertInputPrints(Print("M", 5, 19));
    sim.insertInputPrints(Print("N", 2, 19));
    sim.removePrintJob();
    sim.insertInputPrints(Print("O", 1, 19));
    sim.insertInputPrints(Print("P", 1, 18));
    sim.removePrintJob();
    sim.insertInputPrints(Print("Q", 3, 18));
    sim.insertInputPrints(Print("R", 4, 19));
    // 인쇄 요청 끝

    sim.displayInput();
    sim.movePrintsToOutputQueue();
    sim.displayOutput();
    sim.outputPrintsByImportance();
    //인쇄 요청 처리 끝

    return 0;

}
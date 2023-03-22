/*********************
 이 프로그램은 사용자가 0을 입력하여 프로그램을 종료할 때까지
 1. 정수의 자릿수 반환, 2. 정수의 모든 자리 숫자 더하기, 3. 세 정수의 내림차순 정렬
 을 입력값에 따라 처리하는 프로그램이다.
 
 작성자 : 20201458 장현경
 작성일 : 2022.11.24
 *************************/

#include <iostream>
using namespace std;

//함수원형
int countDigits(int);
int sumDigits(int);
void sortNumbers(int&, int&, int&);

//메인함수
int main() {
    int menuChoice;
    //0번을 누를 때까지 반복한다.
    do{
        //메뉴화면
        cout << "\n-------------------------" << endl;
        cout << "0. 프로그램 종료" << endl;
        cout << "1. 정수의 자릿수 반환" << endl;
        cout << "2. 정수의 모든 자리 숫자 더하기" << endl;
        cout << "3. 세 정수의 내림차순 정렬" << endl;
        cout << "-------------------------" << endl;
        cout << "원하는 메뉴를 선택하시오: ";
        
        cin >> menuChoice;
        //사용자가 0을 입력하였을 경우 프로그램 종료
        if (menuChoice == 0)
            cout << "프로그램을 종료합니다." << endl;
        //1. 정수의 자릿수 반환
        else if (menuChoice == 1){
            int number;
            cout << "정수를 입력하시오: " ;
            cin >> number;
            //입력한 정수를 매개변수로 전달
            cout <<"입력하신 정수의 자릿수는 "<< countDigits(number) << "입니다." << endl;
        }
        //2. 정수의 모든 자리 숫자 더하기
        else if (menuChoice == 2){
            int number;
            cout << "정수를 입력하시오: ";
            cin >> number;
            //입력한 정수를 매개변수로 전달
            cout <<"입력하신 정수의 모든 자리 숫자들을 더하면 "<< sumDigits(number) << "입니다." << endl;
        }
        //3. 세 정수의 내림차순 정렬
        else if (menuChoice == 3){
            int num1, num2, num3;
            cout << "세 정수를 입력하시오: ";
            cin >> num1 >> num2 >> num3;
            //정수 3개를 입력받아 각각 매개변수로 전달
            sortNumbers(num1, num2, num3);
            cout << "입력하신 세 정수를 내림차순으로 정렬하면 " << num1 << ", " << num2 << ", " << num3 << "입니다." << endl;
        }
        //이외 숫자 입력 시 반복
        else
            cout << "없는 메뉴를 선택하셨습니다." << endl;
    }while(menuChoice != 0);
   
}

//int형 정수를 매개변수로 받아 정수의 자릿수를 int형으로 반환
int countDigits(int num){
    static int digit = 0;
    digit = 0;
    do{
        num /= 10;
        digit++;
    }while(num != 0);
    return digit;
}

//int형 정수를 매개변수로 받아 정수의 자릿수의 합을 Int형으로 반환
int sumDigits(const int num){
    int sum = 0;
    //입력한 정수가 음수일 경우 양수로 바꾸어 대입
    int tempNum = (num > 0) ? num : -num;
    while(tempNum != 0){
        sum += tempNum % 10;
        tempNum /= 10;
    }
    return sum;
}

//int형 정수 3개를 매개변수로 받아 내림차순으로 변환
void sortNumbers(int& n1, int& n2, int& n3){
    if (n1 < n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 < n3){
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 < n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
}

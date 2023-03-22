/********************************
 *이 프로그램은 0번을 입력할 때까지 메뉴를 반복적으로 보여주며,
 *1번을 누르면 자동차 최소판매액을 계산하고,
 *2번을 누르면 양도성 예금증서를 계산하는 프로그램이다.
 *
 *작성자 : 컴퓨터공학과 20201458 장현경
 *작성일 : 2022년 11월 03일
 ********************************/
#include <iostream>
#include <iomanip>
using namespace std;

//메인함수
int main(){
    //메뉴 선택 반복
    int menuChoice;
    do{
    
        cout << "\n---------------------------" << endl;
        cout << "0. 프로그램 종료 " << endl;
        cout << "1. 자동차 최소판매액 계산" << endl;
        cout << "2. 양도성 예금증서 계산" << endl;
        cout << "---------------------------" << endl;
        cout << "원하는 메뉴를 선택하시오: ";
        cin >> menuChoice;
        
        //입력받은 변수를 스위치 인수로 사용
        switch (menuChoice) {
            //0 입력 시 프로그램 종료
            case 0:{
                cout << "프로그램을 종료합니다." << endl;
                break;
            }
            
            //1. 자동차 최소판매액 계산
            case 1:{
                int dreamIncome;
                cout << "목표연봉을 입력하시오: ";
                cin >> dreamIncome;
                //목표연봉 입력받음
                //sales(판매액), salesComission(판매수수료)
                int sales = 0;
                int salesComission = 0;
                //while문 반복시마다 판매액을 100만원씩 추가, 수수료 + 기본연봉 => 목표연봉 도달 시까지 반복
                while (salesComission + 30000000 < dreamIncome){
                    sales += 1000000;
                    if (sales < 100000000)
                        salesComission = sales * 0.05;
                    else if (sales < 500000000)
                        salesComission = 100000000 * 0.05 + (sales - 100000000) * 0.1;
                    else
                        salesComission = 100000000 * 0.05 + (500000000 - 100000000) * 0.1 + (sales - 500000000) * 0.15;
                }
                
                cout << fixed << setprecision(0) << "목표연봉 " << dreamIncome << "을 위해서는 " << sales << "원의 자동차 판매가 필요합니다. " << endl;
                break;
            }
                
            //2. 양도성 예금증서 계산
            case 2:{
                //purchasePrice(매입가격), yield(년 수익률), period(예치기간) 입력받음
                int purchasePrice;
                cout << "매입가격을 입력하시오: ";
                cin >> purchasePrice;
                double yield;
                cout << "년 수익률(%)을 입력하시오: ";
                cin >> yield;
                int period;
                cout << "예치기간(월)을 입력하시오: ";
                cin >> period;
                double price = purchasePrice;
                
                //예치기간 개월 수만큼 반복, 반복시마다 가격 출력
                for(int i = 1; i <= period; i++ ){
                    price *= (yield / 12.0 + 100) / 100;
                    cout << i << "개월: " << setw(10) << fixed << setprecision(0) << price << endl;
                }
                break;
            }
            //메뉴에 기재되어 있지 않은 값 입력 시 다시 반복
            default:
                cout << "없는 메뉴를 선택하셨습니다. " << endl;
        }
    }while(menuChoice != 0);
}

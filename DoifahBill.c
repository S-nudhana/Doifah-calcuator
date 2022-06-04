#include<stdio.h>
void main(){
    printf("========================= Doi Fah ============== By:Nudhana Sarutipaisan == \n");
    printf("Please select item of price \n");
    printf("[1] Coffee (35.00 B)    [2] Rice (150.00 B)   [3] Tea (135.00 B) \n");
    printf("[4] Milk (45.00 B)      [5] Orange juice (25.00 B) [0] Quit \n");
    printf("=========================================================================== \n");

    int mem,memprice,c,r,t,m,o,q,pay,amount,nonmemprice,n;
    float Sumprice,exc,excnon;

    int x = 0;
    int C = 35;
    int R = 150;
    int T = 135;
    int M = 45;
    int O = 25;

    printf("Start program(1), Quit(0) = ");
    scanf("%d",&q);
    if(q == 1){

        printf("Enter item of Coffee\n");
        printf("Item of quantity : ");
        scanf("%d",&c);
        printf("Enter item of Rice\n");
        printf("Item of quantity : ");
        scanf("%d",&r);
        printf("Enter item of Tea\n");
        printf("Item of quantity : ");
        scanf("%d",&t);
        printf("Enter item of Milk\n");
        printf("Item of quantity : ");
        scanf("%d",&m);
        printf("Enter item of Orange Juice\n");
        printf("Item of quantity : ");
        scanf("%d",&o);
        printf("\n");
        int sum = (C*c)+(R*r)+(T*t)+(M*m)+(O*o); //คำนวนราคารวม
        printf("Total price = ");
        printf("%d",sum); //แสดงราคารวม
        printf("\n");
        if(sum > 1000){ //ถ้ามีมากกว่า 1000 ได้ลด 10%
            printf("Surprise ! you get promotion 10%(If you buy over than 1,000 Bath) \n");
            int amount = (sum * 90)/100;
            printf("Amount = %d",amount); //ราคาก่อนหักส่วนลดสมาชิก
            printf("\n");
            printf("You are member Doi Fah shop? (1/0): "); //ตรวจสอบว่าเป็นสมาชิกหรือไม่
            scanf("%d",&mem);
            if( mem == 1){
                int memprice = (amount*95)/100; //ลด 5%
                int have,last;
                printf("Amount price  = %d",memprice); //ราคาหลังหักส่วนลดสมาชิก
                printf("\n");
                printf("Please paying( More than amount price ) => "); //เงินจ่ายไป
                scanf("%d",&have);
                if(have > memprice){ //ทอนเงิน
                    int Summemprice = have - memprice;
                    printf("Change : %d \n",Summemprice);
                    last = Summemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    Summemprice  = Summemprice % 1000;
                    last = Summemprice/500;
                    printf("Bank(500) : %d \n",last);
                    Summemprice  = Summemprice % 500;
                    last = Summemprice/100;
                    printf("Bank(100) : %d \n",last);
                    Summemprice  = Summemprice % 100;
                    last = Summemprice/50;
                    printf("Bank(50) : %d \n",last);
                    Summemprice  = Summemprice % 50;
                    last = Summemprice/20;
                    printf("Bank(20) : %d \n",last);
                    Summemprice  = Summemprice % 20;
                    last = Summemprice/10;
                    printf("Coin(10) : %d \n",last);
                    Summemprice  = Summemprice % 10;
                    last = Summemprice/5;
                    printf("Coin(5) : %d \n",last);
                    Summemprice  = Summemprice % 5;
                    last = Summemprice/2;
                    printf("Coin(2) : %d \n",last);
                    Summemprice  = Summemprice % 2;
                    last = Summemprice/1;
                    printf("Coin(1) : %d \n",last);
                    Summemprice  = Summemprice % 1;
                }else if(pay == amount){ //จ่ายพอดีไม่ต้องทอน
                    printf("No change");
                }else{
                    printf("Please Try again! \n"); //จ่ายใหม่
                    printf("Please paying( More than amount price ) => ");
                    scanf("%d",&have);
                    int Summemprice = have - memprice;
                    printf("Change : %d \n",Summemprice);
                    last = Summemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    Summemprice  = Summemprice % 1000;
                    last = Summemprice/500;
                    printf("Bank(500) : %d \n",last);
                    Summemprice  = Summemprice % 500;
                    last = Summemprice/100;
                    printf("Bank(100) : %d \n",last);
                    Summemprice  = Summemprice % 100;
                    last = Summemprice/50;
                    printf("Bank(50) : %d \n",last);
                    Summemprice  = Summemprice % 50;
                    last = Summemprice/20;
                    printf("Bank(20) : %d \n",last);
                    Summemprice  = Summemprice % 20;
                    last = Summemprice/10;
                    printf("Coin(10) : %d \n",last);
                    Summemprice  = Summemprice % 10;
                    last = Summemprice/5;
                    printf("Coin(5) : %d \n",last);
                    Summemprice  = Summemprice % 5;
                    last = Summemprice/2;
                    printf("Coin(2) : %d \n",last);
                    Summemprice  = Summemprice % 2;
                    last = Summemprice/1;
                    printf("Coin(1) : %d \n",last);
                    Summemprice  = Summemprice % 1;
                }
                getch();
            }else if( mem == 0){ //ไม่เป็นสมาชิก
                int have,last;
                printf("Please paying( More than amount price ) => ");
                scanf("%d",&have);
                if(have > amount){
                    int nonmemprice = have - amount;
                    printf("Change : %d \n",nonmemprice);
                    last = nonmemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    nonmemprice  = nonmemprice % 1000;
                    last = (nonmemprice/500);
                    printf("Bank(500) : %d \n",last);
                    nonmemprice  = nonmemprice % 500;
                    last = (nonmemprice/100);
                    printf("Bank(100) : %d \n",last);
                    nonmemprice  = nonmemprice % 100;
                    last = (nonmemprice/50);
                    printf("Bank(50) : %d \n",last);
                    nonmemprice  = nonmemprice % 50;
                    last = (nonmemprice/20);
                    printf("Bank(20) : %d \n",last);
                    nonmemprice  = nonmemprice % 20;
                    last = (nonmemprice/10);
                    printf("Coin(10) : %d \n",last);
                    nonmemprice  = nonmemprice % 10;
                    last = (nonmemprice/5);
                    printf("Coin(5) : %d \n",last);
                    nonmemprice  = nonmemprice % 5;
                    last = (nonmemprice/2);
                    printf("Coin(2) : %d \n",last);
                    nonmemprice  = nonmemprice % 2;
                    last = (nonmemprice/1);
                    printf("Coin(1) : %d \n",last);
                    nonmemprice  = nonmemprice % 1;
                }else if(pay == amount){
                    printf("No change");
                }else{
                    printf("Please Try again! \n");
                    printf("Please paying( More than amount price ) => ");
                    scanf("%d",&have);
                    int nonmemprice = have - amount;
                    printf("Change : %d \n",nonmemprice);
                    last = nonmemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    nonmemprice  = nonmemprice % 1000;
                    last = (nonmemprice/500);
                    printf("Bank(500) : %d \n",last);
                    nonmemprice  = nonmemprice % 500;
                    last = (nonmemprice/100);
                    printf("Bank(100) : %d \n",last);
                    nonmemprice  = nonmemprice % 100;
                    last = (nonmemprice/50);
                    printf("Bank(50) : %d \n",last);
                    nonmemprice  = nonmemprice % 50;
                    last = (nonmemprice/20);
                    printf("Bank(20) : %d \n",last);
                    nonmemprice  = nonmemprice % 20;
                    last = (nonmemprice/10);
                    printf("Coin(10) : %d \n",last);
                    nonmemprice  = nonmemprice % 10;
                    last = (nonmemprice/5);
                    printf("Coin(5) : %d \n",last);
                    nonmemprice  = nonmemprice % 5;
                    last = (nonmemprice/2);
                    printf("Coin(2) : %d \n",last);
                    nonmemprice  = nonmemprice % 2;
                    last = (nonmemprice/1);
                    printf("Coin(1) : %d \n",last);
                    nonmemprice  = nonmemprice % 1;
                }
                getch();
            }else{
                printf("Please try again!");
            }
        }else{ //ซื้อต่ำกว่า1000
            printf("You are member Doi Fah shop? (1/0): "); //ถามว่าเป็นสมาชิกหรือไม่
            scanf("%d",&mem);
            if( mem == 1){
                int memprice = (sum*95)/100; //ลด 5%
                int have,last;
                printf("Amount price  = %d",memprice);
                printf("\n");
                printf("Please paying( More than amount price ) => ");
                scanf("%d",&have);
                if(have > memprice){ //ทอนเงิน
                    int Summemprice = have - memprice;
                    printf("Change : %d \n",Summemprice);
                    last = Summemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    Summemprice  = Summemprice % 1000;
                    last = Summemprice/500;
                    printf("Bank(500) : %d \n",last);
                    Summemprice  = Summemprice % 500;
                    last = Summemprice/100;
                    printf("Bank(100) : %d \n",last);
                    Summemprice  = Summemprice % 100;
                    last = Summemprice/50;
                    printf("Bank(50) : %d \n",last);
                    Summemprice  = Summemprice % 50;
                    last = Summemprice/20;
                    printf("Bank(20) : %d \n",last);
                    Summemprice  = Summemprice % 20;
                    last = Summemprice/10;
                    printf("Coin(10) : %d \n",last);
                    Summemprice  = Summemprice % 10;
                    last = Summemprice/5;
                    printf("Coin(5) : %d \n",last);
                    Summemprice  = Summemprice % 5;
                    last = Summemprice/2;
                    printf("Coin(2) : %d \n",last);
                    Summemprice  = Summemprice % 2;
                    last = Summemprice/1;
                    printf("Coin(1) : %d \n",last);
                    Summemprice  = Summemprice % 1;
                }else if(pay == amount){
                    printf("No change");
                }else{
                    printf("Please Try again! \n");
                    printf("Please paying( More than amount price ) => ");
                    scanf("%d",&have);
                    int Summemprice = have - memprice;
                    printf("Change : %d",Summemprice);
                    last = Summemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    Summemprice  = Summemprice % 1000;
                    last = Summemprice/500;
                    printf("Bank(500) : %d \n",last);
                    Summemprice  = Summemprice % 500;
                    last = Summemprice/100;
                    printf("Bank(100) : %d \n",last);
                    Summemprice  = Summemprice % 100;
                    last = Summemprice/50;
                    printf("Bank(50) : %d \n",last);
                    Summemprice  = Summemprice % 50;
                    last = Summemprice/20;
                    printf("Bank(20) : %d \n",last);
                    Summemprice  = Summemprice % 20;
                    last = Summemprice/10;
                    printf("Coin(10) : %d \n",last);
                    Summemprice  = Summemprice % 10;
                    last = Summemprice/5;
                    printf("Coin(5) : %d \n",last);
                    Summemprice  = Summemprice % 5;
                    last = Summemprice/2;
                    printf("Coin(2) : %d \n",last);
                    Summemprice  = Summemprice % 2;
                    last = Summemprice/1;
                    printf("Coin(1) : %d \n",last);
                    Summemprice  = Summemprice % 1;
                }
                getch();
            }else if(mem == 0){
                int have,last;
                printf("Please paying( More than amount price ) => ");
                scanf("%d",&have);
                if(have > amount){
                    int nonmemprice = have - amount;
                    printf("Change : %d \n",nonmemprice);
                    last = nonmemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    nonmemprice  = nonmemprice % 1000;
                    last = (nonmemprice/500);
                    printf("Bank(500) : %d \n",last);
                    nonmemprice  = nonmemprice % 500;
                    last = (nonmemprice/100);
                    printf("Bank(100) : %d \n",last);
                    nonmemprice  = nonmemprice % 100;
                    last = (nonmemprice/50);
                    printf("Bank(50) : %d \n",last);
                    nonmemprice  = nonmemprice % 50;
                    last = (nonmemprice/20);
                    printf("Bank(20) : %d \n",last);
                    nonmemprice  = nonmemprice % 20;
                    last = (nonmemprice/10);
                    printf("Coin(10) : %d \n",last);
                    nonmemprice  = nonmemprice % 10;
                    last = (nonmemprice/5);
                    printf("Coin(5) : %d \n",last);
                    nonmemprice  = nonmemprice % 5;
                    last = (nonmemprice/2);
                    printf("Coin(2) : %d \n",last);
                    nonmemprice  = nonmemprice % 2;
                    last = (nonmemprice/1);
                    printf("Coin(1) : %d \n",last);
                    nonmemprice  = nonmemprice % 1;
                }else if(pay == amount){
                    printf("No change");
                }else{
                    printf("Please Try again! \n"); //ลองใส่จำนวนเงินใหม่
                    printf("Please paying( More than amount price ) => ");
                    scanf("%d",&have);
                    int nonmemprice = have - amount;
                    printf("Change : %d \n",nonmemprice);
                    last = nonmemprice/1000;
                    printf("Bank(1000) : %d \n",last);
                    nonmemprice  = nonmemprice % 1000;
                    last = (nonmemprice/500);
                    printf("Bank(500) : %d \n",last);
                    nonmemprice  = nonmemprice % 500;
                    last = (nonmemprice/100);
                    printf("Bank(100) : %d \n",last);
                    nonmemprice  = nonmemprice % 100;
                    last = (nonmemprice/50);
                    printf("Bank(50) : %d \n",last);
                    nonmemprice  = nonmemprice % 50;
                    last = (nonmemprice/20);
                    printf("Bank(20) : %d \n",last);
                    nonmemprice  = nonmemprice % 20;
                    last = (nonmemprice/10);
                    printf("Coin(10) : %d \n",last);
                    nonmemprice  = nonmemprice % 10;
                    last = (nonmemprice/5);
                    printf("Coin(5) : %d \n",last);
                    nonmemprice  = nonmemprice % 5;
                    last = (nonmemprice/2);
                    printf("Coin(2) : %d \n",last);
                    nonmemprice  = nonmemprice % 2;
                    last = (nonmemprice/1);
                    printf("Coin(1) : %d \n",last);
                    nonmemprice  = nonmemprice % 1;
                }
                getch();
            }else{
                printf("Please try again!");
            }
        }
    }else{  //ออก
        printf("Quit");
        getch();
    }
    printf("Thank you ... See you again.");
    getch();
}
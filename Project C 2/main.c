#include <stdio.h> //นำเข้าคำสั่งทั้งหมดจากไฟล์ stdio.h(header file)
#include <stdbool.h>//นำเข้าค่าboolมาแสดงผล
#include<string.h>//ไว้ใช้สำหรับการเปรียบเทียบstr
#define ID 101 //การสร้างค่าคงที่
#include <ctype.h>

void showName(){//การสร้าง function
    printf("########\n");
    printf("#Apisit#\n");
    printf("########\n");

}
int main() //main คือฟังก์ชั่นเริ้มต้นรันโปรแกรม
{
    /* //การแสดงผลข้อมูล
    printf("Apisit!\n"); // "\n"=ขึ้นบรรทักใหม่
    printf("123");
    printf("Student Data\n");
    printf("Name = %s","Apisit"); //คำว่าApisitต่อท้าย "," จึงจะต้องใส่ "%s"
    printf("\nFirstName = %s \t,\t LastName = %s","Apisit","Jessadaapimuk");
    printf("\nAge = %d",30);//"%d"  =รับข้อมูลจำนวนเต็ม
    printf("\ngender = %c\n",'M');//"%c"=char=ใช้รับข้อมูล1ตัวอักษร หรือ ตัวที่ใช้ '-'
    printf("GPA = %.2f\n",3.75);
    printf("Address = %s , Tel = %s\n","At home","0802322555");
    */

    /* //การสร้างตัวแปร กำหนดชนิดข้อมูล
    //ชนิดข้อมูล ชื่อตัวแปร = ค่าเริ่มต้น
    char gender1,gender2;// สามารถสร้างตัวแปร2ตัวได้ใน1บรรทัด
    char gender='M';
    printf("%c\n",gender);
    */
    /*
    //student data
    char name[6]="Apisit",gender='M';// "[-]"จำนวนตัวอักษรที่เก็บได้ในตัวแปร
    int age=16;
    //char gender='M';
    float gpa=3.75;
    bool status = true;

    age=10;//การเปลี่ยนค่า,ข้อมูลในตัวแปร
    gpa=4.00;

    //output data
    printf("Name = %s \n",name);
    printf("Age = %d \n",age);
    printf("Gender = %c \n",gender);
    printf("GPA = %.2f \n",gpa);
    printf("Status = %d \n",status);
    */
    /* //การกำหนดค่าคงที่
    printf("Name=%s\n","Apisit");
    printf("ID = %d\n",ID);
    const int BATTERY_MAX = 100;//"const"=การกำหนดค่าคงที่
    printf("Max = %d\n",BATTERY_MAX);
    */
    /*//การเก็บข้อมูล ในชนิดข้อมูลchar
    //data
    char name[10],gender;
    int age;
    float gpa;

    //input
    printf("Input Name = ");
    scanf("%s",&name);//"name"ใช้เก็บข้อมูล
    printf("Input Age = ");
    scanf("%d",&age);
    printf("Input Gender = ");
    scanf("%c",&gender);
    printf("Input GPA = ");
    scanf("%f",&gpa);


    //output
    printf("--------------------------\n");
    printf("Student Name = %s\n",name);
    printf("Age = %d",&age);
    printf("Gender = %c\n",gender);
    printf("GPA = %f\n",gpa);
    */
    /*
    //int number1=10;
    //int number2=3;
    int number1,number2;

    printf("Input Number1 = ");
    scanf("%d",&number1);
    printf("Input Number2 = ");
    scanf("%d",&number2);
    printf("------------------\n");
    printf("%d + %d = %d\n",number1,number2,number1+number2);
    printf("%d x %d = %d\n",number1,number2,number1*number2);
    printf("%d mod %d = %d\n",number1,number2,number1%number2);
    */
    /*
    int a=5;
    printf("value = %d\n",a+1);//a=6เพิ่มค่าแค่ครั่งเดียว
    printf("postfix = %d\n",a++);//แสดงผลก่อนคอยเพิ่มค่า//แสดงผลa=5ก่อนแล้วค่อยa=6
    printf("%d\n",a);
    printf("prefix = %d\n",++a);//เพิ่มค่าก่อน ค่อยแสดงผล//a=7
    printf("current = %d\n",a);
    int b=10;
    printf("value = %d\n",b);
    printf("postfix = %d\n",b--);
    printf("prefix = %d\n",--b);
    */
    /* //การลดรูป
    int x=100;
    int y=34;
    int result=x+y;

    x+=50;//x=x+50
    printf("x = %d\n",x);
    printf("%d\n",result);
    */
    /* //เงื่อนไขการเปลี่ยบเทียบ
    int x=100,y=300;
    printf("%d\n",x==y);
    printf("%d\n",x!=y);
    printf("%d\n",x<=y);
    */
    /* //เงื่อนไขif else
    int score;
    printf("Input Score = ");
    scanf("%d",&score);
    printf("score = %d\n",score);
    if(score>=50){
        //statement
        printf("Pass Exam\n");
    }else{
        printf("Not Pass\n");
    }
    */
    /* //เงื่อนไขหลายเงื่อนไข
    int number1,number2;
    printf("Number1 = ");
    scanf("%s",&number1);
    printf("Number2 = ");
    scanf("%s",&number2);
    if(number1>number2){
        printf("%d > %d\n",number1,number2);
    }else if (number2>number1){
        printf("%d > %d\n",number2,number1);
    }else{
        printf("%d = %d\n",number1,number2);
    }
    */

    /* //เงื่อนไข แบบลัดรูป
    char grade;
    int score;
    printf("Input Score = ");
    scanf("%d",&score);

    //ternary operator
    grade=(score>=50) ? 'A' : 'F';
    printf("Result %c\n",grade);
    */

    /* //เครื่องหมายทางตรรกศาสตร์
    char gender;
    int age;
    printf("Input Gender(M/F) :");
    scanf("%c",&gender);
    printf("Input Age :");
    scanf("%d",&age);

    if(gender=='M' && age>=20){ // &&=และ ||=หรือ
        printf("Pass\n");
    }else{
        printf("Not Pass\n");
    }
    */

    /* //การตัดเกรด
    int score;
    char grade;
    printf("Input Score = ");
    scanf("%d",&score);

    if(score>=80 && score<=100){
        grade='A';
    }else if(score>=70 && score<=79){
        grade='B';
    }else if(score>=60 && score<=69){
        grade='c';
    }else if(score>=0 && score<=59){
        grade='F';
    }else{
        grade='N';
    }
    printf("%c",grade);
    */

    /* //การเปรียบเทียบstr โดยใช้strcmp
    char username[10],password[10];
    int choice;
    printf("Username = ");
    scanf("%s",&username);
    printf("Password = ");
    scanf("%s",&password);
    if(strcmp(username,"member")==0 && strcmp(password,"1234")==0){
        printf("Login Complete\n");
        printf("Select Choice(1-2) = ");
        scanf("%d",&choice);

        if (choice==1){
            printf("Withdraw\n");
        }else if(choice==2){
            printf("Deposite\n");
        }else{
            printf("Logout");
        }
    }else{
        printf("Not Found\n");
    }
    */


    /* //การใช้ switch case
    int service;
    printf("Inout Service Number = ");
    scanf("%d",&service);

    switch(service){//switch(ตัวแปรทำต้องการตรวจสอบค่า)
    case 1://case ข้อมูลในตัวแปร:
        printf("Create Account\n");
        break;//เพื่อบอกจุดสิ้นสุดของเงื่อนไข และถ้าไม่มีbreakมันจะไปทำงานทุกcase
    case 2:
        printf("Withdraw\n");
        break;
    case 3:
        printf("Deposite\n");
        break;
    default://ค่าที่ไม่มีในเงื่อนไข
        printf("Invalid\n");
    }
    */

    /*//while loop //ไม่รู้จำนวนรอบที่ชัดเจน
    int count=1;
    while(count<=30){
        printf("%d. Hellooo!!\n",count);
        count++;//"++"=count+1
    }
    */

    /* //for loop //รู้จำนวนรอบที่ชัดเจน
    for(int count=1;count<=25;count+=1){//(ตัวแปรเริ่มต้น;เงื่อนไข;การเพิ่มค่าตัวแปร)
        printf("%d. skibidi Apisitjj2\n",count);
    }
    */

    /* //do while loop //ใช้ในตอนที่ต้องการให้ลองทำก่อน1รอบ
    int count=15;
    do{ //แสดงผลค่าก่อนค่อยตรวจสอบค่าว่าเป็นจริงหรือไม่
        printf("%d\n",count);
        count++;
    }while(count<=10);
    printf("End Program\n");
    */

    /* //คำสั้ง continue , break
    for(int count=1;count<=10;count++){
        if(count==5){
            continue; //"continue"=การเริ่มต้นลูปใหม่ "break"=หยุดทำงาน
        }
         printf("%d\n",count);
    }
    printf("End Program\n");
    */

    /* //การคำนวนหาผลรวมของตัวเลข5จำนวน
    int number,total;
    for(int count=1;count<=5;count++){
        printf("Input Number %d :",count);
        scanf("%d",&number);
        total+=number;

    }
    printf("Result = %d",total);
    */


    /* //การหาผลรวม
    int number,total=0;
    while(1){//while(1)=while(true)=จริง,ไม่สิ้นสุด
        printf("Input Number = ");
        scanf("%d",&number);
        if(number<=0){
            break;
        }
        total+=number;
    }
    printf("Result = %d\n",total);
    */

    /* //แม่สูตรคูณ
    int number;
    printf("Input Number = ");
    scanf("%d",&number);

    printf("-----Table %d-----\n",number);
    for(int i=1;i<=12;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
    */


    /* //Nested Loop
    for(int i=1;i<=23;i++){
        printf("Outside = %d\n",i);
        for(int j=1;j<=43;j++){
            printf("Inside = %d\n",j);
        }
    }
    */

    /* //แม่สูตรคูณแบบกำหนดช่วง
    int  start,end;
    printf("Input Start = ");
    scanf("%d",&start);
    printf("Input End = ");
    scanf("%d",&end);

    for (int i=start;i<=end;i++){
        printf("-----Table%d-----\n",i);
        for(int j=1;j<=12;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    */

    //-----Phase2-----//

    /* //การใช้ getchar , putchar
    char confirm;
    printf("Do you want to exit program (y/n) :");

    confirm=getchar(); //scanf("%c",&confirm);

    putchar(confirm); //printf("%c",confirm);
    */

    /* //การใช้ gets และ puts ในการแสดงข้อมูลประเภทstring
    char name[20];
    printf("Inout Your Name = ");
    gets(name); //scanf("%s",&name);
    puts(name); //printf("%s",&name);
    */


    /* //การสร้างArray
    int score[]={100,80,60,70,88}; //score[]ถ้าไม่ระบุจำนวนArrayจะสามารถใส่ข้อมูลกี่ค่าก็ได้
    char vowels[]={'A','E','I','O','U'};//การเก็บกลุ่มตัวอักอักษร
    char name[6]={'A','P','I','S','I','T'};
    */

    /* การรเรียกใช้ข้อมูลในList
    int score[]={100,90,80,70,60};
    score[1]=99; //การเปลี่ยนแปลงข้อมูล

    printf("%d\n",score[0]);
    printf("%d\n",score[3]);

    for(int index=0;index<5;index++){
        printf("intdex %d = %d\n",index,score[index]);
    }
    */



    /* //การหาผลรวม และ ค่าเฉลี่ย โดยการใช้Listช่วย
    //input
    int count;
    printf("Input Count = ");
    scanf("%d",&count);

    int number[count];
    float sum,avg;
    for(int i=0;i<count;i++){
        printf("Enter Number %d : \n",i+1);
        scanf("%d",&number[i]);
    }
    //process
    for(int j=0;j<count;j++){
        sum+=number[j];
    }
    avg=sum/count;
    //output
    printf("Total = %.2f\n",sum);
    printf("Averege =%.2f\n",avg);
    */

    /*
    int score[2][3]={
    //col 0 ,1  ,2
        {50,60,70}, //row=0
        {90,85,89} //row=1
    };
    int total;
    score[0][1]=100; //การเปลี่ยนแปลงข้อมูลไนArray
    //printf("%d\n",score[1][2]);
    //printf("%d\n",score[0][1]);

    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
                total+=score[row][col];
        }
    }
    printf("Total= %d\n",total);//การหาผลรวม
    printf("Avg= %d\n",total/6);//การหาค่าเฉลี่ย
    */



    /*
    int n;
    int number[10];
    scanf("%d",&n);
    for(int i;i<n;i++){
        scanf("%d",&number[i]);
    }
    int min=0,max=0;
    min=number[0];
    max=number[0];

    for (int i=0;i<n;i++){
        if (number[i]<min){
            min=number[i];
        }
    }
    for (int i=0;i<n;i++){
        if (number[i]>max){
            max=number[i];
        }
    }

    printf("%d\n",min);
    printf("%d",max);
    */


    /*
    bool foundUpper=false;
    bool foundLower=false;

    char text[100];
    scanf("%s",&text);

    int i=strlen(text);
    for(int j=0;j<i;j++){
        if (isupper(text[j])){
            foundUpper=true;
        }
        if (islower(text[j])){
            foundLower=true;
        }

    }
    if (foundLower==foundUpper){
                printf("Mix");
            }else if(foundUpper && foundLower == false){
                printf("All Capital Letter");
            }else if(foundUpper== false && foundLower){
                printf("All Small Letter");
            }

    */


    showName();//การเรียกใช้functionที่สร้างขึ้น





    return 0;
}

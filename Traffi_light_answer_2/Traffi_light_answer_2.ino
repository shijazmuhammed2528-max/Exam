#define A_R_led 1
#define A_Y_led 2
#define A_G_led 3

#define B_R_led 4
#define B_Y_led 5
#define B_G_led 6

#define C_R_led 7
#define C_Y_led 8
#define C_G_led 9

#define D_R_led 10
#define D_Y_led 11
#define D_G_led 12

void setup() {
      Serial.begin(9600);
    for(int i=1 ; i <= 12 ;i++)
      pinMode(i,OUTPUT);

}

void loop() {

    digitalWrite(A_G_led, HIGH );   digitalWrite(B_R_led, HIGH );  digitalWrite(C_R_led, HIGH );  digitalWrite(D_R_led, HIGH );  // A block open.
    Serial.println("A-block is open  . A-Green");
    delay(5*1000);
    digitalWrite(A_G_led, LOW );    digitalWrite(B_R_led, LOW );  // A block G led and B block R led off.


    // show yellow light on A block to be red and also B block to be green
    digitalWrite(A_Y_led, HIGH );    digitalWrite(B_Y_led, HIGH );  
    Serial.println("A and B block is Yellow  . Y");
    delay(3*1000);
    digitalWrite(A_Y_led, LOW );     digitalWrite(B_Y_led, LOW );    // A block Y led off and B bloke Y led off 

    // A block red light on . B block G led on. 
    digitalWrite(A_R_led, HIGH );    digitalWrite(B_G_led, HIGH );    //  B block open
    Serial.println("B-block is open  . G-Green");
    delay(5*1000);
    digitalWrite(A_R_led, LOW );     digitalWrite(B_G_led, LOW );  digitalWrite(C_R_led, LOW );  

    // Yellow light on B and C . for open block c 
    digitalWrite(A_R_led, HIGH );    digitalWrite(B_Y_led, HIGH );  digitalWrite(B_Y_led, HIGH );  // Yellow on B and c 
    Serial.println("B and C block yellow  . Y");
    delay(3*1000);
    digitalWrite(A_R_led, HIGH );    digitalWrite(B_Y_led, LOW );  digitalWrite(B_Y_led, LOW );  // Yellow B and c off

      // B block red on C block Green light on 
                                     digitalWrite(B_R_led, HIGH );   digitalWrite(C_G_led, HIGH );  // C block open 
                                      Serial.println("C- block open");
    delay(5*1000);
                                     digitalWrite(B_R_led, HIGH );   digitalWrite(C_G_led, LOW );  digitalWrite(D_R_led, LOW );

    // yellow on c and d block.
                                     digitalWrite(B_R_led, HIGH );   digitalWrite(C_Y_led, HIGH ); digitalWrite(D_Y_led, HIGH );
        delay(3*1000);
                                                                     digitalWrite(C_Y_led, LOW ); digitalWrite(D_Y_led, LOW );

                                                                     digitalWrite(C_R_led, HIGH ); digitalWrite(D_G_led, HIGH );

    

}


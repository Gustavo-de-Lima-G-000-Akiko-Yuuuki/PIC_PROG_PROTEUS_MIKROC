void main() {
     TRISB.f0 =  0;  //0b00000000; //PORT B é OUTPUT saida
     PORTB.f0 = 0;   //0b11111111; //PORT define set como LOW
     
     while(1){
     PORTB.f0 = 1;      //pinout high
     Delay_ms(250);     //delay 250ms
     PORTB.f0 = 0;      //pinout low
     Delay_ms(250);     //delay 250ms

}
}

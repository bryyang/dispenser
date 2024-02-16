int main(void){
	
	DDRD  &=~ (1<<DDD2)|(1<<DDD3)|(1<<DDD4);													//PuertoD bit 2-4 entrada

	PORTD &=~ ((1<<PORTD2)|(1<<PORTD3)|(1<<PORTD4));											//PuertoD bit 2-4 s/pull-up

	DDRB  |=   (1<<DDB0)|(1<<DDB1);																// Puerto B bit0 y 1 salida
	PORTB &=~  (1<<PORTB0)|(1<<PORTB1);															// Puerto Bbit 0 y 1 empieza en 0
    
	while (1){


		if(PIND&(1<<2))
			PORTB = (1<<PORTB0);			// (1<<PORTB0)|(1<<PORTB1)|(1<<PORTB2); PORTB =	0b00000001;


		if(PIND&(1<<3))
			PORTB =	0b00000000;			// (0<<PORTB0)|(0<<PORTB1)|(0<<PORTB2);



		if(PIND&(1<<4))
			PORTB = (1<<PORTB1);			// (0<<PORTB0)|(0<<PORTB1)|(0<<PORTB2);


    }
}

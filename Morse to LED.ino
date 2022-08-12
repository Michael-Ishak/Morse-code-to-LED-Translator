void setup() {
	pinMode(13, OUTPUT); //Which pin is changing
}

void loop() {
	int i = 0;
	while (i < str.size())
	{
		translated = Morse(toupper(str[i]));
		if (translated[i] = '-')//If a dash
		{
			digitalWrite(13, HIGH); //Turns on LED connecting to pin 13
			delay(2000); //Keep on for 2000ms
			digitalWrite(13, LOW);//Turns off LED connecting to pin 13
			delay(500);//Keep off for 500ms
		}
		else if (translated[i] = '.')//if a dot
		{
			digitalWrite(13, HIGH); //Turns on LED connecting to pin 13
			delay(500); //Keep on for 500ms
			digitalWrite(13, LOW);//Turns off LED connecting to pin 13
			delay(500);//Keep off for 500ms
		}
		else
		{
			digitalWrite(13, LOW);//Turns off LED connecting to pin 13
			delay(2000);//Keep off for 2000ms
		}
		i++;
	}
	return 0;
}
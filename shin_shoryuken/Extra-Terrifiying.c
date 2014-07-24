

int leftET=1;
int rightET=3;
int followDistance=500;

int main()
{	
	analog_et(1);	//turning off pullup resistor because ET has it built in
	analog_et(3);	
	
	while(1)
	{
		
		if(analog(leftET)<followDistance && analog(rightET)<followDistance)	//needs to be fixed
		{
			motor(1,500);	//more code
			motor(3,500);	//here have code
			msleep(500);	//AAAAAAAAAAAAAAAAAAAAAa
		}	//AAAsasdfjslfjl;sadfjladfdkfjhsgdfwkgheskafhds
		
		else if(analog(leftET)>followDistance && analog(rightET)<followDistance)	//MY HANDS ARE TYPING WORDS
		{																			//HAAAAAAAAAAAAAAANDS
			motor(1,-100);
			motor(3,-100);
			msleep(500);
		}
	}
	return 0;
}

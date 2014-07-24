

int leftET=1;
int rightET=3;
int followDistance=;

int main()
{
	analog_et(1);
	analog_et(3);
	
	while(1)
	{
		
		if(analog(leftET)<followDistance && analog(rightET)<followDistance)
		{
			motor(1,500);
			motor(3,500);
			msleep(500);
		}
		
		else if(analog(leftET)>followDistance && analog(rightET)<followDistance)
		{
			motor(1,-100);
			motor(3,-100);
			msleep(500);
		}
	}
	return 0;
}

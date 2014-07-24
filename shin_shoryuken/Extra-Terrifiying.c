

int leftET=1;
int rightET=3;
int followDistance=;

int main()
{
	set_analog_pullup(leftET,0);
	set_analog_pullup(rightET,0);
	
	while(analog(leftET)<followDistance && analog(rightET)<followDistance)
	{
		motor(1,500);
		motor(3,500);
		msleep(500);
	}
	
	while(analog(leftET)>followDistance && analog(rightET)<followDistance)
	{
		motor(1,-100);
		motor(3,-100);
		msleep(500);
		
	}
	return 0;
}

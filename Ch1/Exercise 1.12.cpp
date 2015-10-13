/*Exercise 1.12: What does the following for loop do ? What is the final value
of sum ?
Click here to view code image
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;*/
int main() 
{
	int sum = 0;
	//Sum the numbers from -100 to 100
	for (int i = -100; i <= 100; ++i)
		sum += i;
	return 0;
}
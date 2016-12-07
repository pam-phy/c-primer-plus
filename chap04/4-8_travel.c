#include<stdio.h>
#define gallon_liter 3.785
#define mile_km 1.609

int main(void)
{
	float distance, amount;
	float consumption;
	

	printf("Enter the number of miles traveled and gallons of gasoline comnsumed:\n");
	scanf("%f %f", &distance, &amount);
	consumption = distance / amount;
	printf("%.1f miles-per-gallon\n", consumption);
	printf("%.1f liters-per-100-km\n", consumption * mile_km / 100 / gallon_liter);

	return 0;
}

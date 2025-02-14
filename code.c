#include <stdio.h>
// Function to calculate and return the output voltage of a differential amplifier
double calculateOutputVoltage(double V1, double V2, double R1, double R2, double Rf) {
 // Assuming an ideal operational amplifier
 double A = -Rf / R1;
 double V_out = A * (V2 - V1);
 return V_out;
}
int main() {
 // Declare variables
 double V1, V2, R1, R2, Rf;
 // Take input from user
 printf("Enter the value of V1 (in volts): ");
 scanf("%lf", &V1);
 printf("Enter the value of V2 (in volts): ");
 scanf("%lf", &V2);
 printf("Enter the value of R1 (in ohms): ");
 scanf("%lf", &R1);
 printf("Enter the value of R2 (in ohms): ");
 scanf("%lf", &R2);
 printf("Enter the value of Rf (in ohms): ");
 scanf("%lf", &Rf);
 // Calculate and print the output voltage
 double V_out = calculateOutputVoltage(V1, V2, R1, R2, Rf);
 printf("Output Voltage (V_out) = %lf volts\n", V_out);
 return 0;
}
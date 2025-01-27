int main() {float x = 10.0; int y = 5; float z = x / y; printf("%f", z); return 0;}

//Alternative solution:
int main() {int x = 10; int y = 5; float z = (float)x / y; printf("%f", z); return 0;}

//Alternative solution using double for better precision:
int main() {int x = 10; int y = 5; double z = (double)x / y; printf("%lf", z); return 0;} 
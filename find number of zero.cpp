int num_zeros(int n)    /* File: num-zeros.cpp */
{
    if (n == 0)              // Base case #1
        return 1;

    else if (n < 10 && n > 0) // Base case #2
        return 0;

    else
        return num_zeros(n/10) + num_zeros(n%10);
}


int main()	
{
    int n;

    while (cin >> n)
		cout << "num_zeros(" << n << ") = " << num_zeros(n) << endl;
	
    return 0;
}

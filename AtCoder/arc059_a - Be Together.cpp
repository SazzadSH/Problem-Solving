    #include <iostream>
    #include <cmath>

    int main()
    {
        int n, median, res = 0;
        int sum = 0;
        std::cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
            sum += arr[i];
        }

        median = round(double(sum)/n);

        for(int i = 0; i < n; i++)
        {
            res += pow((arr[i] - median), 2);
        }

        std::cout << res << std::endl;

        return 0;
    }

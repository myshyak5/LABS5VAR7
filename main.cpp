#include <iostream>

int main()
{
//1 задание
    int numbers[] = {1, 2, 3, 4, -7, -14}; //Без понятия как задать последовательность с клавиатуры
    int sum = 0;
    int min_37 = 0;
    int num_min_37;

    for (int i = 0; i < 6; i++)
        if ((((numbers[i] % 7) == 0) || ((numbers[i] % 3) == 0)) && (numbers[i] < 0))
        {
            sum += numbers[i];
            if (numbers[i] < min_37)
            {
                min_37 = numbers[i];
                num_min_37 = i;
            }
        }
    std::cout << sum << std::endl;
    std::cout << min_37 << std::endl;
    std::cout << num_min_37 << std::endl;

//2 задание
    unsigned int N;
    int mult = 1;

    std::cin >> N;
    while (N > 0)
    {
        int c = N % 10;
        if ((c % 2) == 0)
        {
            mult *= c;
        }
        N /= 10;
    }
    std::cout << mult << std::endl;

    return 0;
}
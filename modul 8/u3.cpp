#include <iostream>
#include <vector>

// Fungsi untuk menghitung berapa banyak angka 4 dalam data
int countNumber(const std::vector<int> &data, int target)
{
    int count = 0;

    for (int num : data)
    {
        if (num == target)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    // int ukuran = sizeof(data) / sizeof(data[0]);
    int ukuran = 10;

    // Menghitung berapa banyak angka 4 dalam data
    int count = countNumber(data, target);
    std::cout << "\nData : ";
    for (int i = 0; i < ukuran; i++)
    {
        std::cout << data[i] << ", ";
    }
    std::cout << "\nBanyaknya angka " << target << " dalam data: " << count << std::endl;

    return 0;
}

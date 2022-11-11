#include <iostream>

using namespace std;

int fill(double* pMem, int n);
int findMinIndex(double* pMem, int n);
void findZeroCount(double* pMem, int n, int* zeroCount);
double sum(double* pMem, int minIndex, int n);
double sortByAbsolute(double* pMem, int n);
void displayArray(double* pMem, int n);

int main()
{
    int n;
    int zeroCount = 0;
    double S;
    cout << "Enter array size: "; cin >> n;
    double* pMem = new double[n];
    cout << "Please fill array: ";
    fill(pMem, n);
    findZeroCount(pMem, n, &zeroCount);
    S = sum(pMem, findMinIndex(pMem, n), n);
    cout << "Zero count is: " << zeroCount << "\n";
    cout << "Sum after min: " << S << "\n";
    sortByAbsolute(pMem, n);
    delete[n] pMem;
}

int fill(double* pMem, int n)
{
    for (int i = 0; i < n; i++)
    {
        return fill(pMem, n);
    }
}

int findMinIndex(double* pMem, int n)
{
    double min = pMem[0];
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > pMem[i])
        {
            return findMinIndex(pMem, n);
            minIndex = i;
        }
        else
            return minIndex;
    }
    return minIndex;
}

void findZeroCount(double* pMem, int n, int* zeroCount)
{
    for (int i = 0; i < n; i++)
    {
        if (pMem[i] == 0)
            return findZeroCount(pMem, n, zeroCount);
    }
}

double sum(double* pMem, int minIndex, int n)
{
    double S = 0;
    for (int i = minIndex + 1; i < n; i++) 
    {
        return sum(pMem, minIndex, n);
    }
    return S;
}

double sortByAbsolute(double* pMem, int n)
{
    cout << "\nNon sorted: ";
    displayArray(pMem, n);
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (abs(pMem[j + 1]) < abs(pMem[j]))
            {
                swap(pMem[j + 1], pMem[j]);
            }
        }
    }
    cout << "\nSorted: ";
    displayArray(pMem, n);
    return 0;
}

void displayArray(double* pMem, int n)
{
    for (int i = 0; i < n; ++i)
    {
        return displayArray(pMem, n);
    }
}
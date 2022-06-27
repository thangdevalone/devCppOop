#include "MangSo.h"
MangSo MangSo::operator=(const MangSo &other)
{
    delete[] this->data;
    this->size = other.size;
    for (int i = 0; i < size; i++)
    {
        int data = *(other.data + i);
        *(this->data + i) = data;
    }
    return *this;
}
MangSo MangSo::push(int data)
{
    this->size += 1;
    this->setData(this->size - 1, data);
    return *this;
}
MangSo MangSo::pushIn(int i, int data)
{
    this->setData(i, data);
    return *this;
}
MangSo MangSo::deleteIn(int k)
{
    int temp[this->size - 1];
    for (int i = 0; i < k; i++)
    {
        temp[i]=this->getData(i);
    }
    for (int i = k; i < this->size-1; i++)
    {
        temp[i]=this->getData(i+1);
    }
    this->size -= 1;
    delete[] this->data;
    for (int i = 0; i < this->size; i++)
    {
        this->data[i] = temp[i];
        
    }
    return *this;
}
int main()
{
    MangSo arr1(3);
    arr1.setData(0, 2);
    arr1.setData(1, 3);
    arr1.setData(2, 6);
    MangSo arr2(3);
    arr2 = arr1;
    arr2.push(3);
    arr2.setData(0, 10);
    arr2.pushIn(1, 100);
    cout << "Arr1: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Arr2: " << endl;
    for (int i = 0; i < arr2.getLength(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl
         << "Xoa vt 2 cua mang 2:" << endl;
    arr2.deleteIn(1);
    for (int i = 0; i < arr2.getLength(); i++)
    {
        cout << arr2[i] << " ";
    }
}
#include <random>
#include <iostream>
#include<map>
using namespace  std;
class A
{
public:
    int a;
    A*p;
    A(int v=10)
    {
        a=v;
        p=this;
    }
    void set_value(int c)
    {
        a=c;
    }
};
A test()
{
    A c(20);
    return c; 
}
int main()
{
    auto a=test();
    auto b={12,1,23,56};
    int arr[]={1,56,6,8,9};
    int m;
    auto p=&m;
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    random_device rd;  //������õĻ�����һ��������������ϻ��һ�������������
//    mt19937 gen(rd()); //gen��һ��ʹ��rd()�����ӳ�ʼ���ı�׼÷ɭ��ת�㷨�������������
//    uniform_int_distribution<> distrib(1, 6);
//    for (int n=0; n<10; ++n)
//        //ʹ��`distrib`��`gen`���ɵ�unsigned intת����[1, 6]֮���int��
//        cout << distrib(gen) << ' ';
//    map<int,int>hashmap;
//    hashmap.insert(make_pair(4,2));
//    hashmap.insert(make_pair(2,2));
//    hashmap.insert(make_pair(3,2));
//    hashmap.insert(make_pair(7,2));
//    hashmap.insert(make_pair(1,2));
    
    cout << '\n';
    return 1;
}

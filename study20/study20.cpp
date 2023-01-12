/*
* 名称: 模板测试
* 
*/

#include <iostream>

template <typename type>
type add(type a, type b)
{
    return a + b;
}

template <class A,class B = int>
class MyClass
{
public:
    MyClass();
    MyClass(A data1, A data2) :var1(data1), var2(data2), count(0) {}

    void display(void);

private:
    A var1, var2;
    B count;
};

void template_fun_test(void);
void template_class_test(void);

int main()
{
    //template_fun_test();
    //template_class_test();


    std::cout << "\n测试完成\n";
    return 0;
}

template <class A, class B>
MyClass<A, B>::MyClass() :count(0)
{
}

template <class A, class B>
void MyClass<A, B>::display(void)
{
    std::cout << "var 1 = " << var1 << std::endl;
    std::cout << "var 2 = " << var2 << std::endl;
}


void template_fun_test(void)
{
    int data_1 = 10, data_2 = 20;
    double data_3 = 1.3, data_4 = 2.2;
    double data_5 = 2.2, data_6 = 3.3;

    data_2 = add(data_1, data_2);
    std::cout << "data_2 = " << data_2 << std::endl;

    data_4 = add(data_3, data_4);
    std::cout << "data_4 = " << data_4 << std::endl;

    data_6 = add<int>(data_5, data_6);
    std::cout << "data_6 = " << data_6 << std::endl;

}

void template_class_test(void)
{
    std::cout << "test 1 : " << std::endl;
    MyClass<int> obj1(10, 20);
    obj1.display();

    std::cout << "test 2 : " << std::endl;
    MyClass<double, double> obj2(1.2, 3.4);
    obj2.display();

    std::cout << "test 3 : " << std::endl;
    MyClass<char> obj3('A', 'B');
    obj3.display();

}

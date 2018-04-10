#include <iostream>
#include <vector>
int main()
{
    int row=10;
    int col=2;
    std::cout<<"Введите число чтобы увидеть её таблицу умножения = ";
   
    int number;
    std::cin>>number;
    std::cout<<std::endl;
    
    std::vector <std::vector<int>  > vec(row);
    int p=1;
    for(size_t i = 0; i < row; ++i)
    {
        vec[i].resize(col);
        for (size_t j=0;j<col;++j)
        {
            if (j==1)
            {
                vec[i][j]=number*p;
                p++;
            }
            else
            vec[i][j]=number;
        }
    }
    for (int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            std::cout<<vec[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

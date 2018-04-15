#include <iostream>
#include <vector>
int main()
{
    int row=100;
    int col=2;
    //std::cout<<"Введите число чтобы увидеть её таблицу умножения = ";
   
   
    //std::cin>>number;
    std::cout<<std::endl;
    int number=1;
    std::vector <std::vector<int> > vec(row);
    int p=1;
        for(size_t i = 0; i < row; ++i)
        {
            vec[i].resize(col);
            for (size_t j=0;j<col;++j)
            {
                if (j==1) // [0] [1]
                {
                    vec[i][j]=number*p;
                    p++;
                    if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99)
                    {
                        ++number;
                        p=1;
                    }
                }
                else
                vec[i][j]=number; // [0][0]
            }
        }
    
    
    for (int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            std::cout<<vec[i][j]<<" ";
            if ((i==9&&j==1)||
                (i==19&&j==1)||
                (i==29&&j==1)||
                (i==39&&j==1)||
                (i==49&&j==1)||
                (i==59&&j==1)||
                (i==69&&j==1)||
                (i==79&&j==1)||
                (i==89&&j==1)||
                (i==99&&j==1))
            {
                std::cout<<std::endl;
                std::cout<<"________________________"<<std::endl;
            }
        }
        std::cout<<std::endl;
    }
}

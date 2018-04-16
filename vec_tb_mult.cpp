#include <iostream>
#include <vector>
int main()
{
    int row=100;
    int col=3;
    std::cout<<std::endl;
    int number=1;
    std::vector <std::vector<int> > vec(row);
    int p=1;
        for(size_t i = 0; i < row; ++i)
        {
            vec[i].resize(col);
            for (size_t j=0;j<col;++j)
            {
                if (j==1)
                {
                    vec[i][j]=p;
                    
                }
                else if (j==2)
                {
                    if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99)
                    {
                        vec[i][j]=number*p;
                        ++number;
                        p=1;
                        break;
                    }
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
            if (i>0&&j==0)
            {
                std::cout<<vec[i][j];
                std::cout<<"*";
            }
            if(i>0&&j==1)
            {
                std::cout<<vec[i][j];
                std::cout<<"=";
            }
            if(i>0&&j==2)
            {
                std::cout<<vec[i][j];
            }
            if ((i==9&&j==2)||
                (i==19&&j==2)||
                (i==29&&j==2)||
                (i==39&&j==2)||
                (i==49&&j==2)||
                (i==59&&j==2)||
                (i==69&&j==2)||
                (i==79&&j==2)||
                (i==89&&j==2)||
                (i==99&&j==2))
            {
                std::cout<<std::endl;
                std::cout<<"________________________"<<std::endl;
            }
        }
        std::cout<<std::endl;
    }
}

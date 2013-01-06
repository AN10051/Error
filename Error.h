#ifndef ERROR_H
#define ERROR_H
#include <iostream>
#include <fstream>
#define FILENAME "errorlog.txt"

class Error
{

    public:
        Error();
        virtual ~Error();
        //void gen_Error(int err_num);

       static std::string get_Num(std::string s)
        {
            std::string errornum = s.substr(0,4);
            return errornum;
        }

        static std::string get_Err(std::string s)
        {
            std::string err = s.substr(5,s.length()-1);
            return err;
        }

        static int gen_Error(std::string err_num)
        {
        std::ifstream myfile(FILENAME);
        std::string s;
        std::string sNum, sErr;
        myfile.open(FILENAME,std::ios::in);
        if(myfile.is_open())
            {
                while(!myfile.eof())
                {
                    std::getline(myfile,s);
                    sNum=get_Num(s);
                    sErr = get_Err(s);
                    std::cout<<sNum<<"   "<<sErr<<std::endl;

                }
            }
            return 0;
        }

    static void det_Error(int err_num,std::string classname, std::string membername);

    static void display_Error(std::string output);
    protected:
    private:

};

#endif // ERROR_H

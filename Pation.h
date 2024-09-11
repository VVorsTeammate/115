// #include <cstdint>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>

enum Gender{Women, Men};

class Patient{
    private:
        std::string _Name;
        std::string _Sername;
        std::string _Otchestvo;
        std::chrono::year_month_day _born_date;
        std::thread _id;
        Gender _gender;
        std::string healthProblem;
        std::string diagnos; //структура, у которой два поля, *descriptions и drugs;

        void DetineGender();
        void GenerateID();
        void DetermineFIO(std::string FIO);

    public:
        Patient(std::string Sername, std::string name, std::string otchestvo, std::chrono::year_month_day born_date);

        Patient(std::string FIO, std::chrono::year_month_day born_date);

};
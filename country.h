//
// Created by Alena Guskova on 06.02.2024.
//

#ifndef CPP_LAB_12_COUNTRY_H
#define CPP_LAB_12_COUNTRY_H

#include <iostream>

class country {

private:
    std::string name;
    int population;

public:

    country(std::string name, int population);

    friend bool operator<(const country& left, const country& right);

    friend std::ostream& operator<<(std::ostream& out, const country& elem);

};

#endif //CPP_LAB_12_COUNTRY_H

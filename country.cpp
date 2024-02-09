//
// Created by Alena Guskova on 06.02.2024.
//

#include "country.h"

country::country(std::string name, int population) {
    this->name = std::move(name);
    this->population = population;
}

bool operator<(const country &left, const country &right) {
    if (left.population < right.population){
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &out, const country &elem) {
    return out << elem.name << " : " << elem.population << ' ';
}


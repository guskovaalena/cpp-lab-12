#include <iostream>
#include <vector>

#include "rangeIterator.h"
#include "country.h"

int main() {

    country c1("India", 1422174000);
    country c2("China", 1411750000);
    country c3("USA", 334233854);
    country c4("Indonesia", 274900000);
    country c5("Russia", 146447400);
    country c6("Germany", 84270625);
    country c7("Italy",58850717);
    country c8("France", 68959599);
    country c9("UK", 67647112);
    country c10("Spain", 46934632);

    std::vector<country> countries;
    countries.push_back(c1);
    countries.push_back(c2);
    countries.push_back(c3);
    countries.push_back(c4);
    countries.push_back(c5);
    countries.push_back(c6);
    countries.push_back(c7);
    countries.push_back(c8);
    countries.push_back(c9);
    countries.push_back(c10);

    std::sort(countries.begin(), countries.end());

    std::cout<<"Список стран по возрастанию населения: "<<std::endl;

    rangeIterator<country, std::vector<country>::iterator> begin1(countries.begin(), countries.end());
    rangeIterator<country, std::vector<country>::iterator> end1(countries.end(), countries.end());

    for (auto it = begin1; it != end1; ++it){
        std::cout<<*it<<std::endl;
    }

    std::cout<<std::endl;

    std::cout<<"5 стран из списка с наименьшим населением: "<<std::endl;

    rangeIterator<country, std::vector<country>::iterator> begin2(countries.begin(), countries.begin() + 5);
    rangeIterator<country, std::vector<country>::iterator> end2(countries.begin()+5, countries.begin() + 5);

    for (auto it = begin2; it != end2; ++it){
        std::cout<<*it<<std::endl;
    }

    std::cout<<std::endl;

    std::cout<<"3 страны из списка с наибольшим населением: "<<std::endl;

    rangeIterator<country, std::vector<country>::iterator> begin3(countries.end() - 1, countries.end() - 4);
    rangeIterator<country, std::vector<country>::iterator> end3(countries.end() - 4, countries.end() - 4);

    for (auto it = begin3; it != end3; --it){
        std::cout<<*it<<std::endl;
    }

    return 0;
}
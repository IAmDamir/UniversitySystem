//
// Created by Damir on 10/13/2021.
//

#include "ACM.h"
#include <algorithm>

ACM::ACM(string topicOfTheDay, map<string, string> location, int numberOfPresentations) {
    this->topicOfTheDay = move(topicOfTheDay);
    this->numberOfPresentations = numberOfPresentations;
    this->location = std::move(location);
}

ACM::~ACM() = default;

const string& ACM::getTopicOfTheDay() const {
    return topicOfTheDay;
}

const map<string, string>& ACM::getLocation() const {
    return location;
}
int ACM::getNumberOfPresentations() const {
    return numberOfPresentations;
}

void ACM::setTopicOfTheDay(const string & topicOfTheDay) {
    ACM::topicOfTheDay = topicOfTheDay;
}
void ACM::setLocation(const map<string, string> &location) {
    ACM::location = location;
}
void ACM::setNumberOfPresentations(int numberOfPresentations) {
    ACM::numberOfPresentations = numberOfPresentations;
}

ostream& operator<<(ostream & os, const ACM & acm) {
    os << "The topic of the day for ACM is: " << acm.getTopicOfTheDay() << endl;
    os << "The location is: " << endl;
    const map<string, string>& location = acm.getLocation();
    const auto& f = [&os](pair<string, string> const& pair) {os << "For the " << pair.first << " city is: " << pair.second << " address" << endl; };
    for_each(location.begin(), location.end(), f);

    os << "The number of presentations is: " << acm.getNumberOfPresentations() << endl;

    return os;
}

istream& operator<<(istream & is, ACM & acm) {
    ACM acm1;

    string topicOfTheDay;
    map<string, string> location;
    int numberOfLocations;
    string key, value;
    int numberOfPresentations;

    is >> topicOfTheDay;
    cout << "Please write number of locations that you would like to include: " << endl;
    is >> numberOfLocations;
    for (int i = 0; i < numberOfLocations; ++i) {
        is >> key >> value;
        location.insert(pair<string, string>(key, value));
    }
    is >> numberOfPresentations;

    acm = ACM(topicOfTheDay, location, numberOfPresentations);

    return is;
}

bool ACM::operator==(const ACM acm) const {
  bool isLocationEqual = this->getLocation() == acm.getLocation();
  bool isNumberOfPresentationsEqual = this->getNumberOfPresentations() == acm.getNumberOfPresentations();
  bool isTopicOfTheDayEqual = this->getTopicOfTheDay() == acm.getTopicOfTheDay();

  bool isEqual = isLocationEqual && isNumberOfPresentationsEqual && isTopicOfTheDayEqual;

  return isEqual;
}

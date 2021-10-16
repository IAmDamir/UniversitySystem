//
// Created by Damir on 10/13/2021.
//

#include "ACM.h"

ACM::ACM(string topicOfTheDay, map<string, string> location, int numberOfPresentations) {
  this->topicOfTheDay = move(topicOfTheDay);
  this->numberOfPresentations = numberOfPresentations;
  this->location = std::move(location);
}

ACM::~ACM() = default;

const string &ACM::getTopicOfTheDay() const {
  return topicOfTheDay;
}
const map<string, string> &ACM::getLocation() const {
  return location;
}
int ACM::getNumberOfPresentations() const {
  return numberOfPresentations;
}

void ACM::setTopicOfTheDay(const string &topicOfTheDay) {
  ACM::topicOfTheDay = topicOfTheDay;
}
void ACM::setLocation(const map<string, string> &location) {
  ACM::location = location;
}
void ACM::setNumberOfPresentations(int numberOfPresentations) {
  ACM::numberOfPresentations = numberOfPresentations;
}

ostream &operator<<(ostream &os, const ACM& acm) {
  os << "The topic of the day for ACM is: " << acm.getTopicOfTheDay() << endl;
  os << "The location is: " << endl;
  const map<string, string>& location = acm.getLocation();
  const auto& f = [&os](pair<string, string> const &pair){os << "For the " << pair.first << " city is: " << pair.second << " address" << endl;};
  for_each(location.begin(), location.end(), f);

  os << "The number of presentations is: " << acm.getNumberOfPresentations() << endl;

  return os;
}

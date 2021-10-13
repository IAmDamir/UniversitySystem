//
// Created by Damir on 10/13/2021.
//

#include "ACM.h"

ACM::ACM(string topicOfTheDay, map<string, string> location, int numberOfPresentations) {
  this->topicOfTheDay = move(topicOfTheDay);
  this->numberOfPresentations = numberOfPresentations;
  location = ;
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

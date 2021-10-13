//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_ACM_H
#define UNIVERSITYSYSTEM_ACM_H

#include "../AllIncludes.h"

class ACM {
public:
  ACM(string topicOfTheDay = "No Topic", map<string, string> location = {"Unknown City", "Unknown Address"}, int numberOfPresentations = 0);
  ~ACM();

  const string &getTopicOfTheDay() const;
  const map<string, string> &getLocation() const;
  int getNumberOfPresentations() const;

  void setTopicOfTheDay(const string &topicOfTheDay);
  void setLocation(const map<string, string> &location);
  void setNumberOfPresentations(int numberOfPresentations);

private:
  string topicOfTheDay;
  map<string, string> location;
  int numberOfPresentations;
};


#endif //UNIVERSITYSYSTEM_ACM_H

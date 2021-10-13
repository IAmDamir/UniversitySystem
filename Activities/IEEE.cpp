//
// Created by Damir on 10/13/2021.
//

#include "IEEE.h"

IEEE::IEEE(string conferenceName, string conferenceLocation, set<string> topicNames) {
  this->conferenceName = move(conferenceName);
  this->conferenceLocation = move(conferenceLocation);
  this->topicNames = move(topicNames);
}

IEEE::~IEEE() = default;

const string &IEEE::getConferenceLocation() const {
  return conferenceLocation;
}
const string &IEEE::getConferenceName() const {
  return conferenceName;
}
const set<string> &IEEE::getTopicNames() const {
  return topicNames;
}

void IEEE::setConferenceLocation(const string &conferenceLocation) {
  IEEE::conferenceLocation = conferenceLocation;
}
void IEEE::setConferenceName(const string &conferenceName) {
  IEEE::conferenceName = conferenceName;
}
void IEEE::setTopicNames(const set<string> &topicNames) {
  IEEE::topicNames = topicNames;
}
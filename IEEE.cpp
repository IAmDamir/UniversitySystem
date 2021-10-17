//
// Created by Damir on 10/13/2021.
//

#include "IEEE.h"
#include <algorithm>

IEEE::IEEE(string conferenceName, string conferenceLocation, set<string> topicNames) {
    this->conferenceName = move(conferenceName);
    this->conferenceLocation = move(conferenceLocation);
    this->topicNames = move(topicNames);
}
IEEE::~IEEE() = default;

ostream& operator<<(ostream & os, const IEEE & ieee) {
    os << "The name of the conference of IEEE is: " << ieee.getConferenceName() << endl;
    os << "The location of the conference is: " << ieee.getConferenceLocation() << endl;
    os << "The conference contain topics such as: ";
    const set<string>& topicNames = ieee.getTopicNames();
    const auto& f = [&os](const string& topicName) {os << topicName << endl; };
    for_each(topicNames.begin(), topicNames.end(), f);

    return os;
}

istream& operator>>(istream & is, IEEE & ieee) {
    string conferenceName;
    string conferenceLocation;
    set<string> topicNames;
    int numberOfTopicNames;
    string topicName;

    is >> conferenceName;
    is >> conferenceLocation;
    cout << "Please write number of topics that you would like to include: " << endl;
    is >> numberOfTopicNames;
    for (int i = 0; i < numberOfTopicNames; ++i) {
        is >> topicName;
        topicNames.insert(topicName);
    }

    ieee = IEEE(conferenceName, conferenceLocation, topicNames);

    return is;
}

const string& IEEE::getConferenceLocation() const {
    return conferenceLocation;
}
const string& IEEE::getConferenceName() const {
    return conferenceName;
}
const set<string>& IEEE::getTopicNames() const {
    return topicNames;
}

void IEEE::setConferenceLocation(const string & conferenceLocation) {
    IEEE::conferenceLocation = conferenceLocation;
}

void IEEE::setConferenceName(const string & conferenceName) {
    IEEE::conferenceName = conferenceName;
}

void IEEE::setTopicNames(const set<string> &topicNames) {
    IEEE::topicNames = topicNames;
}
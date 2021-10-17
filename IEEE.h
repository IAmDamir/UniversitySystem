//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_IEEE_H
#define UNIVERSITYSYSTEM_IEEE_H

#include "iostream"
#include <set>

using namespace std;

class IEEE {
public:
	explicit IEEE(string conferenceName = "No Conference", string conferenceLocation = "No Location", set<string> topicNames = { "No  Topic" });
	~IEEE();

	const string& getConferenceLocation() const;
	const string& getConferenceName() const;
	const string& getName() const { return name; };
	const set<string>& getTopicNames() const;

	void setConferenceLocation(const string& conferenceLocation);
	void setConferenceName(const string& conferenceName);
	void setTopicNames(const set<string>& topicNames);

	friend ostream& operator<<(ostream& os, const IEEE& ieee);
	friend istream& operator>>(istream& is, IEEE& ieee);

private:
	string name = "IEEE";
	string conferenceName;
	string conferenceLocation;
	set<string> topicNames;
};


#endif //UNIVERSITYSYSTEM_IEEE_H
#ifndef ChallengeDisplay_h
#define ChallengeDisplay_h

class ChallengeDisplay
{
private:
public:
    ChallengeDisplay()
    {
    }

    void setup() {
      Serial.println("ChallengeDisplay Setup");}
    void loop() {}
    void setLetters(String letters) {
		Serial.println(letters);
	}
};
#endif

class StevieButton : public InternetButton {
	public:
		const uint8_t top = 4;
		const uint8_t left = 5;
		const uint8_t bottom = 6;
		const uint8_t right = 7;
		
		uint8_t countButtonsOn(void);
		uint8_t anyButtonOn(void);
		uint8_t buttonOn(uint8_t i);
};

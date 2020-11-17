#ifndef _jpratio_H_
	#define _jpratio_H_
	

	#include "transform.h"
	

	// y = k1 * x1 / x2
	class Jpratio : public NumericTransform {
	 public:
	  Jpratio(float k1, float k2, String config_path = "");
	  virtual void set_input(float input, uint8_t inputChannel) override;
	  virtual void get_configuration(JsonObject& doc) override;
	  virtual bool set_configuration(const JsonObject& config) override;
	  virtual String get_config_schema() override;
	

	 private:
	  uint8_t received = 0;
	  float inputs[2];
	  float k1;
	  float k2;
	};
	

	#endif
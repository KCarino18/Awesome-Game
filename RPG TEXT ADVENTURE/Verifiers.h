#ifndef VERIFIERS_H_INCLUDED
#define VERIFIERS_H_INCLUDED

int verifyInput(int param1, int param2)
//precondition: takes 2 parameters, param1 and param2. param1 being the smallest number the number can be and param2 being the biggest number
//postcondition: outs puts and integer that is between the two parameters but will continue to loop if those parameters are not met
{
	bool valid = false;
	int input = 0;
	string strValidate = " ";
	switch (param1) {
	case -1:
		// if param1 in the function is -1, dummy value, then it will verify for minutes. else it will skip this step.
		// because param1 will never be -1 unless it is being taken from a function call which the only function that has
		// it is the minutes verifier.
	{
		while (!valid)
		{
			if (std::cin >> input)
			{
				if (input == 15 || input == 30 || input == 45 || input == 60) // if the minutes inputted is 15 or 30 or 45 or 60 then it breaks
					valid = true;                                             // otherwise drops to else
			}
			else std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (!valid) std::cout << "This input is not valid.\nPlease enter a valid time (15/30/45/60): ";
			// from else to if this makes user reinput value if it is not valid.
		}
		break;
	}
	default:
		// this default case is when the param1 does not equal -1.
		// which is the default verifyInput which takes in two values from the function call and
		// checks if user input is between the two params
    {
		while (!valid)
		{
			if (std::cin >> input)
			{
				if (input < param2 && input > param1)
					valid = true;
			}
			else std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (!valid) std::cout << "This input is not valid.\nPlease enter a valid number:";
		}
    }
    }
	return input;
}

#endif // VERIFIERS_H_INCLUDED

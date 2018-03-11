/*
    fm_transmitter - use Raspberry Pi as FM transmitter

    Copyright (c) 2018, Dulitha Sandaruwan
    All rights reserved.

    See https://github.com/DulithaSandaruwan/fm_transmitter

   
*/

#include "error_reporter.h"

ErrorReporter::ErrorReporter(string message) :
    errorMessage(message) 
{
}

ErrorReporter::~ErrorReporter() throw() 
{
}
		
const char* ErrorReporter::what() const throw()
{
	return errorMessage.c_str();
}

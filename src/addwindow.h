/*
 * Copyright 2022, Ilmari Siiteri <ilzu.siiteri@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
 
#ifndef ADDWINDOW_H
#define ADDWINDOW_H


#include <Window.h>


class AddWindow : public BWindow{
public:
	AddWindow();
	~AddWindow();
	void MessageReceived(BMessage* msg);

private:

};


#endif // ADDWINDOW_H

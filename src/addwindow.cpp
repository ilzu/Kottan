/*
 * Copyright 2022, Ilmari Siiteri <ilzu.siiteri@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "addwindow.h"

#include <Catalog.h>
#include <LayoutBuilder.h>

#undef B_TRANSLATION_CONTEXT
#define B_TRANSLATION_CONTEXT "AddWindow"

AddWindow::AddWindow(BRect frame) 
	: 
	BWindow(frame, B_TRANSLATE("Add"), B_TITLED_WINDOW, B_CLOSE_ON_ESCAPE
		| B_NOT_ZOOMABLE | B_NOT_V_RESIZABLE | B_AUTO_UPDATE_SIZE_LIMITS)
(
)

AddWindow::~AddWindow()
(
)

void AddWindow::MessageReceived(BMessage* msg)
(
	switch(msg->what)(
		default:
			BWindow::MessageReceived(msg);
			break;
	)
)


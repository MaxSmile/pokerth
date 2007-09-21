/***************************************************************************
 *   Copyright (C) 2006 by FThauer FHammer   *
 *   f.thauer@web.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "newgamedialogimpl.h"
#include "configfile.h"

newGameDialogImpl::newGameDialogImpl(QWidget *parent, ConfigFile *c)
      : QDialog(parent), myConfig(c)
{

    setupUi(this);

	
}

void newGameDialogImpl::exec() {

	spinBox_quantityPlayers->setValue(myConfig->readConfigInt("NumberOfPlayers"));
	spinBox_startCash->setValue(myConfig->readConfigInt("StartCash"));
	spinBox_smallBlind->setValue(myConfig->readConfigInt("FirstSmallBlind"));
	spinBox_gameSpeed->setValue(myConfig->readConfigInt("GameSpeed"));
	spinBox_handsBeforeRaiseSmallBlind->setValue(myConfig->readConfigInt("RaiseSmallBlindEveryHands"));

	QDialog::exec();
	
}

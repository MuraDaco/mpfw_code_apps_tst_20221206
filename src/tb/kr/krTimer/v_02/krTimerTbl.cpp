//  *******************************************************************************
//  
//  mpfw / fw2 - Multi Platform FirmWare FrameWork 
//      library that contains the application code
//  Copyright (C) (2023) Marco Dau
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//  
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//  
//  You can contact me by the following email address
//  marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
//  
//  *******************************************************************************
/*
 * ap_krTimerTbl.cpp
 *
 *  Created on: Nov, 24 2022
 *      Author: Marco Dau
 */

// module include
#include "krTimerTbl.h"

// tst includes
#include <kr/krTimer/v_01/ap/apTestTimer01.h>

namespace mpfw { namespace libs { namespace tst_20221206 {

fw2::core::core::krTimer* krTimerTbl::TimerPtrArray[] = {
	&apTestTimer01	::TmrArray	[apTestTimer01	::kTimer_empty1	],
	&apTestTimer01	::TmrArray	[apTestTimer01	::kTimer_empty2	],
    nullptr
};


} } }	// mpfw::libs::tst_20221206
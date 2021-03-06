/*************************************************************************
 * XDAQ Components for Distributed Data Acquisition                      *
 * Copyright (C) 2000-2004, CERN.			                 *
 * All rights reserved.                                                  *
 * Authors: J. Gutleber and L. Orsini					 *
 *                                                                       *
 * For the licensing terms see LICENSE.		                         *
 * For the list of contributors see CREDITS.   			         *
 *************************************************************************/

#ifndef _PixelBaselineCalibrationWithTestDACs_h_
#define _PixelBaselineCalibrationWithTestDACs_h_

#include "toolbox/exception/Handler.h"
#include "toolbox/Event.h"

#include "PixelCalibrations/include/PixelCalibrationBase.h"

class PixelBaselineCalibrationWithTestDACs: public PixelCalibrationBase {
 public:

  // PixelBaselineCalibrationWithTestDACs Constructor
  //PixelBaselineCalibrationWithTestDACs();

  PixelBaselineCalibrationWithTestDACs( const PixelSupervisorConfiguration &, SOAPCommander* );

  virtual ~PixelBaselineCalibrationWithTestDACs(){};

  virtual bool execute();

  virtual std::vector<std::string> calibrated();
  void sendToFED(std::string& action, bool& continueIterating);

};

#endif

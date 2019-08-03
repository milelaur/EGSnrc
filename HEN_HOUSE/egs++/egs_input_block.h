/*
###############################################################################
#
#  EGSnrc egs++ input block headers
#  Copyright (C) 2015 National Research Council Canada
#
#  This file is part of EGSnrc.
#
#  EGSnrc is free software: you can redistribute it and/or modify it under
#  the terms of the GNU Affero General Public License as published by the
#  Free Software Foundation, either version 3 of the License, or (at your
#  option) any later version.
#
#  EGSnrc is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for
#  more details.
#
#  You should have received a copy of the GNU Affero General Public License
#  along with EGSnrc. If not, see <http://www.gnu.org/licenses/>.
#
###############################################################################
#
#  Author:          Reid Townson, 2019
#
#  Contributors:
#
###############################################################################
*/


/*! \file egs_input_block.h
 *  \brief The input block header file
 *  \RT
 *
 */
 
#ifndef EGS_INPUT_BLOCK_
#define EGS_INPUT_BLOCK_

#include <vector>
#include <string>
#include "egs_libconfig.h"

using namespace std;

class EGS_EXPORT EGS_SingleInput {

public:
    EGS_SingleInput(string attr, bool isReq, const vector<string> vals);
    ~EGS_SingleInput();
    string getAttribute();
    const vector<string> getValues();

protected:

    void addRequirement(string attr, string value="");
    vector<EGS_SingleInput> getDependents();
    
private:
    
    vector<EGS_SingleInput> dependents;
    vector<string> requirements;
    string  attribute;
    bool isRequired;
    vector<string> values;
};

class EGS_EXPORT EGS_InputBlock {
public:
    EGS_InputBlock();
    EGS_InputBlock(EGS_InputBlock *par, string blockTit, bool isReq);
    ~EGS_InputBlock();
    
    void addSingleInput(string attr, bool isReq, const vector<string> vals = vector<string>());
    void addBlockInput(string blockTit, bool isReq);
    vector<EGS_SingleInput> getSingleInputs();
    vector<EGS_InputBlock> getBlockInputs();
    void setParent(EGS_InputBlock *par);
    EGS_InputBlock getParent();
    

protected:
    
    vector<EGS_SingleInput> singleInputs;
    vector<EGS_InputBlock> blockInputs;
    EGS_InputBlock *parent;
    string blockTitle;
    bool isRequired;
};


#endif



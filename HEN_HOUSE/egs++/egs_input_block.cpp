/*
###############################################################################
#
#  EGSnrc egs++ input block
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


/*! \file egs_input_block.cpp
 *  \brief The input block cpp file
 *  \RT
 *
 */

#include "egs_input_block.h"

EGS_InputBlock::EGS_InputBlock() {}

EGS_InputBlock::EGS_InputBlock(EGS_InputBlock *par, string blockTit, bool isReq) {
    parent = par;
    blockTitle = blockTit;
    isRequired = isReq;
}
    
EGS_InputBlock::~EGS_InputBlock() {
    if(parent) {
        delete parent;
    }
}
    
void EGS_InputBlock::addSingleInput(string attr, bool isReq, const vector<string> vals) {
    singleInputs.push_back(EGS_SingleInput(attr, isReq, vals));
}

void EGS_InputBlock::addBlockInput(string blockTit, bool isReq) {
    blockInputs.push_back(EGS_InputBlock(this, blockTit, isReq));
}

vector<EGS_SingleInput> EGS_InputBlock::getSingleInputs() {
    return singleInputs;
}

vector<EGS_InputBlock> EGS_InputBlock::getBlockInputs() {
    return blockInputs;
}

void EGS_InputBlock::setParent(EGS_InputBlock *par) {
    parent = par;
}

EGS_InputBlock EGS_InputBlock::getParent() {
    return *parent;
}

EGS_SingleInput::EGS_SingleInput(string attr, bool isReq, const vector<string> vals) {
    attribute = attr;
    isRequired = isReq;
    values = vals;
}

EGS_SingleInput::~EGS_SingleInput() {
    
}

void EGS_SingleInput::addRequirement(string attr, string val) {
    
}

vector<EGS_SingleInput> EGS_SingleInput::getDependents() {
    
}

string EGS_SingleInput::getAttribute() {
    return attribute;
}

const vector<string> EGS_SingleInput::getValues() {
    return values;
}






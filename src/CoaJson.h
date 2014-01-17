/************************************************************************
C++ On Air - Light-weight C++ web application server library
Copyright (c) 2012-2013 Marcus Tomlinson

This file is part of ConAir.

The BSD 2-Clause License:
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
************************************************************************/

#ifndef COAJSON_H
#define COAJSON_H

#include <string>
#include <vector>

//=================================================================================================

struct cJSON;

//=================================================================================================

class CoaJson
{
public:
  CoaJson();
  ~CoaJson();

  void ClearJson();

  bool ReadJson( std::string json );
  std::string WriteJson();

  bool GetValue( std::string memberName, std::string& returnValue );
  bool GetArray( std::string arrayName, std::vector< std::string >& returnArray );

  bool AddValue( std::string memberName, std::string memberValue );
  bool AddArray( std::string arrayName, std::vector< std::string >& valueArray );

private:
  cJSON* _json;
};

//=================================================================================================

#endif // COAJSON_H

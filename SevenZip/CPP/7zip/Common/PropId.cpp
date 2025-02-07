﻿// PropId.cpp

#include "StdAfx.h"

#include "../../Common/MyWindows.h"

#include "../PropID.h"

// VARTYPE
const Byte k7z_PROPID_To_VARTYPE[kpid_NUM_DEFINED] =
{
  VT_EMPTY,
  VT_UI4,
  VT_UI4,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_BOOL,
  VT_UI8,
  VT_UI8,
  VT_UI4,
  VT_FILETIME,
  VT_FILETIME,
  VT_FILETIME,
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_UI4,
  VT_UI4,
  VT_BSTR,
  VT_BOOL,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_UI8,
  VT_BSTR,
  VT_UI8,
  VT_BSTR,
  VT_UI8,
  VT_UI8,
  VT_BSTR, // or VT_UI8 kpidUnpackVer
  VT_UI4, // or VT_UI8 kpidVolume
  VT_BOOL,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI4,
  VT_BOOL,
  VT_BOOL,
  VT_BSTR,
  VT_UI8,
  VT_UI8,
  VT_UI4, // kpidChecksum
  VT_BSTR,
  VT_UI8,
  VT_BSTR, // or VT_UI8 kpidId
  VT_BSTR,
  VT_BSTR,
  VT_UI4,
  VT_UI4,
  VT_BSTR,
  VT_BSTR,
  VT_UI8,
  VT_UI8,
  VT_UI4,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR, // kpidNtSecure
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_BSTR, // SHA-1
  VT_BSTR, // SHA-256
  VT_BSTR,
  VT_UI8,
  VT_UI4,
  VT_UI4,
  VT_BSTR,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_UI8,
  VT_BSTR,
  VT_BSTR,
  VT_BSTR,
  VT_BOOL,
  VT_BOOL,
  VT_BOOL,
  VT_UI8,
  VT_UI8,
  VT_BSTR, // kpidNtReparse
  VT_BSTR,
  VT_UI8,
  VT_UI8,
  VT_BOOL,
  VT_BSTR,
  VT_BSTR
};

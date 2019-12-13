////////////////////////////////////////////////////////////////////////////////
//
// Step2_API7_3D.h - Библиотека на Visual C++
//
////////////////////////////////////////////////////////////////////////////////
#if !defined(AFX_STEP2_API7_3D_H__8FC6CC92_1590_41F3_83BF_4EC6CA01F2C8__INCLUDED_)
#define AFX_STEP2_API7_3D_H__8FC6CC92_1590_41F3_83BF_4EC6CA01F2C8__INCLUDED_

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

extern ksAPI7::IApplicationPtr newKompasAPI;

//------------------------------------------------------------------------------
// Вспомогательные функции
// ---
// Загрузка строки из ресурсов
CString LoadStr     (int strID);

#endif // !defined(AFX_STEP2_API7_3D_H__8FC6CC92_1590_41F3_83BF_4EC6CA01F2C8__INCLUDED_)

/** @file DutDllVerNo.h
 *
 *  Copyright (C) 2009-2010, Marvell International Ltd.
 *  All Rights Reserved
 */

#define DUT_DLL_VERSION_MAJOR1		1
#define DUT_DLL_VERSION_MAJOR2		0
#define DUT_DLL_VERSION_MINOR1		6
#define DUT_DLL_VERSION_MINOR2		22

//#define VERSTRING (0x30|DUT_DLL_VERSION_MAJOR1) "," "2" "," "0" ","  "," 0x0
//#define VERSTRING					0x31","0x32","0x30","0x30"\0"
#define DUT_DLL_VERSTRING	"1,0,6,22\0"

#define DUT_DLL_FILEVER				(DUT_DLL_VERSION_MAJOR1),(DUT_DLL_VERSION_MAJOR2),(DUT_DLL_VERSION_MINOR1),(DUT_DLL_VERSION_MINOR2) //123,45,67,89//1,2,1,0
#define DUT_DLL_PRODUCTVER			(DUT_DLL_VERSION_MAJOR1),(DUT_DLL_VERSION_MAJOR2),(DUT_DLL_VERSION_MINOR1),(DUT_DLL_VERSION_MINOR2) //123,45,67,89//1,2,1,0
#define DUT_DLL_FILEVER_STRING		DUT_DLL_VERSTRING
#define DUT_DLL_PRODUCTVER_STRING	DUT_DLL_VERSTRING  

#define DUT_DLL_COMMENTSTRING			"With MFG driver\0"
#define DUT_DLL_SPECIALBUILDSTRING		"\0"  
#define DUT_DLL_PRODUCTNAMESTRING		"BT Product\0"
#define DUT_DLL_PRIVATEBUILDSTRING		"Preliminary\0"
#define DUT_DLL_FILEDESCRIPTIONSTRING	"Dut BT Api Dll\0"
/*
 * This file is a part of Pocket Heroes Game project
 * 	http://www.pocketheroes.net
 *	https://code.google.com/p/pocketheroes/
 *
 * Copyright 2004-2010 by Robert Tarasov and Anton Stuk (iO UPG)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */ 

#ifndef _IOLIB_HELIUM_STRING_STD_H_
#define _IOLIB_HELIUM_STRING_STD_H_

#include "he.types.h"
#include "he.defines.h"


//extern "C" {


namespace IOSTRING_STD
{

// String conversion func
inline sint32 VARARG StrPrintF( iCharA* buf, const iCharA* fmt, ... )
{ 
	va_list args; 
	sint32 r; 
	va_start( args, fmt );
	r = vsprintf( buf, fmt, args );
	va_end( args );
	return r;
}

inline sint32 VARARG StrPrintF( iCharW* buf, const iCharW* fmt, ... )
{ 
	va_list args; 
	sint32 r; 
	va_start( args, fmt );
	r = vswprintf( buf, fmt, args );
	va_end( args );
	return r;
}

inline sint32 VStrPrintF( iCharA* buf, const iCharA* fmt, va_list args )
{
	return vsprintf( buf, fmt, args );
}

inline sint32 VStrPrintF( iCharW* buf, const iCharW* fmt, va_list args )
{
	return vswprintf( buf, fmt, args );
}

inline sint32 VARARG StrNPrintF( iCharA* buf, sint32 n, const iCharA* fmt, ... )
{
	va_list args; 
	sint32 r; 
	va_start( args, fmt );
	r = _vsnprintf( buf, n, fmt, args );
	va_end( args );
	return r;
}

inline sint32 VARARG StrNPrintF( iCharW* buf, sint32 n, const iCharW* fmt, ... )
{
	va_list args; 
	sint32 r; 
	va_start( args, fmt );
	r = _vsnwprintf( buf, n, fmt, args );
	va_end( args );
	return r;
}

inline sint32 VStrNPrintF( iCharA* buf, sint32 n, const iCharA* fmt, va_list args )
{
	return _vsnprintf( buf, n, fmt, args );
}

inline sint32 VStrNPrintF( iCharW* buf, sint32 n, const iCharW* fmt, va_list args )
{
	return _vsnwprintf( buf, n, fmt, args );
}

//

inline double StrToD( const iCharA* nptr, iCharA** endptr )
{
	return strtod( nptr, endptr );
}

inline double StrToD( const iCharW* nptr, iCharW** endptr )
{
	return wcstod( nptr, endptr );
}

inline sint32 StrToL( const iCharA* nptr, iCharA** endptr, sint32 radix = 10 )
{
	return strtol( nptr, endptr, radix );
}

inline sint32 StrToL( const iCharW* nptr, iCharW** endptr, sint32 radix = 10 )
{
	return wcstol( nptr, endptr, radix );
}

inline uint32  StrToUL( const iCharA* nptr, iCharA** endptr, sint32 radix = 10 )
{
	return strtoul( nptr, endptr, radix );
}

inline uint32  StrToUL( const iCharW* nptr, iCharW** endptr, sint32 radix = 10 )
{
	return wcstoul( nptr, endptr, radix );
}

//

inline sint32	AToI( const iCharA* str )							
{ 
	return atoi( str ); 
}

inline sint32	AToI( const iCharW* str )							
{ 
	return _wtoi( str ); 
}

inline sint64	AToI64( const iCharA* str )						
{ 
	return _atoi64( str ); 
}

inline sint64	AToI64( const iCharW* str )						
{ 
	return _wtoi64( str ); 
}

inline iCharA*	IToA( sint32 val, iCharA* str, sint32 radix )		
{ 
	return itoa( val, str, radix ); 
}

inline iCharW*	IToA( sint32 val, iCharW* str, sint32 radix )		
{ 
	return _itow( val, str, radix ); 
}

inline iCharA*	LToA( sint32 val, iCharA* str, sint32 radix )		
{ 
	return ltoa( val, str, radix ); 
}

inline iCharW*	LToA( sint32 val, iCharW* str, sint32 radix )		
{ 
	return _ltow( val, str, radix ); 
}

inline iCharA*	ULToA( uint32 val, iCharA* str, sint32 radix )		
{ 
	return ultoa( val, str, radix ); 
}

inline iCharW*	ULToA( uint32 val, iCharW* str, sint32 radix )		
{ 
	return _ultow( val, str, radix ); 
}

inline iCharA*	I64ToA( sint64 val, iCharA* str, sint32 radix )	
{ 
	return _i64toa( val, str, radix ); 
}

inline iCharW*	I64ToA( sint64 val, iCharW* str, sint32 radix )	
{ 
	return _i64tow( val, str, radix ); 
}

inline iCharA*	UI64ToA( uint64 val, iCharA* str, sint32 radix )	
{ 
	return _ui64toa( val, str, radix ); 
}

inline iCharW*	UI64ToA( uint64 val, iCharW* str, sint32 radix )	
{ 
	return _ui64tow( val, str, radix ); 
}

//

inline iCharA*	StrCat( iCharA* dst, const iCharA* src )				
{ 
	return strcat( dst, src ); 
}

inline iCharW*	StrCat( iCharW* dst, const iCharW* src )				
{ 
	return wcscat( dst, src ); 
}

inline iCharA*	StrCpy( iCharA* dst, const iCharA* src )				
{ 
	return strcpy( dst, src ); 
}

inline iCharW*	StrCpy( iCharW* dst, const iCharW* src )				
{ 
	return wcscpy( dst, src ); 
}

inline iCharA*	StrDup( const iCharA* src )							
{ 
	return strdup( src ); 
}

inline iCharW*	StrDup( const iCharW* src )							
{ 
	return wcsdup( src ); 
}

inline uint32	StrXfrm( iCharA* dst, const iCharA* src, uint32 count ) 
{ 
	return strxfrm( dst, src, count ); 
}

inline uint32	StrXfrm( iCharW* dst, const iCharW* src, uint32 count ) 
{ 
	return wcsxfrm( dst, src, count ); 
}

//

inline sint32 ToUpper( iCharA c )			
{ 
	return toupper(c);
}

inline sint32 ToUpper( iCharW c )			
{ 
	return towupper(c);
}

inline sint32 ToLower( iCharA c )			
{ 
	return tolower(c);
}

inline sint32 ToLower( iCharW c )			
{ 
	return towlower(c);
}

//

inline sint32 IsSpace( iCharA c )							
{ 
	return isspace( c ); 
}

inline sint32 IsSpace( iCharW c )
{ 
	return iswspace( c ); 
}

inline sint32 IsAscii( iCharA c )
{ 
	return isascii( c ); 
}

inline sint32 IsAscii( iCharW c )
{ 
	return iswascii( c ); 
}

inline sint32 IsAlpha( iCharA c )
{ 
	return isalpha( c ); 
}

inline sint32 IsAlpha( iCharW c )
{ 
	return iswalpha( c ); 
}

inline sint32 IsAlNum( iCharA c )
{ 
	return isalnum( c ); 
}

inline sint32 IsAlNum( iCharW c )
{ 
	return iswalnum( c ); 
}

inline sint32 IsCntrl( iCharA c )
{ 
	return iscntrl( c ); 
}

inline sint32 IsCntrl( iCharW c )
{ 
	return iswcntrl( c ); 
}

inline sint32 IsXDigit( iCharA c )
{ 
	return isxdigit( c ); 
}

inline sint32 IsXDigit( iCharW c )
{ 
	return iswxdigit( c ); 
}
//

inline iCharA*	StrChr( const iCharA* str, iCharA c )
{ 
	return (iCharA*) strchr( str, c );
}

inline iCharW*	StrChr( const iCharW* str, iCharW c )
{ 
	iCharW *nstr = const_cast<iCharW*>(str);
	return wcschr( nstr, c ); 
}

inline iCharA*	StrRChr( const iCharA* str, iCharA c )
{ 
	return (iCharA*) strrchr( str, c );
}

inline iCharW*	StrRChr( const iCharW* str, iCharW c )
{ 
	iCharW *nstr = const_cast<iCharW*>(str);
	return wcsrchr( nstr, c ); 
}

inline iCharA*	StrStr( const iCharA* str, const iCharA* sub )
{ 
	return (iCharA*) strstr( str, sub );
}

inline iCharW*	StrStr( const iCharW* str, const iCharW* sub )
{ 
	iCharW *nstr = const_cast<iCharW*>(str);
	return wcsstr( nstr, sub ); 
}

inline iCharA*	StrTok( iCharA* str, const iCharA* delim )
{ 
	return strtok( str, delim ); 
}

inline iCharW*	StrTok( iCharW* str, const iCharW* delim )
{ 
	return wcstok( str, delim ); 
}

inline iCharA*	StrSet( iCharA* str, iCharA c )
{ 
	return strset( str, c ); 
}

inline iCharW*	StrSet( iCharW* str, iCharW c )
{ 
	return wcsset( str, c ); 
}

inline sint32	StrCmp( const iCharA* str1, const iCharA* str2 )
{ 
	return strcmp( str1, str2 ); 
}

inline sint32	StrCmp( const iCharW* str1, const iCharW* str2 )
{ 
	return wcscmp( str1, str2 ); 
}

inline sint32	StrICmp( const iCharA* str1, const iCharA* str2 )
{ 
	return stricmp( str1, str2 ); 
}

inline sint32	StrICmp( const iCharW* str1, const iCharW* str2 )
{ 
	return wcsicmp( str1, str2 ); 
}

inline sint32	StrColl( const iCharA* str1, const iCharA* str2 )
{ 
	return strcoll( str1, str2 ); 
}

inline sint32	StrColl( const iCharW* str1, const iCharW* str2 )
{ 
	return wcscoll( str1, str2 ); 
}

inline sint32	StrIColl( const iCharA* str1, const iCharA* str2 )	
{ 
	return _stricoll( str1, str2 ); 
}

inline sint32	StrIColl( const iCharW* str1, const iCharW* str2 )	
{ 
	return _wcsicoll( str1, str2 ); 
}

inline uint32	StrSpn( const iCharA* str, const iCharA* chars )
{ 
	return strspn( str, chars ); 
}

inline uint32	StrSpn( const iCharW* str, const iCharW* chars )
{ 
	return wcsspn( str, chars ); 
}

inline uint32	StrCSpn( const iCharA* str, const iCharA* chars )
{ 
	return strcspn( str, chars ); 
}

inline uint32	StrCSpn( const iCharW* str, const iCharW* chars )
{ 
	return wcscspn( str, chars ); 
}

inline iCharA*	StrLwr( iCharA* str )
{ 
	return CharLowerA( str ); 
}

inline iCharW*	StrLwr( iCharW* str )
{ 
	return CharLowerW( str ); 
}

inline iCharA*	StrUpr( iCharA* str )
{ 
	return CharUpperA( str ); 
}

inline iCharW*	StrUpr( iCharW* str )
{ 
	return CharUpperW( str ); 
}

//

inline uint32	StrLen( const iCharA* str )										
{ 
	return (uint32) strlen( str ); 
}

inline uint32	StrLen( const iCharW* str )										
{ 
	return (uint32) wcslen( str ); 
}

inline iCharA*	StrNCat( iCharA* dst, const iCharA* src, uint32 count )
{ 
	return strncat( dst, src, (uint32)count ); 
}

inline iCharW*	StrNCat( iCharW* dst, const iCharW* src, uint32 count )
{ 
	return wcsncat( dst, src, (uint32)count ); 
}

inline iCharA*	StrNCpy( iCharA* dst, const iCharA* src, uint32 count )
{ 
	return strncpy( dst, src, (uint32)count ); 
}

inline iCharW*	StrNCpy( iCharW* dst, const iCharW* src, uint32 count )
{ 
	return wcsncpy( dst, src, (uint32)count ); 
}

inline iCharA*	StrNSet( iCharA* dst, iCharA c, uint32 count )
{ 
	return strnset( dst, c, (uint32)count ); 
}

inline iCharW*	StrNSet( iCharW* dst, iCharW c, uint32 count )
{ 
	return wcsnset( dst, c, (uint32)count ); 
}

inline sint32	StrNCmp( const iCharA* str1, const iCharA* str2, uint32 count )
{ 
	return strncmp( str1, str2, (uint32)count ); 
}

inline sint32	StrNCmp( const iCharW* str1, const iCharW* str2, uint32 count )
{ 
	return wcsncmp( str1, str2, (uint32)count ); 
}

inline sint32	StrNICmp( const iCharA* str1, const iCharA* str2, uint32 count )
{ 
	return strnicmp( str1, str2, (uint32)count ); 
}

inline sint32	StrNICmp( const iCharW* str1, const iCharW* str2, uint32 count )
{ 
	return wcsnicmp( str1, str2, (uint32)count ); 
}

inline sint32	StrNColl( const iCharA* str1, const iCharA* str2, uint32 count )
{ 
	return _strncoll( str1, str2, (uint32)count ); 
}

inline sint32	StrNColl( const iCharW* str1, const iCharW* str2, uint32 count )
{ 
	return _wcsncoll( str1, str2, (uint32)count ); 
}

inline sint32	StrNIColl( const iCharA* str1, const iCharA* str2, uint32 count )
{ 
	return _strnicoll( str1, str2, (uint32)count ); 
}

inline sint32	StrNIColl( const iCharW* str1, const iCharW* str2, uint32 count )
{ 
	return _wcsnicoll( str1, str2, (uint32)count ); 
}

} // namespace IOSTRING_STD

#endif //_IOLIB_HELIUM_STRING_STD_H_
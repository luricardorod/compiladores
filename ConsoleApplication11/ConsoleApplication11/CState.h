#pragma once

namespace LEXIC_STATES
{
	enum E
	{
		lNONE,
		lID,			//a...z | A...Z | _ [<text>]
		lNUMBERINT,		//0...9 [number]
		lNUMBERFLOAT,	//[number] . [number]
		lCOMMENTS,		///*....*/
		lLOGICOPERATORS, //&&, || , !
		lARITMETCOPERATORS,  // +, -, *, / , %, ^
		lRELACIONALOPERTORS, //<, >, <= , >= , == , !=
		lASSIGN,     //=
		lCONSTALFANUMERIC, //"..."
		lDELIMITERS, // , ; :
		lGROUPOPERATORS, //(, ), { , }
		lOPENDIMENSIONOPERATOR, // [
		lCLOSEDIMENSIONOPERATOR, // ]
		lSTATES_MAX
	};
}


class CState
{
public:
	virtual int Evaluate(char character) = 0;
	virtual int Enter(char character) = 0;
	virtual void Exit() = 0;
	virtual ~CState() {};
};

//48 57  numeros  65 a 90 may  97 122 min
bool IsNumber(char character) {
	return character > 47 && character < 58;
}
bool IsLetter(char character) {
	return (character > 64 && character < 91) || (character > 96 && character < 123);
}
bool Is_(char character) {
	return character == '_';
}
#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FFXFSR3Settings.FFXFSR3Settings
// (None)

class UClass* UFFXFSR3Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FFXFSR3Settings");

	return Clss;
}


// FFXFSR3Settings FFXFSR3Settings.Default__FFXFSR3Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFFXFSR3Settings* UFFXFSR3Settings::GetDefaultObj()
{
	static class UFFXFSR3Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFFXFSR3Settings*>(UFFXFSR3Settings::StaticClass()->DefaultObject);

	return Default;
}

}



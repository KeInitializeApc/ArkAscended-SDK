#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalUIData_XSX.GlobalUIData_XSX_C
// (None)

class UClass* UGlobalUIData_XSX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalUIData_XSX_C");

	return Clss;
}


// GlobalUIData_XSX_C GlobalUIData_XSX.Default__GlobalUIData_XSX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalUIData_XSX_C* UGlobalUIData_XSX_C::GetDefaultObj()
{
	static class UGlobalUIData_XSX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalUIData_XSX_C*>(UGlobalUIData_XSX_C::StaticClass()->DefaultObject);

	return Default;
}

}



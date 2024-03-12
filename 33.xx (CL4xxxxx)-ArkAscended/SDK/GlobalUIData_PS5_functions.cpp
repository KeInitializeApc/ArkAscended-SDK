#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalUIData_PS5.GlobalUIData_PS5_C
// (None)

class UClass* UGlobalUIData_PS5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalUIData_PS5_C");

	return Clss;
}


// GlobalUIData_PS5_C GlobalUIData_PS5.Default__GlobalUIData_PS5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalUIData_PS5_C* UGlobalUIData_PS5_C::GetDefaultObj()
{
	static class UGlobalUIData_PS5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalUIData_PS5_C*>(UGlobalUIData_PS5_C::StaticClass()->DefaultObject);

	return Default;
}

}



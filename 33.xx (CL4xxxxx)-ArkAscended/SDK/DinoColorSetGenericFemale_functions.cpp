#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoColorSetGenericFemale.DinoColorSetGenericFemale_C
// (None)

class UClass* UDinoColorSetGenericFemale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoColorSetGenericFemale_C");

	return Clss;
}


// DinoColorSetGenericFemale_C DinoColorSetGenericFemale.Default__DinoColorSetGenericFemale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoColorSetGenericFemale_C* UDinoColorSetGenericFemale_C::GetDefaultObj()
{
	static class UDinoColorSetGenericFemale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoColorSetGenericFemale_C*>(UDinoColorSetGenericFemale_C::StaticClass()->DefaultObject);

	return Default;
}

}



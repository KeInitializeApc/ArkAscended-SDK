#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoColorSetGenericMale.DinoColorSetGenericMale_C
// (None)

class UClass* UDinoColorSetGenericMale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoColorSetGenericMale_C");

	return Clss;
}


// DinoColorSetGenericMale_C DinoColorSetGenericMale.Default__DinoColorSetGenericMale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoColorSetGenericMale_C* UDinoColorSetGenericMale_C::GetDefaultObj()
{
	static class UDinoColorSetGenericMale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoColorSetGenericMale_C*>(UDinoColorSetGenericMale_C::StaticClass()->DefaultObject);

	return Default;
}

}



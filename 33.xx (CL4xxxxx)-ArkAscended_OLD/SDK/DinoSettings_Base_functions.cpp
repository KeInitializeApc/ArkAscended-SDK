#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoSettings_Base.DinoSettings_Base_C
// (None)

class UClass* UDinoSettings_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoSettings_Base_C");

	return Clss;
}


// DinoSettings_Base_C DinoSettings_Base.Default__DinoSettings_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoSettings_Base_C* UDinoSettings_Base_C::GetDefaultObj()
{
	static class UDinoSettings_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoSettings_Base_C*>(UDinoSettings_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}



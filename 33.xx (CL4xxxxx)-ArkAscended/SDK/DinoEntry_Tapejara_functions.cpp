#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Tapejara.DinoEntry_Tapejara_C
// (None)

class UClass* UDinoEntry_Tapejara_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Tapejara_C");

	return Clss;
}


// DinoEntry_Tapejara_C DinoEntry_Tapejara.Default__DinoEntry_Tapejara_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Tapejara_C* UDinoEntry_Tapejara_C::GetDefaultObj()
{
	static class UDinoEntry_Tapejara_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Tapejara_C*>(UDinoEntry_Tapejara_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Euryp.DinoEntry_Euryp_C
// (None)

class UClass* UDinoEntry_Euryp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Euryp_C");

	return Clss;
}


// DinoEntry_Euryp_C DinoEntry_Euryp.Default__DinoEntry_Euryp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Euryp_C* UDinoEntry_Euryp_C::GetDefaultObj()
{
	static class UDinoEntry_Euryp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Euryp_C*>(UDinoEntry_Euryp_C::StaticClass()->DefaultObject);

	return Default;
}

}



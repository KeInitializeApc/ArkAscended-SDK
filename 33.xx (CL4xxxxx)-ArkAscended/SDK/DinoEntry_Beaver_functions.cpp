#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Beaver.DinoEntry_Beaver_C
// (None)

class UClass* UDinoEntry_Beaver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Beaver_C");

	return Clss;
}


// DinoEntry_Beaver_C DinoEntry_Beaver.Default__DinoEntry_Beaver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Beaver_C* UDinoEntry_Beaver_C::GetDefaultObj()
{
	static class UDinoEntry_Beaver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Beaver_C*>(UDinoEntry_Beaver_C::StaticClass()->DefaultObject);

	return Default;
}

}



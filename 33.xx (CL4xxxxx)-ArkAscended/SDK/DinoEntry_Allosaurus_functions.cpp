#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Allosaurus.DinoEntry_Allosaurus_C
// (None)

class UClass* UDinoEntry_Allosaurus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Allosaurus_C");

	return Clss;
}


// DinoEntry_Allosaurus_C DinoEntry_Allosaurus.Default__DinoEntry_Allosaurus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Allosaurus_C* UDinoEntry_Allosaurus_C::GetDefaultObj()
{
	static class UDinoEntry_Allosaurus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Allosaurus_C*>(UDinoEntry_Allosaurus_C::StaticClass()->DefaultObject);

	return Default;
}

}



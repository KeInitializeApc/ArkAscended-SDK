#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_TekHoverSail.DinoEntry_TekHoverSail_C
// (None)

class UClass* UDinoEntry_TekHoverSail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_TekHoverSail_C");

	return Clss;
}


// DinoEntry_TekHoverSail_C DinoEntry_TekHoverSail.Default__DinoEntry_TekHoverSail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_TekHoverSail_C* UDinoEntry_TekHoverSail_C::GetDefaultObj()
{
	static class UDinoEntry_TekHoverSail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_TekHoverSail_C*>(UDinoEntry_TekHoverSail_C::StaticClass()->DefaultObject);

	return Default;
}

}



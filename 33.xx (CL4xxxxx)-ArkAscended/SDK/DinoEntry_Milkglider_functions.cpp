#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Milkglider.DinoEntry_Milkglider_C
// (None)

class UClass* UDinoEntry_Milkglider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Milkglider_C");

	return Clss;
}


// DinoEntry_Milkglider_C DinoEntry_Milkglider.Default__DinoEntry_Milkglider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Milkglider_C* UDinoEntry_Milkglider_C::GetDefaultObj()
{
	static class UDinoEntry_Milkglider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Milkglider_C*>(UDinoEntry_Milkglider_C::StaticClass()->DefaultObject);

	return Default;
}

}



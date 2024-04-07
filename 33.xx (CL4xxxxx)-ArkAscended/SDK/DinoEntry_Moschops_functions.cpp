#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Moschops.DinoEntry_Moschops_C
// (None)

class UClass* UDinoEntry_Moschops_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Moschops_C");

	return Clss;
}


// DinoEntry_Moschops_C DinoEntry_Moschops.Default__DinoEntry_Moschops_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Moschops_C* UDinoEntry_Moschops_C::GetDefaultObj()
{
	static class UDinoEntry_Moschops_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Moschops_C*>(UDinoEntry_Moschops_C::StaticClass()->DefaultObject);

	return Default;
}

}



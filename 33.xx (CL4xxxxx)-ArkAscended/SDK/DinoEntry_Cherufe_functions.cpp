#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Cherufe.DinoEntry_Cherufe_C
// (None)

class UClass* UDinoEntry_Cherufe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Cherufe_C");

	return Clss;
}


// DinoEntry_Cherufe_C DinoEntry_Cherufe.Default__DinoEntry_Cherufe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Cherufe_C* UDinoEntry_Cherufe_C::GetDefaultObj()
{
	static class UDinoEntry_Cherufe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Cherufe_C*>(UDinoEntry_Cherufe_C::StaticClass()->DefaultObject);

	return Default;
}

}



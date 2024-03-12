#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_MoleRat.DinoEntry_MoleRat_C
// (None)

class UClass* UDinoEntry_MoleRat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_MoleRat_C");

	return Clss;
}


// DinoEntry_MoleRat_C DinoEntry_MoleRat.Default__DinoEntry_MoleRat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_MoleRat_C* UDinoEntry_MoleRat_C::GetDefaultObj()
{
	static class UDinoEntry_MoleRat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_MoleRat_C*>(UDinoEntry_MoleRat_C::StaticClass()->DefaultObject);

	return Default;
}

}



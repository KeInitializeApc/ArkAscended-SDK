#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Leedsichthys.DinoEntry_Leedsichthys_C
// (None)

class UClass* UDinoEntry_Leedsichthys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Leedsichthys_C");

	return Clss;
}


// DinoEntry_Leedsichthys_C DinoEntry_Leedsichthys.Default__DinoEntry_Leedsichthys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Leedsichthys_C* UDinoEntry_Leedsichthys_C::GetDefaultObj()
{
	static class UDinoEntry_Leedsichthys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Leedsichthys_C*>(UDinoEntry_Leedsichthys_C::StaticClass()->DefaultObject);

	return Default;
}

}



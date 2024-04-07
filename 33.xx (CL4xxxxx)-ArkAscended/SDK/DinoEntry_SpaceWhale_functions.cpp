#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_SpaceWhale.DinoEntry_SpaceWhale_C
// (None)

class UClass* UDinoEntry_SpaceWhale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_SpaceWhale_C");

	return Clss;
}


// DinoEntry_SpaceWhale_C DinoEntry_SpaceWhale.Default__DinoEntry_SpaceWhale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_SpaceWhale_C* UDinoEntry_SpaceWhale_C::GetDefaultObj()
{
	static class UDinoEntry_SpaceWhale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_SpaceWhale_C*>(UDinoEntry_SpaceWhale_C::StaticClass()->DefaultObject);

	return Default;
}

}



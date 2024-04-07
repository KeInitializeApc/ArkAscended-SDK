#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Kangaroo.DinoEntry_Kangaroo_C
// (None)

class UClass* UDinoEntry_Kangaroo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Kangaroo_C");

	return Clss;
}


// DinoEntry_Kangaroo_C DinoEntry_Kangaroo.Default__DinoEntry_Kangaroo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Kangaroo_C* UDinoEntry_Kangaroo_C::GetDefaultObj()
{
	static class UDinoEntry_Kangaroo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Kangaroo_C*>(UDinoEntry_Kangaroo_C::StaticClass()->DefaultObject);

	return Default;
}

}



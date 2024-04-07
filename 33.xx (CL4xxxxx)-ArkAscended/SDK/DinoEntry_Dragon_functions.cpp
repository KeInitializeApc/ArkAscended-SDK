#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dragon.DinoEntry_Dragon_C
// (None)

class UClass* UDinoEntry_Dragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dragon_C");

	return Clss;
}


// DinoEntry_Dragon_C DinoEntry_Dragon.Default__DinoEntry_Dragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dragon_C* UDinoEntry_Dragon_C::GetDefaultObj()
{
	static class UDinoEntry_Dragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dragon_C*>(UDinoEntry_Dragon_C::StaticClass()->DefaultObject);

	return Default;
}

}



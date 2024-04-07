#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Sheep.DinoEntry_Sheep_C
// (None)

class UClass* UDinoEntry_Sheep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Sheep_C");

	return Clss;
}


// DinoEntry_Sheep_C DinoEntry_Sheep.Default__DinoEntry_Sheep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Sheep_C* UDinoEntry_Sheep_C::GetDefaultObj()
{
	static class UDinoEntry_Sheep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Sheep_C*>(UDinoEntry_Sheep_C::StaticClass()->DefaultObject);

	return Default;
}

}



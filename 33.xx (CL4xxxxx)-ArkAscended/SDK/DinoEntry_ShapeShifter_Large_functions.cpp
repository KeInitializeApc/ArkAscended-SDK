#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_ShapeShifter_Large.DinoEntry_ShapeShifter_Large_C
// (None)

class UClass* UDinoEntry_ShapeShifter_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_ShapeShifter_Large_C");

	return Clss;
}


// DinoEntry_ShapeShifter_Large_C DinoEntry_ShapeShifter_Large.Default__DinoEntry_ShapeShifter_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_ShapeShifter_Large_C* UDinoEntry_ShapeShifter_Large_C::GetDefaultObj()
{
	static class UDinoEntry_ShapeShifter_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_ShapeShifter_Large_C*>(UDinoEntry_ShapeShifter_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}



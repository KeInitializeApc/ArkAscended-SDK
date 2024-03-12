#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_ShapeShifter_Small.DinoEntry_ShapeShifter_Small_C
// (None)

class UClass* UDinoEntry_ShapeShifter_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_ShapeShifter_Small_C");

	return Clss;
}


// DinoEntry_ShapeShifter_Small_C DinoEntry_ShapeShifter_Small.Default__DinoEntry_ShapeShifter_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_ShapeShifter_Small_C* UDinoEntry_ShapeShifter_Small_C::GetDefaultObj()
{
	static class UDinoEntry_ShapeShifter_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_ShapeShifter_Small_C*>(UDinoEntry_ShapeShifter_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}



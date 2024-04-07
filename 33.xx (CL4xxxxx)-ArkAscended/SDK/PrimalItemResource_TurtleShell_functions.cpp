#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_TurtleShell.PrimalItemResource_TurtleShell_C
// (None)

class UClass* UPrimalItemResource_TurtleShell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_TurtleShell_C");

	return Clss;
}


// PrimalItemResource_TurtleShell_C PrimalItemResource_TurtleShell.Default__PrimalItemResource_TurtleShell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_TurtleShell_C* UPrimalItemResource_TurtleShell_C::GetDefaultObj()
{
	static class UPrimalItemResource_TurtleShell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_TurtleShell_C*>(UPrimalItemResource_TurtleShell_C::StaticClass()->DefaultObject);

	return Default;
}

}



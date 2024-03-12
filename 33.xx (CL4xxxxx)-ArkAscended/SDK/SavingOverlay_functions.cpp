#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SavingOverlay.SavingOverlay_C
// (None)

class UClass* USavingOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SavingOverlay_C");

	return Clss;
}


// SavingOverlay_C SavingOverlay.Default__SavingOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USavingOverlay_C* USavingOverlay_C::GetDefaultObj()
{
	static class USavingOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USavingOverlay_C*>(USavingOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}



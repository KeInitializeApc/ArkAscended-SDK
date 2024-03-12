#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TamingList_Entry.TamingList_Entry_C
// (None)

class UClass* UTamingList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TamingList_Entry_C");

	return Clss;
}


// TamingList_Entry_C TamingList_Entry.Default__TamingList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTamingList_Entry_C* UTamingList_Entry_C::GetDefaultObj()
{
	static class UTamingList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTamingList_Entry_C*>(UTamingList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}

}



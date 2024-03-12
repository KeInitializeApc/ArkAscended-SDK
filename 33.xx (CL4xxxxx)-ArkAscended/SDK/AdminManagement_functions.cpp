#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AdminManagement.AdminManagement_C
// (None)

class UClass* UAdminManagement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdminManagement_C");

	return Clss;
}


// AdminManagement_C AdminManagement.Default__AdminManagement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdminManagement_C* UAdminManagement_C::GetDefaultObj()
{
	static class UAdminManagement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdminManagement_C*>(UAdminManagement_C::StaticClass()->DefaultObject);

	return Default;
}

}



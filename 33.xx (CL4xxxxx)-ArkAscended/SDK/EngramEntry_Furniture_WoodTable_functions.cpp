#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Furniture_WoodTable.EngramEntry_Furniture_WoodTable_C
// (None)

class UClass* UEngramEntry_Furniture_WoodTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Furniture_WoodTable_C");

	return Clss;
}


// EngramEntry_Furniture_WoodTable_C EngramEntry_Furniture_WoodTable.Default__EngramEntry_Furniture_WoodTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Furniture_WoodTable_C* UEngramEntry_Furniture_WoodTable_C::GetDefaultObj()
{
	static class UEngramEntry_Furniture_WoodTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Furniture_WoodTable_C*>(UEngramEntry_Furniture_WoodTable_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Canteen.EngramEntry_Canteen_C
// (None)

class UClass* UEngramEntry_Canteen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Canteen_C");

	return Clss;
}


// EngramEntry_Canteen_C EngramEntry_Canteen.Default__EngramEntry_Canteen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Canteen_C* UEngramEntry_Canteen_C::GetDefaultObj()
{
	static class UEngramEntry_Canteen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Canteen_C*>(UEngramEntry_Canteen_C::StaticClass()->DefaultObject);

	return Default;
}

}



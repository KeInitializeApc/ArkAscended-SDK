#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Slingshot.EngramEntry_Slingshot_C
// (None)

class UClass* UEngramEntry_Slingshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Slingshot_C");

	return Clss;
}


// EngramEntry_Slingshot_C EngramEntry_Slingshot.Default__EngramEntry_Slingshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Slingshot_C* UEngramEntry_Slingshot_C::GetDefaultObj()
{
	static class UEngramEntry_Slingshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Slingshot_C*>(UEngramEntry_Slingshot_C::StaticClass()->DefaultObject);

	return Default;
}

}



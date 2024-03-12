#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ScubaShirt_SuitWithTank.EngramEntry_ScubaShirt_SuitWithTank_C
// (None)

class UClass* UEngramEntry_ScubaShirt_SuitWithTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ScubaShirt_SuitWithTank_C");

	return Clss;
}


// EngramEntry_ScubaShirt_SuitWithTank_C EngramEntry_ScubaShirt_SuitWithTank.Default__EngramEntry_ScubaShirt_SuitWithTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ScubaShirt_SuitWithTank_C* UEngramEntry_ScubaShirt_SuitWithTank_C::GetDefaultObj()
{
	static class UEngramEntry_ScubaShirt_SuitWithTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ScubaShirt_SuitWithTank_C*>(UEngramEntry_ScubaShirt_SuitWithTank_C::StaticClass()->DefaultObject);

	return Default;
}

}



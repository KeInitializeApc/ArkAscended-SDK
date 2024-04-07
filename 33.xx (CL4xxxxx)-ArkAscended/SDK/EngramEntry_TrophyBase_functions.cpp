#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TrophyBase.EngramEntry_TrophyBase_C
// (None)

class UClass* UEngramEntry_TrophyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TrophyBase_C");

	return Clss;
}


// EngramEntry_TrophyBase_C EngramEntry_TrophyBase.Default__EngramEntry_TrophyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TrophyBase_C* UEngramEntry_TrophyBase_C::GetDefaultObj()
{
	static class UEngramEntry_TrophyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TrophyBase_C*>(UEngramEntry_TrophyBase_C::StaticClass()->DefaultObject);

	return Default;
}

}



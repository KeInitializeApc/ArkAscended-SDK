#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ArrowStone.EngramEntry_ArrowStone_C
// (None)

class UClass* UEngramEntry_ArrowStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ArrowStone_C");

	return Clss;
}


// EngramEntry_ArrowStone_C EngramEntry_ArrowStone.Default__EngramEntry_ArrowStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ArrowStone_C* UEngramEntry_ArrowStone_C::GetDefaultObj()
{
	static class UEngramEntry_ArrowStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ArrowStone_C*>(UEngramEntry_ArrowStone_C::StaticClass()->DefaultObject);

	return Default;
}

}



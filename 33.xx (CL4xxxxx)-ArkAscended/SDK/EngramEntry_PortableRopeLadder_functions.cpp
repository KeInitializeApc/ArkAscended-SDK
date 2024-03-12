#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PortableRopeLadder.EngramEntry_PortableRopeLadder_C
// (None)

class UClass* UEngramEntry_PortableRopeLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PortableRopeLadder_C");

	return Clss;
}


// EngramEntry_PortableRopeLadder_C EngramEntry_PortableRopeLadder.Default__EngramEntry_PortableRopeLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PortableRopeLadder_C* UEngramEntry_PortableRopeLadder_C::GetDefaultObj()
{
	static class UEngramEntry_PortableRopeLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PortableRopeLadder_C*>(UEngramEntry_PortableRopeLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}



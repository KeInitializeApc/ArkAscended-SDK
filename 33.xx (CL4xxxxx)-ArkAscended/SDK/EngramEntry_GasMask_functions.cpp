#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GasMask.EngramEntry_GasMask_C
// (None)

class UClass* UEngramEntry_GasMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GasMask_C");

	return Clss;
}


// EngramEntry_GasMask_C EngramEntry_GasMask.Default__EngramEntry_GasMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GasMask_C* UEngramEntry_GasMask_C::GetDefaultObj()
{
	static class UEngramEntry_GasMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GasMask_C*>(UEngramEntry_GasMask_C::StaticClass()->DefaultObject);

	return Default;
}

}



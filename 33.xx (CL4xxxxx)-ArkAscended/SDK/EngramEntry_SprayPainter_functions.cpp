#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SprayPainter.EngramEntry_SprayPainter_C
// (None)

class UClass* UEngramEntry_SprayPainter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SprayPainter_C");

	return Clss;
}


// EngramEntry_SprayPainter_C EngramEntry_SprayPainter.Default__EngramEntry_SprayPainter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SprayPainter_C* UEngramEntry_SprayPainter_C::GetDefaultObj()
{
	static class UEngramEntry_SprayPainter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SprayPainter_C*>(UEngramEntry_SprayPainter_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Spino.EngramEntry_Saddle_Spino_C
// (None)

class UClass* UEngramEntry_Saddle_Spino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Spino_C");

	return Clss;
}


// EngramEntry_Saddle_Spino_C EngramEntry_Saddle_Spino.Default__EngramEntry_Saddle_Spino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Spino_C* UEngramEntry_Saddle_Spino_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Spino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Spino_C*>(UEngramEntry_Saddle_Spino_C::StaticClass()->DefaultObject);

	return Default;
}

}



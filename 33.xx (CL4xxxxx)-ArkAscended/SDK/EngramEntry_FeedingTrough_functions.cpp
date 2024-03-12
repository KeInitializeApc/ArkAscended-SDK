#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FeedingTrough.EngramEntry_FeedingTrough_C
// (None)

class UClass* UEngramEntry_FeedingTrough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FeedingTrough_C");

	return Clss;
}


// EngramEntry_FeedingTrough_C EngramEntry_FeedingTrough.Default__EngramEntry_FeedingTrough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FeedingTrough_C* UEngramEntry_FeedingTrough_C::GetDefaultObj()
{
	static class UEngramEntry_FeedingTrough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FeedingTrough_C*>(UEngramEntry_FeedingTrough_C::StaticClass()->DefaultObject);

	return Default;
}

}


